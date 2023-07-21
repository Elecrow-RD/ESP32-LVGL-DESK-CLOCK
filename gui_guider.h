/*
 * Copyright 2023 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */

#ifndef GUI_GUIDER_H
#define GUI_GUIDER_H
#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"
#include "guider_fonts.h"

typedef struct
{
	lv_obj_t *screen;
	bool screen_del;
	lv_obj_t *screen_img_10;
	lv_obj_t *screen_img_9;
	lv_obj_t *screen_img_8;
	lv_obj_t *screen_img_7;
	lv_obj_t *screen_label_1;
	lv_obj_t *screen_label_2;
	lv_obj_t *screen_img_1;
	lv_obj_t *screen_label_3;
	lv_obj_t *screen_label_4;
	lv_obj_t *screen_img_2;
	lv_obj_t *screen_label_5;
	lv_obj_t *screen_label_6;
	lv_obj_t *screen_img_3;
	lv_obj_t *screen_label_7;
	lv_obj_t *screen_label_8;
	lv_obj_t *screen_img_4;
	lv_obj_t *screen_line_1;
	lv_obj_t *screen_label_9;
	lv_obj_t *screen_label_10;
	lv_obj_t *screen_label_11;
	lv_obj_t *screen_img_5;
	lv_obj_t *screen_img_6;
	lv_obj_t *screen_label_12;
	lv_obj_t *screen_label_13;
	lv_obj_t *screen_label_14;
}lv_ui;

void init_scr_del_flag(lv_ui *ui);
void setup_ui(lv_ui *ui);
extern lv_ui guider_ui;
void setup_scr_screen(lv_ui *ui);
LV_IMG_DECLARE(_11_106x99);
LV_IMG_DECLARE(_taiyang_106x99);
LV_IMG_DECLARE(_5_106x99);
LV_IMG_DECLARE(_wendu2_56x50);
LV_IMG_DECLARE(_10_106x99);
LV_IMG_DECLARE(_localtion_17x17);
LV_IMG_DECLARE(_14_106x99);
LV_IMG_DECLARE(_sheshidu1_19x20);

#ifdef __cplusplus
}
#endif
#endif