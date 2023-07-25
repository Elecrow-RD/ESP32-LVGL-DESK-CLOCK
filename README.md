**DIY a Desk Clock using ESP32 Display 2.4inch and LVGL**

Hey everyone, in this video I want to share with you a project I've been working on using the ESP32 Display2.4inch board. I've created a desktop clock that not only tells the time, but also displays the latest weather information and updates the time automatically using network time protocol.

To create this clock, I used the LVGL graphics library to design the user interface and display the clock and weather information. I also used HTTP to connect to the internet and fetch the latest weather data from a web API. And to keep the clock accurate, I used NTP to synchronize the time with a network time server.

Overall, this project was a great way for me to learn more about embedded systems and network programming with the ESP32. I hope you enjoy watching and maybe even try building your own clock with these features!

Software:

GUI Guider:[GUI Guider-LVGL Development tool](https://www.nxp.com.cn/design/software/development-software/gui-guider:GUI-GUIDER)
GUI Guider is a user-friendly graphical user interface development tool from NXP that enables the rapid development of high quality displays with the open-source LVGL graphics library. GUI Guider's drag-and-drop editor makes it easy to utilize the many features of LVGL such as widgets, animations and styles to create a GUI with minimal or no coding at all.
With the click of a button, you can run your application in a simulated environment or export it to a target project. Generated code from GUI Guider can easily be added to an MCUXpresso IDE or IAR Embedded Workbench project, accelerating the development process and allowing you to seamlessly add an embedded user interface to your application.
GUI Guider is free to use with NXP’s general purpose and crossover MCUs, and includes built in project templates for several supported platforms.

Hardware:

ESP32 Display 2.4Inch:[ESP32 display-2.4 Inch HMI Display 240x320 SPI TFT LCD Touch Screen Compatible with Arduino/LVGL](https://www.elecrow.com/esp32-display-2-4-inch-intelligent-spi-tft-lcd-touch-screen-hmi-display.html)

![图片描述](https://github.com/Elecrow-RD/ESP32-LVGL-DESK-CLOCK/blob/master/img1.jpg)

![img2](https://github.com/Elecrow-RD/ESP32-LVGL-DESK-CLOCK/blob/master/img2.png "img2")

![img3](https://github.com/Elecrow-RD/ESP32-LVGL-DESK-CLOCK/blob/master/img3.png "img3")
