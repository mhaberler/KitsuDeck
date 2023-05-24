// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.6
// Project name: KitsuDeck

#include "../ui.h"

void ui_Home_screen_init(void)
{
    ui_Home = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Home, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_flex_flow(ui_Home, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_Home, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_SPACE_BETWEEN);
    lv_obj_set_style_pad_left(ui_Home, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Home, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Home, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Home, 10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Navbar = lv_obj_create(ui_Home);
    lv_obj_set_width(ui_Navbar, lv_pct(15));
    lv_obj_set_height(ui_Navbar, lv_pct(100));
    lv_obj_set_x(ui_Navbar, -20);
    lv_obj_set_y(ui_Navbar, -19);
    lv_obj_set_align(ui_Navbar, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Navbar, LV_FLEX_FLOW_COLUMN_WRAP);
    lv_obj_set_flex_align(ui_Navbar, LV_FLEX_ALIGN_SPACE_BETWEEN, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Navbar, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Navbar, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Navbar, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_side(ui_Navbar, LV_BORDER_SIDE_NONE, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_pad_left(ui_Navbar, 10, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Navbar, 10, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Navbar, 0, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Navbar, 100, LV_PART_SCROLLBAR | LV_STATE_DEFAULT);

    ui_Clock = lv_label_create(ui_Navbar);
    lv_obj_set_width(ui_Clock, LV_SIZE_CONTENT);   /// 100
    lv_obj_set_height(ui_Clock, LV_SIZE_CONTENT);    /// 100
    lv_obj_set_align(ui_Clock, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Clock, "12:30");
    lv_obj_set_style_text_align(ui_Clock, LV_TEXT_ALIGN_CENTER, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Clock, &lv_font_montserrat_40, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Panel1 = lv_obj_create(ui_Navbar);
    lv_obj_set_width(ui_Panel1, 130);
    lv_obj_set_flex_grow(ui_Panel1, 1);
    lv_obj_set_x(ui_Panel1, -85);
    lv_obj_set_y(ui_Panel1, -54);
    lv_obj_set_align(ui_Panel1, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_Panel1, LV_FLEX_FLOW_ROW_WRAP);
    lv_obj_set_flex_align(ui_Panel1, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_obj_set_style_bg_color(ui_Panel1, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Panel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_Panel1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_ImgButton3 = lv_imgbtn_create(ui_Panel1);
    lv_imgbtn_set_src(ui_ImgButton3, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_deckimg_png, NULL);
    lv_imgbtn_set_src(ui_ImgButton3, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_deckimg_png, NULL);
    lv_obj_set_height(ui_ImgButton3, 64);
    lv_obj_set_width(ui_ImgButton3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_align(ui_ImgButton3, LV_ALIGN_CENTER);
    lv_obj_set_style_img_recolor(ui_ImgButton3, lv_color_hex(0x292831), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor_opa(ui_ImgButton3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_img_recolor(ui_ImgButton3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_ImgButton3, 255, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_SettingsBtn = lv_imgbtn_create(ui_Navbar);
    lv_imgbtn_set_src(ui_SettingsBtn, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_gear_png, NULL);
    lv_imgbtn_set_src(ui_SettingsBtn, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_gear_png, NULL);
    lv_obj_set_height(ui_SettingsBtn, 64);
    lv_obj_set_width(ui_SettingsBtn, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_align(ui_SettingsBtn, LV_ALIGN_CENTER);
    lv_obj_set_style_img_recolor(ui_SettingsBtn, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_SettingsBtn, 255, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_DeckCol = lv_obj_create(ui_Home);
    lv_obj_set_height(ui_DeckCol, lv_pct(100));
    lv_obj_set_flex_grow(ui_DeckCol, 1);
    lv_obj_set_x(ui_DeckCol, 19);
    lv_obj_set_y(ui_DeckCol, 182);
    lv_obj_set_align(ui_DeckCol, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_DeckCol, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_DeckCol, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_obj_clear_flag(ui_DeckCol, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_ImgButton1 = lv_imgbtn_create(ui_DeckCol);
    lv_obj_set_height(ui_ImgButton1, 64);
    lv_obj_set_width(ui_ImgButton1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_align(ui_ImgButton1, LV_ALIGN_CENTER);

    lv_obj_add_event_cb(ui_SettingsBtn, ui_event_SettingsBtn, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Home, ui_event_Home, LV_EVENT_ALL, NULL);

}
