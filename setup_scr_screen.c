/*
 * Copyright 2023 NXP
 * SPDX-License-Identifier: MIT
 * The auto-generated can only be used on NXP devices
 */

#include "lvgl.h"
#include <stdio.h>
#include "gui_guider.h"
#include "events_init.h"
#include "custom.h"


void setup_scr_screen(lv_ui *ui){

  //Write codes screen
  ui->screen = lv_obj_create(NULL);
  lv_obj_set_scrollbar_mode(ui->screen, LV_SCROLLBAR_MODE_OFF);

  //Write style state: LV_STATE_DEFAULT for style_screen_main_main_default
  static lv_style_t style_screen_main_main_default;
  if (style_screen_main_main_default.prop_cnt > 1)
    lv_style_reset(&style_screen_main_main_default);
  else
    lv_style_init(&style_screen_main_main_default);
  lv_style_set_bg_color(&style_screen_main_main_default, lv_color_make(0xff, 0xff, 0xff));
  lv_style_set_bg_opa(&style_screen_main_main_default, 0);
  lv_obj_add_style(ui->screen, &style_screen_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

  //Write codes screen_img_10
  ui->screen_img_10 = lv_img_create(ui->screen);
  lv_obj_set_pos(ui->screen_img_10, 19, 17);
  lv_obj_set_size(ui->screen_img_10, 106, 99);
  lv_obj_set_scrollbar_mode(ui->screen_img_10, LV_SCROLLBAR_MODE_OFF);

  //Write style state: LV_STATE_DEFAULT for style_screen_img_10_main_main_default
  static lv_style_t style_screen_img_10_main_main_default;
  if (style_screen_img_10_main_main_default.prop_cnt > 1)
    lv_style_reset(&style_screen_img_10_main_main_default);
  else
    lv_style_init(&style_screen_img_10_main_main_default);
  lv_style_set_img_recolor(&style_screen_img_10_main_main_default, lv_color_make(0xff, 0xff, 0xff));
  lv_style_set_img_recolor_opa(&style_screen_img_10_main_main_default, 0);
  lv_style_set_img_opa(&style_screen_img_10_main_main_default, 255);
  lv_obj_add_style(ui->screen_img_10, &style_screen_img_10_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
  lv_obj_add_flag(ui->screen_img_10, LV_OBJ_FLAG_CLICKABLE);
  lv_img_set_src(ui->screen_img_10,&_taiyang_106x99);
  lv_img_set_pivot(ui->screen_img_10, 50,50);
  lv_img_set_angle(ui->screen_img_10, 0);

  //Write codes screen_img_9
  ui->screen_img_9 = lv_img_create(ui->screen);
  lv_obj_set_pos(ui->screen_img_9, 18, 15);
  lv_obj_set_size(ui->screen_img_9, 106, 99);
  lv_obj_set_scrollbar_mode(ui->screen_img_9, LV_SCROLLBAR_MODE_OFF);

  //Write style state: LV_STATE_DEFAULT for style_screen_img_9_main_main_default
  static lv_style_t style_screen_img_9_main_main_default;
  if (style_screen_img_9_main_main_default.prop_cnt > 1)
    lv_style_reset(&style_screen_img_9_main_main_default);
  else
    lv_style_init(&style_screen_img_9_main_main_default);
  lv_style_set_img_recolor(&style_screen_img_9_main_main_default, lv_color_make(0xff, 0xff, 0xff));
  lv_style_set_img_recolor_opa(&style_screen_img_9_main_main_default, 0);
  lv_style_set_img_opa(&style_screen_img_9_main_main_default, 255);
  lv_obj_add_style(ui->screen_img_9, &style_screen_img_9_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
  lv_obj_add_flag(ui->screen_img_9, LV_OBJ_FLAG_CLICKABLE);
  lv_img_set_src(ui->screen_img_9,&_14_106x99);
  lv_img_set_pivot(ui->screen_img_9, 50,50);
  lv_img_set_angle(ui->screen_img_9, 0);

  //Write codes screen_img_8
  ui->screen_img_8 = lv_img_create(ui->screen);
  lv_obj_set_pos(ui->screen_img_8, 18, 15);
  lv_obj_set_size(ui->screen_img_8, 106, 99);
  lv_obj_set_scrollbar_mode(ui->screen_img_8, LV_SCROLLBAR_MODE_OFF);

  //Write style state: LV_STATE_DEFAULT for style_screen_img_8_main_main_default
  static lv_style_t style_screen_img_8_main_main_default;
  if (style_screen_img_8_main_main_default.prop_cnt > 1)
    lv_style_reset(&style_screen_img_8_main_main_default);
  else
    lv_style_init(&style_screen_img_8_main_main_default);
  lv_style_set_img_recolor(&style_screen_img_8_main_main_default, lv_color_make(0xff, 0xff, 0xff));
  lv_style_set_img_recolor_opa(&style_screen_img_8_main_main_default, 0);
  lv_style_set_img_opa(&style_screen_img_8_main_main_default, 255);
  lv_obj_add_style(ui->screen_img_8, &style_screen_img_8_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
  lv_obj_add_flag(ui->screen_img_8, LV_OBJ_FLAG_CLICKABLE);
  lv_img_set_src(ui->screen_img_8,&_5_106x99);
  lv_img_set_pivot(ui->screen_img_8, 50,50);
  lv_img_set_angle(ui->screen_img_8, 0);

  //Write codes screen_img_7
  ui->screen_img_7 = lv_img_create(ui->screen);
  lv_obj_set_pos(ui->screen_img_7, 18, 15);
  lv_obj_set_size(ui->screen_img_7, 106, 99);
  lv_obj_set_scrollbar_mode(ui->screen_img_7, LV_SCROLLBAR_MODE_OFF);

  //Write style state: LV_STATE_DEFAULT for style_screen_img_7_main_main_default
  static lv_style_t style_screen_img_7_main_main_default;
  if (style_screen_img_7_main_main_default.prop_cnt > 1)
    lv_style_reset(&style_screen_img_7_main_main_default);
  else
    lv_style_init(&style_screen_img_7_main_main_default);
  lv_style_set_img_recolor(&style_screen_img_7_main_main_default, lv_color_make(0xff, 0xff, 0xff));
  lv_style_set_img_recolor_opa(&style_screen_img_7_main_main_default, 0);
  lv_style_set_img_opa(&style_screen_img_7_main_main_default, 255);
  lv_obj_add_style(ui->screen_img_7, &style_screen_img_7_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
  lv_obj_add_flag(ui->screen_img_7, LV_OBJ_FLAG_CLICKABLE);
  lv_img_set_src(ui->screen_img_7,&_11_106x99);
  lv_img_set_pivot(ui->screen_img_7, 50,50);
  lv_img_set_angle(ui->screen_img_7, 0);

  //Write codes screen_label_1
  ui->screen_label_1 = lv_label_create(ui->screen);
  lv_obj_set_pos(ui->screen_label_1, 0, 0);
  lv_obj_set_size(ui->screen_label_1, 320, 240);
  lv_obj_set_scrollbar_mode(ui->screen_label_1, LV_SCROLLBAR_MODE_OFF);
  lv_label_set_text(ui->screen_label_1, "");
  lv_label_set_long_mode(ui->screen_label_1, LV_LABEL_LONG_WRAP);

  //Write style state: LV_STATE_DEFAULT for style_screen_label_1_main_main_default
  static lv_style_t style_screen_label_1_main_main_default;
  if (style_screen_label_1_main_main_default.prop_cnt > 1)
    lv_style_reset(&style_screen_label_1_main_main_default);
  else
    lv_style_init(&style_screen_label_1_main_main_default);
  lv_style_set_radius(&style_screen_label_1_main_main_default, 0);
  lv_style_set_bg_color(&style_screen_label_1_main_main_default, lv_color_make(0x6e, 0xa0, 0x11));
  lv_style_set_bg_grad_color(&style_screen_label_1_main_main_default, lv_color_make(0x00, 0x00, 0x00));
  lv_style_set_bg_grad_dir(&style_screen_label_1_main_main_default, LV_GRAD_DIR_NONE);
  lv_style_set_bg_opa(&style_screen_label_1_main_main_default, 255);
  lv_style_set_shadow_width(&style_screen_label_1_main_main_default, 0);
  lv_style_set_shadow_color(&style_screen_label_1_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_shadow_opa(&style_screen_label_1_main_main_default, 255);
  lv_style_set_shadow_spread(&style_screen_label_1_main_main_default, 0);
  lv_style_set_shadow_ofs_x(&style_screen_label_1_main_main_default, 0);
  lv_style_set_shadow_ofs_y(&style_screen_label_1_main_main_default, 0);
  lv_style_set_text_color(&style_screen_label_1_main_main_default, lv_color_make(0xff, 0xff, 0xff));
  lv_style_set_text_letter_space(&style_screen_label_1_main_main_default, 2);
  lv_style_set_text_line_space(&style_screen_label_1_main_main_default, 0);
  lv_style_set_text_align(&style_screen_label_1_main_main_default, LV_TEXT_ALIGN_CENTER);
  lv_style_set_pad_left(&style_screen_label_1_main_main_default, 0);
  lv_style_set_pad_right(&style_screen_label_1_main_main_default, 0);
  lv_style_set_pad_top(&style_screen_label_1_main_main_default, 8);
  lv_style_set_pad_bottom(&style_screen_label_1_main_main_default, 0);
  lv_obj_add_style(ui->screen_label_1, &style_screen_label_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

  //Write codes screen_label_2
  ui->screen_label_2 = lv_label_create(ui->screen);
  lv_obj_set_pos(ui->screen_label_2, 13, 14);
  lv_obj_set_size(ui->screen_label_2, 294, 213);
  lv_obj_set_scrollbar_mode(ui->screen_label_2, LV_SCROLLBAR_MODE_OFF);
  lv_label_set_text(ui->screen_label_2, "");
  lv_label_set_long_mode(ui->screen_label_2, LV_LABEL_LONG_WRAP);

  //Write style state: LV_STATE_DEFAULT for style_screen_label_2_main_main_default
  static lv_style_t style_screen_label_2_main_main_default;
  if (style_screen_label_2_main_main_default.prop_cnt > 1)
    lv_style_reset(&style_screen_label_2_main_main_default);
  else
    lv_style_init(&style_screen_label_2_main_main_default);
  lv_style_set_radius(&style_screen_label_2_main_main_default, 0);
  lv_style_set_bg_color(&style_screen_label_2_main_main_default, lv_color_make(0xff, 0xff, 0xff));
  lv_style_set_bg_grad_color(&style_screen_label_2_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_bg_grad_dir(&style_screen_label_2_main_main_default, LV_GRAD_DIR_NONE);
  lv_style_set_bg_opa(&style_screen_label_2_main_main_default, 120);
  lv_style_set_shadow_width(&style_screen_label_2_main_main_default, 15);
  lv_style_set_shadow_color(&style_screen_label_2_main_main_default, lv_color_make(0xff, 0xff, 0xff));
  lv_style_set_shadow_opa(&style_screen_label_2_main_main_default, 255);
  lv_style_set_shadow_spread(&style_screen_label_2_main_main_default, 7);
  lv_style_set_shadow_ofs_x(&style_screen_label_2_main_main_default, 0);
  lv_style_set_shadow_ofs_y(&style_screen_label_2_main_main_default, 0);
  lv_style_set_text_color(&style_screen_label_2_main_main_default, lv_color_make(0xff, 0xff, 0xff));
  lv_style_set_text_letter_space(&style_screen_label_2_main_main_default, 2);
  lv_style_set_text_line_space(&style_screen_label_2_main_main_default, 0);
  lv_style_set_text_align(&style_screen_label_2_main_main_default, LV_TEXT_ALIGN_CENTER);
  lv_style_set_pad_left(&style_screen_label_2_main_main_default, 0);
  lv_style_set_pad_right(&style_screen_label_2_main_main_default, 0);
  lv_style_set_pad_top(&style_screen_label_2_main_main_default, 0);
  lv_style_set_pad_bottom(&style_screen_label_2_main_main_default, 0);
  lv_obj_add_style(ui->screen_label_2, &style_screen_label_2_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

  //Write codes screen_img_1
  ui->screen_img_1 = lv_img_create(ui->screen);
  lv_obj_set_pos(ui->screen_img_1, 21, 22);
  lv_obj_set_size(ui->screen_img_1, 106, 99);
  lv_obj_set_scrollbar_mode(ui->screen_img_1, LV_SCROLLBAR_MODE_OFF);

  //Write style state: LV_STATE_DEFAULT for style_screen_img_1_main_main_default
  static lv_style_t style_screen_img_1_main_main_default;
  if (style_screen_img_1_main_main_default.prop_cnt > 1)
    lv_style_reset(&style_screen_img_1_main_main_default);
  else
    lv_style_init(&style_screen_img_1_main_main_default);
  lv_style_set_img_recolor(&style_screen_img_1_main_main_default, lv_color_make(0xff, 0xff, 0xff));
  lv_style_set_img_recolor_opa(&style_screen_img_1_main_main_default, 0);
  lv_style_set_img_opa(&style_screen_img_1_main_main_default, 255);
  lv_obj_add_style(ui->screen_img_1, &style_screen_img_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
  lv_obj_add_flag(ui->screen_img_1, LV_OBJ_FLAG_CLICKABLE);
  lv_img_set_src(ui->screen_img_1,&_10_106x99);
  lv_img_set_pivot(ui->screen_img_1, 50,50);
  lv_img_set_angle(ui->screen_img_1, 0);

  //Write codes screen_label_3
  ui->screen_label_3 = lv_label_create(ui->screen);
  lv_obj_set_pos(ui->screen_label_3, 17, 129);
  lv_obj_set_size(ui->screen_label_3, 107, 27);
  lv_obj_set_scrollbar_mode(ui->screen_label_3, LV_SCROLLBAR_MODE_OFF);
  lv_label_set_text(ui->screen_label_3, "Shower");
  lv_label_set_long_mode(ui->screen_label_3, LV_LABEL_LONG_WRAP);

  //Write style state: LV_STATE_DEFAULT for style_screen_label_3_main_main_default
  static lv_style_t style_screen_label_3_main_main_default;
  if (style_screen_label_3_main_main_default.prop_cnt > 1)
    lv_style_reset(&style_screen_label_3_main_main_default);
  else
    lv_style_init(&style_screen_label_3_main_main_default);
  lv_style_set_radius(&style_screen_label_3_main_main_default, 0);
  lv_style_set_bg_color(&style_screen_label_3_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_bg_grad_color(&style_screen_label_3_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_bg_grad_dir(&style_screen_label_3_main_main_default, LV_GRAD_DIR_NONE);
  lv_style_set_bg_opa(&style_screen_label_3_main_main_default, 0);
  lv_style_set_shadow_width(&style_screen_label_3_main_main_default, 0);
  lv_style_set_shadow_color(&style_screen_label_3_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_shadow_opa(&style_screen_label_3_main_main_default, 255);
  lv_style_set_shadow_spread(&style_screen_label_3_main_main_default, 0);
  lv_style_set_shadow_ofs_x(&style_screen_label_3_main_main_default, 0);
  lv_style_set_shadow_ofs_y(&style_screen_label_3_main_main_default, 0);
  lv_style_set_text_color(&style_screen_label_3_main_main_default, lv_color_make(0xff, 0xff, 0xff));
  lv_style_set_text_font(&style_screen_label_3_main_main_default, &lv_font_Acme_Regular_26);
  lv_style_set_text_letter_space(&style_screen_label_3_main_main_default, 2);
  lv_style_set_text_line_space(&style_screen_label_3_main_main_default, 0);
  lv_style_set_text_align(&style_screen_label_3_main_main_default, LV_TEXT_ALIGN_CENTER);
  lv_style_set_pad_left(&style_screen_label_3_main_main_default, 0);
  lv_style_set_pad_right(&style_screen_label_3_main_main_default, 0);
  lv_style_set_pad_top(&style_screen_label_3_main_main_default, 0);
  lv_style_set_pad_bottom(&style_screen_label_3_main_main_default, 0);
  lv_obj_add_style(ui->screen_label_3, &style_screen_label_3_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

  //Write codes screen_label_4
  ui->screen_label_4 = lv_label_create(ui->screen);
  lv_obj_set_pos(ui->screen_label_4, 68, 193);
  lv_obj_set_size(ui->screen_label_4, 31, 20);
  lv_obj_set_scrollbar_mode(ui->screen_label_4, LV_SCROLLBAR_MODE_OFF);
  lv_label_set_text(ui->screen_label_4, "26");
  lv_label_set_long_mode(ui->screen_label_4, LV_LABEL_LONG_WRAP);

  //Write style state: LV_STATE_DEFAULT for style_screen_label_4_main_main_default
  static lv_style_t style_screen_label_4_main_main_default;
  if (style_screen_label_4_main_main_default.prop_cnt > 1)
    lv_style_reset(&style_screen_label_4_main_main_default);
  else
    lv_style_init(&style_screen_label_4_main_main_default);
  lv_style_set_radius(&style_screen_label_4_main_main_default, 0);
  lv_style_set_bg_color(&style_screen_label_4_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_bg_grad_color(&style_screen_label_4_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_bg_grad_dir(&style_screen_label_4_main_main_default, LV_GRAD_DIR_NONE);
  lv_style_set_bg_opa(&style_screen_label_4_main_main_default, 0);
  lv_style_set_shadow_width(&style_screen_label_4_main_main_default, 0);
  lv_style_set_shadow_color(&style_screen_label_4_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_shadow_opa(&style_screen_label_4_main_main_default, 255);
  lv_style_set_shadow_spread(&style_screen_label_4_main_main_default, 0);
  lv_style_set_shadow_ofs_x(&style_screen_label_4_main_main_default, 0);
  lv_style_set_shadow_ofs_y(&style_screen_label_4_main_main_default, 0);
  lv_style_set_text_color(&style_screen_label_4_main_main_default, lv_color_make(0xff, 0xff, 0xff));
  lv_style_set_text_font(&style_screen_label_4_main_main_default, &lv_font_Acme_Regular_20);
  lv_style_set_text_letter_space(&style_screen_label_4_main_main_default, 2);
  lv_style_set_text_line_space(&style_screen_label_4_main_main_default, 0);
  lv_style_set_text_align(&style_screen_label_4_main_main_default, LV_TEXT_ALIGN_CENTER);
  lv_style_set_pad_left(&style_screen_label_4_main_main_default, 0);
  lv_style_set_pad_right(&style_screen_label_4_main_main_default, 0);
  lv_style_set_pad_top(&style_screen_label_4_main_main_default, 0);
  lv_style_set_pad_bottom(&style_screen_label_4_main_main_default, 0);
  lv_obj_add_style(ui->screen_label_4, &style_screen_label_4_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

  //Write codes screen_img_2
  ui->screen_img_2 = lv_img_create(ui->screen);
  lv_obj_set_pos(ui->screen_img_2, 17, 165);
  lv_obj_set_size(ui->screen_img_2, 56, 50);
  lv_obj_set_scrollbar_mode(ui->screen_img_2, LV_SCROLLBAR_MODE_OFF);

  //Write style state: LV_STATE_DEFAULT for style_screen_img_2_main_main_default
  static lv_style_t style_screen_img_2_main_main_default;
  if (style_screen_img_2_main_main_default.prop_cnt > 1)
    lv_style_reset(&style_screen_img_2_main_main_default);
  else
    lv_style_init(&style_screen_img_2_main_main_default);
  lv_style_set_img_recolor(&style_screen_img_2_main_main_default, lv_color_make(0xc5, 0xff, 0xf5));
  lv_style_set_img_recolor_opa(&style_screen_img_2_main_main_default, 229);
  lv_style_set_img_opa(&style_screen_img_2_main_main_default, 233);
  lv_obj_add_style(ui->screen_img_2, &style_screen_img_2_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
  lv_obj_add_flag(ui->screen_img_2, LV_OBJ_FLAG_CLICKABLE);
  lv_img_set_src(ui->screen_img_2,&_wendu2_56x50);
  lv_img_set_pivot(ui->screen_img_2, 50,50);
  lv_img_set_angle(ui->screen_img_2, 0);

  //Write codes screen_label_5
  ui->screen_label_5 = lv_label_create(ui->screen);
  lv_obj_set_pos(ui->screen_label_5, 69, 165);
  lv_obj_set_size(ui->screen_label_5, 29, 21);
  lv_obj_set_scrollbar_mode(ui->screen_label_5, LV_SCROLLBAR_MODE_OFF);
  lv_label_set_text(ui->screen_label_5, "32");
  lv_label_set_long_mode(ui->screen_label_5, LV_LABEL_LONG_WRAP);

  //Write style state: LV_STATE_DEFAULT for style_screen_label_5_main_main_default
  static lv_style_t style_screen_label_5_main_main_default;
  if (style_screen_label_5_main_main_default.prop_cnt > 1)
    lv_style_reset(&style_screen_label_5_main_main_default);
  else
    lv_style_init(&style_screen_label_5_main_main_default);
  lv_style_set_radius(&style_screen_label_5_main_main_default, 0);
  lv_style_set_bg_color(&style_screen_label_5_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_bg_grad_color(&style_screen_label_5_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_bg_grad_dir(&style_screen_label_5_main_main_default, LV_GRAD_DIR_NONE);
  lv_style_set_bg_opa(&style_screen_label_5_main_main_default, 0);
  lv_style_set_shadow_width(&style_screen_label_5_main_main_default, 0);
  lv_style_set_shadow_color(&style_screen_label_5_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_shadow_opa(&style_screen_label_5_main_main_default, 255);
  lv_style_set_shadow_spread(&style_screen_label_5_main_main_default, 0);
  lv_style_set_shadow_ofs_x(&style_screen_label_5_main_main_default, 0);
  lv_style_set_shadow_ofs_y(&style_screen_label_5_main_main_default, 0);
  lv_style_set_text_color(&style_screen_label_5_main_main_default, lv_color_make(0xff, 0xff, 0xff));
  lv_style_set_text_font(&style_screen_label_5_main_main_default, &lv_font_Acme_Regular_20);
  lv_style_set_text_letter_space(&style_screen_label_5_main_main_default, 2);
  lv_style_set_text_line_space(&style_screen_label_5_main_main_default, 0);
  lv_style_set_text_align(&style_screen_label_5_main_main_default, LV_TEXT_ALIGN_CENTER);
  lv_style_set_pad_left(&style_screen_label_5_main_main_default, 0);
  lv_style_set_pad_right(&style_screen_label_5_main_main_default, 0);
  lv_style_set_pad_top(&style_screen_label_5_main_main_default, 0);
  lv_style_set_pad_bottom(&style_screen_label_5_main_main_default, 0);
  lv_obj_add_style(ui->screen_label_5, &style_screen_label_5_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

  //Write codes screen_label_6
  ui->screen_label_6 = lv_label_create(ui->screen);
  lv_obj_set_pos(ui->screen_label_6, 150, 18);
  lv_obj_set_size(ui->screen_label_6, 150, 48);
  lv_obj_set_scrollbar_mode(ui->screen_label_6, LV_SCROLLBAR_MODE_OFF);
  lv_label_set_text(ui->screen_label_6, "12:56");
  lv_label_set_long_mode(ui->screen_label_6, LV_LABEL_LONG_WRAP);

  //Write style state: LV_STATE_DEFAULT for style_screen_label_6_main_main_default
  static lv_style_t style_screen_label_6_main_main_default;
  if (style_screen_label_6_main_main_default.prop_cnt > 1)
    lv_style_reset(&style_screen_label_6_main_main_default);
  else
    lv_style_init(&style_screen_label_6_main_main_default);
  lv_style_set_radius(&style_screen_label_6_main_main_default, 0);
  lv_style_set_bg_color(&style_screen_label_6_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_bg_grad_color(&style_screen_label_6_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_bg_grad_dir(&style_screen_label_6_main_main_default, LV_GRAD_DIR_NONE);
  lv_style_set_bg_opa(&style_screen_label_6_main_main_default, 0);
  lv_style_set_shadow_width(&style_screen_label_6_main_main_default, 0);
  lv_style_set_shadow_color(&style_screen_label_6_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_shadow_opa(&style_screen_label_6_main_main_default, 255);
  lv_style_set_shadow_spread(&style_screen_label_6_main_main_default, 0);
  lv_style_set_shadow_ofs_x(&style_screen_label_6_main_main_default, 0);
  lv_style_set_shadow_ofs_y(&style_screen_label_6_main_main_default, 0);
  lv_style_set_text_color(&style_screen_label_6_main_main_default, lv_color_make(0xff, 0x91, 0x40));
  lv_style_set_text_font(&style_screen_label_6_main_main_default, &lv_font_Acme_Regular_57);
  lv_style_set_text_letter_space(&style_screen_label_6_main_main_default, 2);
  lv_style_set_text_line_space(&style_screen_label_6_main_main_default, 0);
  lv_style_set_text_align(&style_screen_label_6_main_main_default, LV_TEXT_ALIGN_CENTER);
  lv_style_set_pad_left(&style_screen_label_6_main_main_default, 0);
  lv_style_set_pad_right(&style_screen_label_6_main_main_default, 0);
  lv_style_set_pad_top(&style_screen_label_6_main_main_default, 0);
  lv_style_set_pad_bottom(&style_screen_label_6_main_main_default, 0);
  lv_obj_add_style(ui->screen_label_6, &style_screen_label_6_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

  //Write codes screen_img_3
  ui->screen_img_3 = lv_img_create(ui->screen);
  lv_obj_set_pos(ui->screen_img_3, 212, 206);
  lv_obj_set_size(ui->screen_img_3, 17, 17);
  lv_obj_set_scrollbar_mode(ui->screen_img_3, LV_SCROLLBAR_MODE_OFF);

  //Write style state: LV_STATE_DEFAULT for style_screen_img_3_main_main_default
  static lv_style_t style_screen_img_3_main_main_default;
  if (style_screen_img_3_main_main_default.prop_cnt > 1)
    lv_style_reset(&style_screen_img_3_main_main_default);
  else
    lv_style_init(&style_screen_img_3_main_main_default);
  lv_style_set_img_recolor(&style_screen_img_3_main_main_default, lv_color_make(0x7a, 0x7b, 0xa3));
  lv_style_set_img_recolor_opa(&style_screen_img_3_main_main_default, 147);
  lv_style_set_img_opa(&style_screen_img_3_main_main_default, 210);
  lv_obj_add_style(ui->screen_img_3, &style_screen_img_3_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
  lv_obj_add_flag(ui->screen_img_3, LV_OBJ_FLAG_CLICKABLE);
  lv_img_set_src(ui->screen_img_3,&_localtion_17x17);
  lv_img_set_pivot(ui->screen_img_3, 50,50);
  lv_img_set_angle(ui->screen_img_3, 0);

  //Write codes screen_label_7
  ui->screen_label_7 = lv_label_create(ui->screen);
  lv_obj_set_pos(ui->screen_label_7, 230, 208);
  lv_obj_set_size(ui->screen_label_7, 74, 17);
  lv_obj_set_scrollbar_mode(ui->screen_label_7, LV_SCROLLBAR_MODE_OFF);
  lv_label_set_text(ui->screen_label_7, "ShangHai");
  lv_label_set_long_mode(ui->screen_label_7, LV_LABEL_LONG_WRAP);

  //Write style state: LV_STATE_DEFAULT for style_screen_label_7_main_main_default
  static lv_style_t style_screen_label_7_main_main_default;
  if (style_screen_label_7_main_main_default.prop_cnt > 1)
    lv_style_reset(&style_screen_label_7_main_main_default);
  else
    lv_style_init(&style_screen_label_7_main_main_default);
  lv_style_set_radius(&style_screen_label_7_main_main_default, 0);
  lv_style_set_bg_color(&style_screen_label_7_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_bg_grad_color(&style_screen_label_7_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_bg_grad_dir(&style_screen_label_7_main_main_default, LV_GRAD_DIR_NONE);
  lv_style_set_bg_opa(&style_screen_label_7_main_main_default, 0);
  lv_style_set_shadow_width(&style_screen_label_7_main_main_default, 0);
  lv_style_set_shadow_color(&style_screen_label_7_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_shadow_opa(&style_screen_label_7_main_main_default, 255);
  lv_style_set_shadow_spread(&style_screen_label_7_main_main_default, 0);
  lv_style_set_shadow_ofs_x(&style_screen_label_7_main_main_default, 0);
  lv_style_set_shadow_ofs_y(&style_screen_label_7_main_main_default, 0);
  lv_style_set_text_color(&style_screen_label_7_main_main_default, lv_color_make(0xff, 0xff, 0xff));
  lv_style_set_text_font(&style_screen_label_7_main_main_default, &lv_font_Abel_regular_15);
  lv_style_set_text_letter_space(&style_screen_label_7_main_main_default, 2);
  lv_style_set_text_line_space(&style_screen_label_7_main_main_default, 0);
  lv_style_set_text_align(&style_screen_label_7_main_main_default, LV_TEXT_ALIGN_LEFT);
  lv_style_set_pad_left(&style_screen_label_7_main_main_default, 0);
  lv_style_set_pad_right(&style_screen_label_7_main_main_default, 0);
  lv_style_set_pad_top(&style_screen_label_7_main_main_default, 0);
  lv_style_set_pad_bottom(&style_screen_label_7_main_main_default, 0);
  lv_obj_add_style(ui->screen_label_7, &style_screen_label_7_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

  //Write codes screen_label_8
  ui->screen_label_8 = lv_label_create(ui->screen);
  lv_obj_set_pos(ui->screen_label_8, 134, 75);
  lv_obj_set_size(ui->screen_label_8, 53, 18);
  lv_obj_set_scrollbar_mode(ui->screen_label_8, LV_SCROLLBAR_MODE_OFF);
  lv_label_set_text(ui->screen_label_8, "Fri.");
  lv_label_set_long_mode(ui->screen_label_8, LV_LABEL_LONG_WRAP);

  //Write style state: LV_STATE_DEFAULT for style_screen_label_8_main_main_default
  static lv_style_t style_screen_label_8_main_main_default;
  if (style_screen_label_8_main_main_default.prop_cnt > 1)
    lv_style_reset(&style_screen_label_8_main_main_default);
  else
    lv_style_init(&style_screen_label_8_main_main_default);
  lv_style_set_radius(&style_screen_label_8_main_main_default, 0);
  lv_style_set_bg_color(&style_screen_label_8_main_main_default, lv_color_make(0xa5, 0x6c, 0x75));
  lv_style_set_bg_grad_color(&style_screen_label_8_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_bg_grad_dir(&style_screen_label_8_main_main_default, LV_GRAD_DIR_NONE);
  lv_style_set_bg_opa(&style_screen_label_8_main_main_default, 0);
  lv_style_set_shadow_width(&style_screen_label_8_main_main_default, 0);
  lv_style_set_shadow_color(&style_screen_label_8_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_shadow_opa(&style_screen_label_8_main_main_default, 255);
  lv_style_set_shadow_spread(&style_screen_label_8_main_main_default, 0);
  lv_style_set_shadow_ofs_x(&style_screen_label_8_main_main_default, 0);
  lv_style_set_shadow_ofs_y(&style_screen_label_8_main_main_default, 0);
  lv_style_set_text_color(&style_screen_label_8_main_main_default, lv_color_make(0xff, 0xef, 0x4a));
  lv_style_set_text_font(&style_screen_label_8_main_main_default, &lv_font_Acme_Regular_18);
  lv_style_set_text_letter_space(&style_screen_label_8_main_main_default, 2);
  lv_style_set_text_line_space(&style_screen_label_8_main_main_default, 0);
  lv_style_set_text_align(&style_screen_label_8_main_main_default, LV_TEXT_ALIGN_CENTER);
  lv_style_set_pad_left(&style_screen_label_8_main_main_default, 0);
  lv_style_set_pad_right(&style_screen_label_8_main_main_default, 0);
  lv_style_set_pad_top(&style_screen_label_8_main_main_default, 0);
  lv_style_set_pad_bottom(&style_screen_label_8_main_main_default, 0);
  lv_obj_add_style(ui->screen_label_8, &style_screen_label_8_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

  //Write codes screen_img_4
  ui->screen_img_4 = lv_img_create(ui->screen);
  lv_obj_set_pos(ui->screen_img_4, 98, 193);
  lv_obj_set_size(ui->screen_img_4, 19, 20);
  lv_obj_set_scrollbar_mode(ui->screen_img_4, LV_SCROLLBAR_MODE_OFF);

  //Write style state: LV_STATE_DEFAULT for style_screen_img_4_main_main_default
  static lv_style_t style_screen_img_4_main_main_default;
  if (style_screen_img_4_main_main_default.prop_cnt > 1)
    lv_style_reset(&style_screen_img_4_main_main_default);
  else
    lv_style_init(&style_screen_img_4_main_main_default);
  lv_style_set_img_recolor(&style_screen_img_4_main_main_default, lv_color_make(0xff, 0xff, 0xff));
  lv_style_set_img_recolor_opa(&style_screen_img_4_main_main_default, 255);
  lv_style_set_img_opa(&style_screen_img_4_main_main_default, 255);
  lv_obj_add_style(ui->screen_img_4, &style_screen_img_4_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
  lv_obj_add_flag(ui->screen_img_4, LV_OBJ_FLAG_CLICKABLE);
  lv_img_set_src(ui->screen_img_4,&_sheshidu1_19x20);
  lv_img_set_pivot(ui->screen_img_4, 50,50);
  lv_img_set_angle(ui->screen_img_4, -10);

  //Write codes screen_line_1
  ui->screen_line_1 = lv_line_create(ui->screen);
  lv_obj_set_pos(ui->screen_line_1, 225, 105);
  lv_obj_set_size(ui->screen_line_1, 10, 87);
  lv_obj_set_scrollbar_mode(ui->screen_line_1, LV_SCROLLBAR_MODE_OFF);

  //Write style state: LV_STATE_DEFAULT for style_screen_line_1_main_main_default
  static lv_style_t style_screen_line_1_main_main_default;
  if (style_screen_line_1_main_main_default.prop_cnt > 1)
    lv_style_reset(&style_screen_line_1_main_main_default);
  else
    lv_style_init(&style_screen_line_1_main_main_default);
  lv_style_set_line_color(&style_screen_line_1_main_main_default, lv_color_make(0xff, 0xff, 0xff));
  lv_style_set_line_width(&style_screen_line_1_main_main_default, 2);
  lv_style_set_line_rounded(&style_screen_line_1_main_main_default, true);
  lv_obj_add_style(ui->screen_line_1, &style_screen_line_1_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
  static lv_point_t screen_line_1[] ={{0, 0},{0, 80},};
  lv_line_set_points(ui->screen_line_1,screen_line_1,2);

  //Write codes screen_label_9
  ui->screen_label_9 = lv_label_create(ui->screen);
  lv_obj_set_pos(ui->screen_label_9, 186, 76);
  lv_obj_set_size(ui->screen_label_9, 121, 19);
  lv_obj_set_scrollbar_mode(ui->screen_label_9, LV_SCROLLBAR_MODE_OFF);
  lv_label_set_text(ui->screen_label_9, "Jul. 19 2023\n");
  lv_label_set_long_mode(ui->screen_label_9, LV_LABEL_LONG_WRAP);

  //Write style state: LV_STATE_DEFAULT for style_screen_label_9_main_main_default
  static lv_style_t style_screen_label_9_main_main_default;
  if (style_screen_label_9_main_main_default.prop_cnt > 1)
    lv_style_reset(&style_screen_label_9_main_main_default);
  else
    lv_style_init(&style_screen_label_9_main_main_default);
  lv_style_set_radius(&style_screen_label_9_main_main_default, 0);
  lv_style_set_bg_color(&style_screen_label_9_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_bg_grad_color(&style_screen_label_9_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_bg_grad_dir(&style_screen_label_9_main_main_default, LV_GRAD_DIR_NONE);
  lv_style_set_bg_opa(&style_screen_label_9_main_main_default, 0);
  lv_style_set_shadow_width(&style_screen_label_9_main_main_default, 0);
  lv_style_set_shadow_color(&style_screen_label_9_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_shadow_opa(&style_screen_label_9_main_main_default, 255);
  lv_style_set_shadow_spread(&style_screen_label_9_main_main_default, 0);
  lv_style_set_shadow_ofs_x(&style_screen_label_9_main_main_default, 0);
  lv_style_set_shadow_ofs_y(&style_screen_label_9_main_main_default, 0);
  lv_style_set_text_color(&style_screen_label_9_main_main_default, lv_color_make(0xff, 0xff, 0xff));
  lv_style_set_text_font(&style_screen_label_9_main_main_default, &lv_font_Acme_Regular_17);
  lv_style_set_text_letter_space(&style_screen_label_9_main_main_default, 2);
  lv_style_set_text_line_space(&style_screen_label_9_main_main_default, 0);
  lv_style_set_text_align(&style_screen_label_9_main_main_default, LV_TEXT_ALIGN_CENTER);
  lv_style_set_pad_left(&style_screen_label_9_main_main_default, 0);
  lv_style_set_pad_right(&style_screen_label_9_main_main_default, 0);
  lv_style_set_pad_top(&style_screen_label_9_main_main_default, 0);
  lv_style_set_pad_bottom(&style_screen_label_9_main_main_default, 0);
  lv_obj_add_style(ui->screen_label_9, &style_screen_label_9_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

  //Write codes screen_label_10
  ui->screen_label_10 = lv_label_create(ui->screen);
  lv_obj_set_pos(ui->screen_label_10, 148, 105);
  lv_obj_set_size(ui->screen_label_10, 54, 14);
  lv_obj_set_scrollbar_mode(ui->screen_label_10, LV_SCROLLBAR_MODE_OFF);
  lv_label_set_text(ui->screen_label_10, "07/19");
  lv_label_set_long_mode(ui->screen_label_10, LV_LABEL_LONG_WRAP);

  //Write style state: LV_STATE_DEFAULT for style_screen_label_10_main_main_default
  static lv_style_t style_screen_label_10_main_main_default;
  if (style_screen_label_10_main_main_default.prop_cnt > 1)
    lv_style_reset(&style_screen_label_10_main_main_default);
  else
    lv_style_init(&style_screen_label_10_main_main_default);
  lv_style_set_radius(&style_screen_label_10_main_main_default, 0);
  lv_style_set_bg_color(&style_screen_label_10_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_bg_grad_color(&style_screen_label_10_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_bg_grad_dir(&style_screen_label_10_main_main_default, LV_GRAD_DIR_NONE);
  lv_style_set_bg_opa(&style_screen_label_10_main_main_default, 0);
  lv_style_set_shadow_width(&style_screen_label_10_main_main_default, 0);
  lv_style_set_shadow_color(&style_screen_label_10_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_shadow_opa(&style_screen_label_10_main_main_default, 255);
  lv_style_set_shadow_spread(&style_screen_label_10_main_main_default, 0);
  lv_style_set_shadow_ofs_x(&style_screen_label_10_main_main_default, 0);
  lv_style_set_shadow_ofs_y(&style_screen_label_10_main_main_default, 0);
  lv_style_set_text_color(&style_screen_label_10_main_main_default, lv_color_make(0xff, 0xff, 0xff));
  lv_style_set_text_font(&style_screen_label_10_main_main_default, &lv_font_montserratMedium_16);
  lv_style_set_text_letter_space(&style_screen_label_10_main_main_default, 2);
  lv_style_set_text_line_space(&style_screen_label_10_main_main_default, 0);
  lv_style_set_text_align(&style_screen_label_10_main_main_default, LV_TEXT_ALIGN_CENTER);
  lv_style_set_pad_left(&style_screen_label_10_main_main_default, 0);
  lv_style_set_pad_right(&style_screen_label_10_main_main_default, 0);
  lv_style_set_pad_top(&style_screen_label_10_main_main_default, 0);
  lv_style_set_pad_bottom(&style_screen_label_10_main_main_default, 0);
  lv_obj_add_style(ui->screen_label_10, &style_screen_label_10_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

  //Write codes screen_label_11
  ui->screen_label_11 = lv_label_create(ui->screen);
  lv_obj_set_pos(ui->screen_label_11, 236, 105);
  lv_obj_set_size(ui->screen_label_11, 61, 13);
  lv_obj_set_scrollbar_mode(ui->screen_label_11, LV_SCROLLBAR_MODE_OFF);
  lv_label_set_text(ui->screen_label_11, "07/20");
  lv_label_set_long_mode(ui->screen_label_11, LV_LABEL_LONG_WRAP);

  //Write style state: LV_STATE_DEFAULT for style_screen_label_11_main_main_default
  static lv_style_t style_screen_label_11_main_main_default;
  if (style_screen_label_11_main_main_default.prop_cnt > 1)
    lv_style_reset(&style_screen_label_11_main_main_default);
  else
    lv_style_init(&style_screen_label_11_main_main_default);
  lv_style_set_radius(&style_screen_label_11_main_main_default, 0);
  lv_style_set_bg_color(&style_screen_label_11_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_bg_grad_color(&style_screen_label_11_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_bg_grad_dir(&style_screen_label_11_main_main_default, LV_GRAD_DIR_NONE);
  lv_style_set_bg_opa(&style_screen_label_11_main_main_default, 0);
  lv_style_set_shadow_width(&style_screen_label_11_main_main_default, 0);
  lv_style_set_shadow_color(&style_screen_label_11_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_shadow_opa(&style_screen_label_11_main_main_default, 255);
  lv_style_set_shadow_spread(&style_screen_label_11_main_main_default, 0);
  lv_style_set_shadow_ofs_x(&style_screen_label_11_main_main_default, 0);
  lv_style_set_shadow_ofs_y(&style_screen_label_11_main_main_default, 0);
  lv_style_set_text_color(&style_screen_label_11_main_main_default, lv_color_make(0xff, 0xff, 0xff));
  lv_style_set_text_font(&style_screen_label_11_main_main_default, &lv_font_montserratMedium_16);
  lv_style_set_text_letter_space(&style_screen_label_11_main_main_default, 2);
  lv_style_set_text_line_space(&style_screen_label_11_main_main_default, 0);
  lv_style_set_text_align(&style_screen_label_11_main_main_default, LV_TEXT_ALIGN_CENTER);
  lv_style_set_pad_left(&style_screen_label_11_main_main_default, 0);
  lv_style_set_pad_right(&style_screen_label_11_main_main_default, 0);
  lv_style_set_pad_top(&style_screen_label_11_main_main_default, 0);
  lv_style_set_pad_bottom(&style_screen_label_11_main_main_default, 0);
  lv_obj_add_style(ui->screen_label_11, &style_screen_label_11_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

  //Write codes screen_img_5
  ui->screen_img_5 = lv_img_create(ui->screen);
  lv_obj_set_pos(ui->screen_img_5, 152, 135);
  lv_obj_set_size(ui->screen_img_5, 50, 43);
  lv_obj_set_scrollbar_mode(ui->screen_img_5, LV_SCROLLBAR_MODE_OFF);

  //Write style state: LV_STATE_DEFAULT for style_screen_img_5_main_main_default
  static lv_style_t style_screen_img_5_main_main_default;
  if (style_screen_img_5_main_main_default.prop_cnt > 1)
    lv_style_reset(&style_screen_img_5_main_main_default);
  else
    lv_style_init(&style_screen_img_5_main_main_default);
  lv_style_set_img_recolor(&style_screen_img_5_main_main_default, lv_color_make(0xff, 0xff, 0xff));
  lv_style_set_img_recolor_opa(&style_screen_img_5_main_main_default, 0);
  lv_style_set_img_opa(&style_screen_img_5_main_main_default, 255);
  lv_obj_add_style(ui->screen_img_5, &style_screen_img_5_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
  lv_img_set_src(ui->screen_img_5,&_11_106x99);
  lv_img_set_zoom(ui->screen_img_5,110);
  lv_img_set_size_mode(ui->screen_img_5, LV_IMG_SIZE_MODE_REAL);

  //Write codes screen_img_6
  ui->screen_img_6 = lv_img_create(ui->screen);
  lv_obj_set_pos(ui->screen_img_6, 240, 135);
  lv_obj_set_size(ui->screen_img_6, 50, 43);
  lv_obj_set_scrollbar_mode(ui->screen_img_6, LV_SCROLLBAR_MODE_OFF);

  //Write style state: LV_STATE_DEFAULT for style_screen_img_6_main_main_default
  static lv_style_t style_screen_img_6_main_main_default;
  if (style_screen_img_6_main_main_default.prop_cnt > 1)
    lv_style_reset(&style_screen_img_6_main_main_default);
  else
    lv_style_init(&style_screen_img_6_main_main_default);
  lv_style_set_img_recolor(&style_screen_img_6_main_main_default, lv_color_make(0xff, 0xff, 0xff));
  lv_style_set_img_recolor_opa(&style_screen_img_6_main_main_default, 0);
  lv_style_set_img_opa(&style_screen_img_6_main_main_default, 255);
  lv_obj_add_style(ui->screen_img_6, &style_screen_img_6_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);
  lv_img_set_src(ui->screen_img_6,&_taiyang_106x99);
  lv_img_set_zoom(ui->screen_img_6,110);
  lv_img_set_size_mode(ui->screen_img_6, LV_IMG_SIZE_MODE_REAL);

  //Write codes screen_label_12
  ui->screen_label_12 = lv_label_create(ui->screen);
  lv_obj_set_pos(ui->screen_label_12, 97, 165);
  lv_obj_set_size(ui->screen_label_12, 27, 21);
  lv_obj_set_scrollbar_mode(ui->screen_label_12, LV_SCROLLBAR_MODE_OFF);
  lv_label_set_text(ui->screen_label_12, "%");
  lv_label_set_long_mode(ui->screen_label_12, LV_LABEL_LONG_WRAP);

  //Write style state: LV_STATE_DEFAULT for style_screen_label_12_main_main_default
  static lv_style_t style_screen_label_12_main_main_default;
  if (style_screen_label_12_main_main_default.prop_cnt > 1)
    lv_style_reset(&style_screen_label_12_main_main_default);
  else
    lv_style_init(&style_screen_label_12_main_main_default);
  lv_style_set_radius(&style_screen_label_12_main_main_default, 0);
  lv_style_set_bg_color(&style_screen_label_12_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_bg_grad_color(&style_screen_label_12_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_bg_grad_dir(&style_screen_label_12_main_main_default, LV_GRAD_DIR_NONE);
  lv_style_set_bg_opa(&style_screen_label_12_main_main_default, 0);
  lv_style_set_shadow_width(&style_screen_label_12_main_main_default, 0);
  lv_style_set_shadow_color(&style_screen_label_12_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_shadow_opa(&style_screen_label_12_main_main_default, 255);
  lv_style_set_shadow_spread(&style_screen_label_12_main_main_default, 0);
  lv_style_set_shadow_ofs_x(&style_screen_label_12_main_main_default, 0);
  lv_style_set_shadow_ofs_y(&style_screen_label_12_main_main_default, 0);
  lv_style_set_text_color(&style_screen_label_12_main_main_default, lv_color_make(0xff, 0xff, 0xff));
  lv_style_set_text_font(&style_screen_label_12_main_main_default, &lv_font_Acme_Regular_20);
  lv_style_set_text_letter_space(&style_screen_label_12_main_main_default, 2);
  lv_style_set_text_line_space(&style_screen_label_12_main_main_default, 0);
  lv_style_set_text_align(&style_screen_label_12_main_main_default, LV_TEXT_ALIGN_CENTER);
  lv_style_set_pad_left(&style_screen_label_12_main_main_default, 0);
  lv_style_set_pad_right(&style_screen_label_12_main_main_default, 0);
  lv_style_set_pad_top(&style_screen_label_12_main_main_default, 0);
  lv_style_set_pad_bottom(&style_screen_label_12_main_main_default, 0);
  lv_obj_add_style(ui->screen_label_12, &style_screen_label_12_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

  //Write codes screen_label_13
  ui->screen_label_13 = lv_label_create(ui->screen);
  lv_obj_set_pos(ui->screen_label_13, 140, 182);
  lv_obj_set_size(ui->screen_label_13, 75, 17);
  lv_obj_set_scrollbar_mode(ui->screen_label_13, LV_SCROLLBAR_MODE_OFF);
  lv_label_set_text(ui->screen_label_13, "Thundery");
  lv_label_set_long_mode(ui->screen_label_13, LV_LABEL_LONG_WRAP);

  //Write style state: LV_STATE_DEFAULT for style_screen_label_13_main_main_default
  static lv_style_t style_screen_label_13_main_main_default;
  if (style_screen_label_13_main_main_default.prop_cnt > 1)
    lv_style_reset(&style_screen_label_13_main_main_default);
  else
    lv_style_init(&style_screen_label_13_main_main_default);
  lv_style_set_radius(&style_screen_label_13_main_main_default, 0);
  lv_style_set_bg_color(&style_screen_label_13_main_main_default, lv_color_make(0xff, 0xff, 0xff));
  lv_style_set_bg_grad_color(&style_screen_label_13_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_bg_grad_dir(&style_screen_label_13_main_main_default, LV_GRAD_DIR_NONE);
  lv_style_set_bg_opa(&style_screen_label_13_main_main_default, 0);
  lv_style_set_shadow_width(&style_screen_label_13_main_main_default, 0);
  lv_style_set_shadow_color(&style_screen_label_13_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_shadow_opa(&style_screen_label_13_main_main_default, 255);
  lv_style_set_shadow_spread(&style_screen_label_13_main_main_default, 0);
  lv_style_set_shadow_ofs_x(&style_screen_label_13_main_main_default, 0);
  lv_style_set_shadow_ofs_y(&style_screen_label_13_main_main_default, 0);
  lv_style_set_text_color(&style_screen_label_13_main_main_default, lv_color_make(0xff, 0xff, 0xff));
  lv_style_set_text_font(&style_screen_label_13_main_main_default, &lv_font_Acme_Regular_15);
  lv_style_set_text_letter_space(&style_screen_label_13_main_main_default, 2);
  lv_style_set_text_line_space(&style_screen_label_13_main_main_default, 0);
  lv_style_set_text_align(&style_screen_label_13_main_main_default, LV_TEXT_ALIGN_CENTER);
  lv_style_set_pad_left(&style_screen_label_13_main_main_default, 0);
  lv_style_set_pad_right(&style_screen_label_13_main_main_default, 0);
  lv_style_set_pad_top(&style_screen_label_13_main_main_default, 0);
  lv_style_set_pad_bottom(&style_screen_label_13_main_main_default, 0);
  lv_obj_add_style(ui->screen_label_13, &style_screen_label_13_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

  //Write codes screen_label_14
  ui->screen_label_14 = lv_label_create(ui->screen);
  lv_obj_set_pos(ui->screen_label_14, 226, 184);
  lv_obj_set_size(ui->screen_label_14, 78, 15);
  lv_obj_set_scrollbar_mode(ui->screen_label_14, LV_SCROLLBAR_MODE_OFF);
  lv_label_set_text(ui->screen_label_14, "Sunny");
  lv_label_set_long_mode(ui->screen_label_14, LV_LABEL_LONG_WRAP);

  //Write style state: LV_STATE_DEFAULT for style_screen_label_14_main_main_default
  static lv_style_t style_screen_label_14_main_main_default;
  if (style_screen_label_14_main_main_default.prop_cnt > 1)
    lv_style_reset(&style_screen_label_14_main_main_default);
  else
    lv_style_init(&style_screen_label_14_main_main_default);
  lv_style_set_radius(&style_screen_label_14_main_main_default, 0);
  lv_style_set_bg_color(&style_screen_label_14_main_main_default, lv_color_make(0xff, 0xff, 0xff));
  lv_style_set_bg_grad_color(&style_screen_label_14_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_bg_grad_dir(&style_screen_label_14_main_main_default, LV_GRAD_DIR_NONE);
  lv_style_set_bg_opa(&style_screen_label_14_main_main_default, 0);
  lv_style_set_shadow_width(&style_screen_label_14_main_main_default, 0);
  lv_style_set_shadow_color(&style_screen_label_14_main_main_default, lv_color_make(0x21, 0x95, 0xf6));
  lv_style_set_shadow_opa(&style_screen_label_14_main_main_default, 255);
  lv_style_set_shadow_spread(&style_screen_label_14_main_main_default, 0);
  lv_style_set_shadow_ofs_x(&style_screen_label_14_main_main_default, 0);
  lv_style_set_shadow_ofs_y(&style_screen_label_14_main_main_default, 0);
  lv_style_set_text_color(&style_screen_label_14_main_main_default, lv_color_make(0xff, 0xff, 0xff));
  lv_style_set_text_font(&style_screen_label_14_main_main_default, &lv_font_Acme_Regular_15);
  lv_style_set_text_letter_space(&style_screen_label_14_main_main_default, 2);
  lv_style_set_text_line_space(&style_screen_label_14_main_main_default, 0);
  lv_style_set_text_align(&style_screen_label_14_main_main_default, LV_TEXT_ALIGN_CENTER);
  lv_style_set_pad_left(&style_screen_label_14_main_main_default, 0);
  lv_style_set_pad_right(&style_screen_label_14_main_main_default, 0);
  lv_style_set_pad_top(&style_screen_label_14_main_main_default, 0);
  lv_style_set_pad_bottom(&style_screen_label_14_main_main_default, 0);
  lv_obj_add_style(ui->screen_label_14, &style_screen_label_14_main_main_default, LV_PART_MAIN|LV_STATE_DEFAULT);

  //Init events for screen
  events_init_screen(ui);
}
