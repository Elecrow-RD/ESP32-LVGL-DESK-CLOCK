// SPDX-License-Identifier: MIT
// Copyright 2020 NXP

/*
 * custom.h
 *
 *  Created on: July 29, 2020
 *      Author: nxf53801
 */

#ifndef __CUSTOM_H_
#define __CUSTOM_H_
#ifdef __cplusplus
extern "C" {
#endif

#include "gui_guider.h"
#include <time.h>

struct WetherData
{
    char city[32];
    char weather[64];
    char weather_1[64];
    char weather_2[64];
    char high[32];
    char humi[32];
};

extern struct WetherData weatherdata;
extern struct tm timeinfo;
extern char WIFI_try;

void custom_init(lv_ui *ui);
extern void get_weather();
extern void get_time();

#ifdef __cplusplus
}
#endif
#endif /* EVENT_CB_H_ */
