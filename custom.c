// SPDX-License-Identifier: MIT
// Copyright 2020 NXP

/**
 * @file custom.c
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include <stdio.h>
#include "lvgl.h"
#include "custom.h"

/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/

/**********************
 *  STATIC VARIABLES
 **********************/
const char* weekday_text[] = {"Sun.", "Mon.", "Tue.", "Wed.", "Thur.", "Fri.", "Sat."};
const char* weather_text[] = {"Sunny", "Cloudy", "Rainy", "Showery", "Thundery"};
const char* month_text[] = {"Jan.", "Feb.", "Mar.", "Apr.", "May.", "Jun.", "Jul.", "Aug.", "Sep.", "Oct.", "Nov.", "Dec."};
static lv_timer_t * flash_weather_timer = NULL; // inclare a timer that used to get weather info 
static lv_timer_t * flash_time_timer = NULL; // inclare a timer that used to get time info 
lv_ui *c_ui = NULL;
/**
 * Create a demo application
 */

void set_weather_img(char* weather_param,lv_obj_t* obj,int big_small)
{
  if(strcmp(weather_param,"0") == 0)
  {
    lv_img_set_src(obj,&_taiyang_106x99);
    if(big_small == 0)
    {
      lv_label_set_text(c_ui->screen_label_3, weather_text[0]);
    }
    if(big_small)
    {
      lv_img_set_zoom(obj,120);
      lv_img_set_size_mode(obj, LV_IMG_SIZE_MODE_REAL);
      if(big_small == 1)
      {
        lv_label_set_text(c_ui->screen_label_13, weather_text[0]);
      }
      else if(big_small == 2)
      {
        lv_label_set_text(c_ui->screen_label_14, weather_text[0]);
      }
    }
  }
  else if((strcmp(weather_param,"4") == 0) || (strcmp(weather_param,"5") == 0) || (strcmp(weather_param,"6") == 0) || (strcmp(weather_param,"7") == 0) || (strcmp(weather_param,"8") == 0) || (strcmp(weather_param,"9") == 0))             
  {
    lv_img_set_src(obj,&_5_106x99);
    if(big_small == 0)
    {
      lv_label_set_text(c_ui->screen_label_3, weather_text[1]);
    }
    if(big_small)
    {
      lv_img_set_zoom(obj,110);
      lv_img_set_size_mode(obj, LV_IMG_SIZE_MODE_REAL);
      if(big_small == 1)
      {
        lv_label_set_text(c_ui->screen_label_13, weather_text[1]);
      }
      else if(big_small == 2)
      {
        lv_label_set_text(c_ui->screen_label_14, weather_text[1]);
      }
    }
  }
  else if(strcmp(weather_param,"10") == 0)
  {
    lv_img_set_src(obj,&_10_106x99);
    if(big_small == 0)
    {
      lv_label_set_text(c_ui->screen_label_3, weather_text[3]);
    }
    if(big_small)
    {
      lv_img_set_zoom(obj,110);
      lv_img_set_size_mode(obj, LV_IMG_SIZE_MODE_REAL);
      if(big_small == 1)
      {
        lv_label_set_text(c_ui->screen_label_13, weather_text[3]);
      }
      else if(big_small ==2)
      {
        lv_label_set_text(c_ui->screen_label_14, weather_text[3]);
      }
    }
  }
  else if(strcmp(weather_param,"11") == 0)
  {
    lv_img_set_src(obj,&_11_106x99);
    if(big_small == 0)
    {
      lv_label_set_text(c_ui->screen_label_3, weather_text[4]);
    }
    if(big_small)
    {
      lv_img_set_zoom(obj,110);
      lv_img_set_size_mode(obj, LV_IMG_SIZE_MODE_REAL);
      if(big_small == 1)
      {
        lv_label_set_text(c_ui->screen_label_13, weather_text[4]);
      }
      else if(big_small == 2)
      {
        lv_label_set_text(c_ui->screen_label_14, weather_text[4]);
      }
    }
  }
  else if((strcmp(weather_param,"13") == 0) || (strcmp(weather_param,"14") == 0) || (strcmp(weather_param,"15") == 0) || (strcmp(weather_param,"16") == 0) || (strcmp(weather_param,"17") == 0) || (strcmp(weather_param,"18") == 0))
  {
    lv_img_set_src(obj,&_14_106x99);
    if(big_small == 0)
    {
      lv_label_set_text(c_ui->screen_label_3, weather_text[2]);
    }
    if(big_small)
    {
      lv_img_set_zoom(obj,110);
      lv_img_set_size_mode(obj, LV_IMG_SIZE_MODE_REAL);
      if(big_small == 1)
      {
        lv_label_set_text(c_ui->screen_label_13, weather_text[2]);
      }
      else if(big_small == 2)
      {
        lv_label_set_text(c_ui->screen_label_14, weather_text[2]);
      }
    }
  }
}


void flash_weather_timer_callback(lv_timer_t * timer)
{
  static counter = 0;
  counter++;
  if(counter >= 360)
  {
    get_weather();
    lv_label_set_text(c_ui->screen_label_7, weatherdata.city);
    lv_label_set_text(c_ui->screen_label_4, weatherdata.high);
    lv_label_set_text(c_ui->screen_label_5, weatherdata.humi);

    set_weather_img(&weatherdata.weather,c_ui->screen_img_1, 0);
    set_weather_img(&weatherdata.weather_1,c_ui->screen_img_5, 1);
    set_weather_img(&weatherdata.weather_2,c_ui->screen_img_6, 2);
    
    counter = 0;
  }
  
}

void flash_time_timer_callback(lv_timer_t * timer)
{
  static unsigned int counter = 0;
  static start_init = 0;
  char current_time[16];
  get_time();
  memset(current_time, 0, sizeof(current_time));
  sprintf(current_time, "%02d:%02d", timeinfo.tm_hour, timeinfo.tm_min);
  lv_label_set_text(c_ui->screen_label_6, current_time);

//  if(timeinfo.tm_hour == 0 || start_init == 0)
//  {
    start_init = 1;
    memset(current_time, 0, sizeof(current_time));
    sprintf(current_time, "%s %02d %04d", month_text[timeinfo.tm_mon + 1], timeinfo.tm_mday, timeinfo.tm_year + 1900);
    lv_label_set_text(c_ui->screen_label_9, current_time);

    memset(current_time, 0, sizeof(current_time));
    sprintf(current_time, "%02d/%02d", timeinfo.tm_mon + 1, timeinfo.tm_mday + 1);
    lv_label_set_text(c_ui->screen_label_10, current_time);
    memset(current_time, 0, sizeof(current_time));
    sprintf(current_time, "%02d/%02d", timeinfo.tm_mon + 1, timeinfo.tm_mday + 2);
    lv_label_set_text(c_ui->screen_label_11, current_time);
    
    lv_label_set_text(c_ui->screen_label_8, weekday_text[timeinfo.tm_wday]);
//  }
}


void custom_init(lv_ui *ui)
{
  /* Add your codes here */
  c_ui = ui;

  if(WIFI_try <= 8)
  {
    get_weather();
    lv_label_set_text(c_ui->screen_label_7, weatherdata.city);
    lv_label_set_text(c_ui->screen_label_4, weatherdata.high);
    lv_label_set_text(c_ui->screen_label_5, weatherdata.humi);
  
    set_weather_img(&weatherdata.weather,c_ui->screen_img_1, 0);
    set_weather_img(&weatherdata.weather_1,c_ui->screen_img_5, 1);
    set_weather_img(&weatherdata.weather_2,c_ui->screen_img_6, 2);
    
    flash_weather_timer = lv_timer_create(flash_weather_timer_callback, 10000, NULL);
    flash_time_timer    = lv_timer_create(flash_time_timer_callback, 371, NULL);
  }
}
