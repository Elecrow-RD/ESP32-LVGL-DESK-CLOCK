#include <lvgl.h>
#include <TFT_eSPI.h>
#include <Arduino.h>
#include <ArduinoJson.h>
#include <WiFi.h>
#include "events_init.h"
#include "gui_guider.h"

#include "custom.h"

//-----------------WIFI value init---------------------------
const char *ssid = "njlll";
const char *password = "886886886";
WiFiClient client;
char WIFI_try = 0;

//---------------------------http Get init-----------------------
const char *host = "api.seniverse.com";
const char *privateKey = "SCQedubpM5ktC0h6J";
const char *city = "shenzhen";
const char *language = "en";
String getUrl = "/v3/weather/daily.json?key=";
struct WetherData weatherdata = {0};

//---------------------time value init---------------------------
const char* ntpServer = "pool.ntp.org";  // NTP server
const long  gmtOffset_sec = 8*3600;           // GMT offset in seconds
const int   daylightOffset_sec = 0;   // Daylight offset in seconds
struct tm timeinfo;

//------------------lvgl & screen value init---------------------
static const uint16_t screenWidth  = 320;
static const uint16_t screenHeight = 240;
static lv_disp_draw_buf_t draw_buf;
static lv_color_t buf1[ screenWidth * screenHeight / 8 ];
lv_ui guider_ui;
TFT_eSPI lcd = TFT_eSPI(); 


void get_weather();
void get_time();


void my_disp_flush( lv_disp_drv_t *disp, const lv_area_t *area, lv_color_t *color_p )
{
  uint32_t w = ( area->x2 - area->x1 + 1 );
  uint32_t h = ( area->y2 - area->y1 + 1 );

  lcd.startWrite();
  lcd.setAddrWindow( area->x1, area->y1, w, h );
  lcd.pushColors( ( uint16_t * )&color_p->full, w * h, true );
  lcd.endWrite();

  lv_disp_flush_ready( disp );
}

uint16_t touchX, touchY;
/*读取触摸板*/
void my_touchpad_read( lv_indev_drv_t * indev_driver, lv_indev_data_t * data )
{
  bool touched = lcd.getTouch( &touchX, &touchY, 600);
  if ( !touched )
  {
    data->state = LV_INDEV_STATE_REL;
  }
  else
  {
    data->state = LV_INDEV_STATE_PR;

    /*设置坐标*/
    data->point.x = touchX;
    data->point.y = touchY;

    Serial.print( "Data x " );
    Serial.println( touchX );

    Serial.print( "Data y " );
    Serial.println( touchY );
  }
}

void setup()
{
  
  Serial.begin( 9600 ); /*初始化串口*/

  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED)
  {
      WIFI_try+=1;
      delay(1000);
      Serial.print(".");
      if(WIFI_try > 8)
      {  break;}
  }

  Serial.println("");
  Serial.println("WiFi connected");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());

  if (!client.connect(host, 80)){
    Serial.println("Connect host failed!");
  }else{
    Serial.println("host Conected!");
  }

//  //IO口引脚
//  pinMode(25, OUTPUT);
//  digitalWrite(25, LOW);
//  
  //lvgl初始化
  lv_init();

  //LCD初始化
  lcd.begin();          /*初始化*/
  lcd.fillScreen(TFT_BLACK);
  delay(100);
  //背光引脚
  pinMode(27, OUTPUT);
  digitalWrite(27, HIGH);
  lcd.setRotation(1); /* 旋转 */

  lv_disp_draw_buf_init( &draw_buf, buf1, NULL, screenWidth * screenHeight / 8 );

  /*初始化显示*/
  static lv_disp_drv_t disp_drv;
  lv_disp_drv_init( &disp_drv );
  /*将以下行更改为显示分辨率*/
  disp_drv.hor_res = screenWidth;
  disp_drv.ver_res = screenHeight;
  disp_drv.flush_cb = my_disp_flush;
  disp_drv.draw_buf = &draw_buf;
  lv_disp_drv_register( &disp_drv );

  /*初始化（虚拟）输入设备驱动程序*/
  static lv_indev_drv_t indev_drv;
  lv_indev_drv_init( &indev_drv );
  indev_drv.type = LV_INDEV_TYPE_POINTER;
  indev_drv.read_cb = my_touchpad_read;
  lv_indev_drv_register( &indev_drv );


  setup_ui(&guider_ui);
  events_init(&guider_ui);
  custom_init(&guider_ui);

  //get_weather();
  
}

void get_weather()
{
  getUrl += privateKey;
  getUrl += "&location=";
  getUrl += city;
  getUrl += "&language=";
  getUrl += language;
  getUrl += "&unit=c&start=0&days=3";
  
  client.print(String("GET ") + getUrl + " HTTP/1.1\r\n" + "Host: " + host + "\r\n" + "Connection: close\r\n\r\n");
  Serial.println("Get send");

  char endOfHeaders[] = "\r\n\r\n";
  bool ok = client.find(endOfHeaders);
  if (!ok)
  {
      Serial.println("No response or invalid response!");
  }
  Serial.println("Skip headers");

  String line="";

  line += client.readStringUntil('\n'); 

  Serial.println(line);

  DynamicJsonDocument doc(1400);

  DeserializationError error = deserializeJson(doc, line);
  if (error)
  {
      Serial.println("deserialize json failed");
  }
  else
  {
     Serial.println("deserialize json success");
  }

  memset(&weatherdata, 0, sizeof(weatherdata));

  strcpy(weatherdata.city, doc["results"][0]["location"]["name"].as<const char*>());
  strcpy(weatherdata.weather, doc["results"][0]["daily"][0]["code_day"].as<const char*>());     //today
  strcpy(weatherdata.weather_1, doc["results"][0]["daily"][1]["code_day"].as<const char*>());   //tomorrow
  strcpy(weatherdata.weather_2, doc["results"][0]["daily"][2]["code_day"].as<const char*>());   //the day after tomorrow
  strcpy(weatherdata.high, doc["results"][0]["daily"][0]["high"].as<const char*>());
  strcpy(weatherdata.humi, doc["results"][0]["daily"][0]["humidity"].as<const char*>());

  Serial.println("City");
  Serial.println(weatherdata.city);
  Serial.println("Codeday");
  Serial.println(weatherdata.weather);
  Serial.println("temp high");
  Serial.println(weatherdata.high);
  Serial.println("humi");
  Serial.println(weatherdata.humi);

}

void get_time()
{
  configTime(gmtOffset_sec, daylightOffset_sec, ntpServer);
  if (!getLocalTime(&timeinfo)) {
    Serial.println("Failed to obtain time");
    return;
  }
  Serial.println(&timeinfo, "%A, %B %d %Y %H:%M:%S");
}

void loop()
{
  lv_timer_handler(); /* let the GUI do its work */
  delay( 5 );
}
