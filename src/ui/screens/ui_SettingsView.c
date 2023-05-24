// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.6
// Project name: KitsuDeck

#include "../ui.h"

void ui_SettingsView_screen_init(void)
{
    ui_SettingsView = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_SettingsView, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_flex_flow(ui_SettingsView, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_SettingsView, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_obj_set_style_pad_left(ui_SettingsView, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_SettingsView, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_SettingsView, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_SettingsView, 10, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SettingsHeaderPanel = lv_obj_create(ui_SettingsView);
    lv_obj_set_width(ui_SettingsHeaderPanel, lv_pct(100));
    lv_obj_set_height(ui_SettingsHeaderPanel, LV_SIZE_CONTENT);    /// 50
    lv_obj_set_align(ui_SettingsHeaderPanel, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_SettingsHeaderPanel, LV_FLEX_FLOW_ROW);
    lv_obj_set_flex_align(ui_SettingsHeaderPanel, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);
    lv_obj_clear_flag(ui_SettingsHeaderPanel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_SettingsBackToHome = lv_imgbtn_create(ui_SettingsHeaderPanel);
    lv_imgbtn_set_src(ui_SettingsBackToHome, LV_IMGBTN_STATE_RELEASED, NULL, &ui_img_b2_png, NULL);
    lv_imgbtn_set_src(ui_SettingsBackToHome, LV_IMGBTN_STATE_PRESSED, NULL, &ui_img_b2_png, NULL);
    lv_obj_set_height(ui_SettingsBackToHome, 32);
    lv_obj_set_width(ui_SettingsBackToHome, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_SettingsBackToHome, -1);
    lv_obj_set_y(ui_SettingsBackToHome, 34);
    lv_obj_set_align(ui_SettingsBackToHome, LV_ALIGN_CENTER);
    lv_obj_set_style_img_recolor(ui_SettingsBackToHome, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_PRESSED);
    lv_obj_set_style_img_recolor_opa(ui_SettingsBackToHome, 255, LV_PART_MAIN | LV_STATE_PRESSED);

    ui_SettingsHeader = lv_label_create(ui_SettingsHeaderPanel);
    lv_obj_set_width(ui_SettingsHeader, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_SettingsHeader, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_SettingsHeader, LV_ALIGN_CENTER);
    lv_label_set_text(ui_SettingsHeader, "Settings");
    lv_obj_set_style_text_font(ui_SettingsHeader, &lv_font_montserrat_38, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_SettingsPanel = lv_obj_create(ui_SettingsView);
    lv_obj_set_width(ui_SettingsPanel, lv_pct(100));
    lv_obj_set_flex_grow(ui_SettingsPanel, 1);
    lv_obj_set_x(ui_SettingsPanel, -176);
    lv_obj_set_y(ui_SettingsPanel, -209);
    lv_obj_set_align(ui_SettingsPanel, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_SettingsPanel, LV_FLEX_FLOW_COLUMN_WRAP);
    lv_obj_set_flex_align(ui_SettingsPanel, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_obj_add_flag(ui_SettingsPanel, LV_OBJ_FLAG_EVENT_BUBBLE | LV_OBJ_FLAG_SCROLL_ON_FOCUS |
                    LV_OBJ_FLAG_SCROLL_ONE);     /// Flags
    lv_obj_clear_flag(ui_SettingsPanel, LV_OBJ_FLAG_SCROLL_MOMENTUM);      /// Flags
    lv_obj_set_scroll_dir(ui_SettingsPanel, LV_DIR_HOR);
    lv_obj_set_style_bg_color(ui_SettingsPanel, lv_color_hex(0x101418), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_SettingsPanel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_width(ui_SettingsPanel, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WifiConnect = lv_obj_create(ui_SettingsPanel);
    lv_obj_set_height(ui_WifiConnect, lv_pct(100));
    lv_obj_set_width(ui_WifiConnect, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_WifiConnect, 79);
    lv_obj_set_y(ui_WifiConnect, -726);
    lv_obj_set_align(ui_WifiConnect, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_WifiConnect, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_WifiConnect, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_CENTER);

    ui_WifiHeader = lv_label_create(ui_WifiConnect);
    lv_obj_set_width(ui_WifiHeader, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_WifiHeader, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_WifiHeader, LV_ALIGN_CENTER);
    lv_label_set_text(ui_WifiHeader, "Wifi settings:");
    lv_obj_set_style_text_font(ui_WifiHeader, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_WifiSsidRoller = lv_roller_create(ui_WifiConnect);
    lv_obj_set_width(ui_WifiSsidRoller, 200);
    lv_obj_set_height(ui_WifiSsidRoller, lv_pct(45));
    lv_obj_set_align(ui_WifiSsidRoller, LV_ALIGN_CENTER);

    ui_WifiPasswordTextInput = lv_textarea_create(ui_WifiConnect);
    lv_obj_set_width(ui_WifiPasswordTextInput, 200);
    lv_obj_set_height(ui_WifiPasswordTextInput, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_WifiPasswordTextInput, -45);
    lv_obj_set_y(ui_WifiPasswordTextInput, 2);
    lv_obj_set_align(ui_WifiPasswordTextInput, LV_ALIGN_CENTER);
    lv_textarea_set_placeholder_text(ui_WifiPasswordTextInput, "Password");
    lv_textarea_set_one_line(ui_WifiPasswordTextInput, true);
    lv_textarea_set_password_mode(ui_WifiPasswordTextInput, true);

    ui_ButtonPanel = lv_obj_create(ui_WifiConnect);
    lv_obj_set_width(ui_ButtonPanel, LV_SIZE_CONTENT);   /// 100
    lv_obj_set_height(ui_ButtonPanel, LV_SIZE_CONTENT);    /// 15
    lv_obj_set_align(ui_ButtonPanel, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_ButtonPanel, LV_FLEX_FLOW_ROW_WRAP);
    lv_obj_set_flex_align(ui_ButtonPanel, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_START);
    lv_obj_clear_flag(ui_ButtonPanel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_WifiScanButton = lv_btn_create(ui_ButtonPanel);
    lv_obj_set_height(ui_WifiScanButton, 40);
    lv_obj_set_width(ui_WifiScanButton, LV_SIZE_CONTENT);   /// 100
    lv_obj_set_align(ui_WifiScanButton, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_WifiScanButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_WifiScanButton, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_WifiScanText = lv_label_create(ui_WifiScanButton);
    lv_obj_set_width(ui_WifiScanText, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_WifiScanText, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_WifiScanText, LV_ALIGN_CENTER);
    lv_label_set_text(ui_WifiScanText, "Scan");

    ui_WifiSaveButton = lv_btn_create(ui_ButtonPanel);
    lv_obj_set_height(ui_WifiSaveButton, 40);
    lv_obj_set_width(ui_WifiSaveButton, LV_SIZE_CONTENT);   /// 100
    lv_obj_set_align(ui_WifiSaveButton, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_WifiSaveButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_WifiSaveButton, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_WifiSaveText = lv_label_create(ui_WifiSaveButton);
    lv_obj_set_width(ui_WifiSaveText, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_WifiSaveText, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_WifiSaveText, LV_ALIGN_CENTER);
    lv_label_set_text(ui_WifiSaveText, "Save");

    ui_WifiTestResultLabel = lv_label_create(ui_WifiConnect);
    lv_obj_set_width(ui_WifiTestResultLabel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_WifiTestResultLabel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_WifiTestResultLabel, LV_ALIGN_CENTER);
    lv_label_set_text(ui_WifiTestResultLabel, "");

    ui_ButtonPanel2 = lv_obj_create(ui_WifiConnect);
    lv_obj_set_width(ui_ButtonPanel2, LV_SIZE_CONTENT);   /// 100
    lv_obj_set_height(ui_ButtonPanel2, LV_SIZE_CONTENT);    /// 15
    lv_obj_set_align(ui_ButtonPanel2, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_ButtonPanel2, LV_FLEX_FLOW_COLUMN_WRAP);
    lv_obj_set_flex_align(ui_ButtonPanel2, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_START);
    lv_obj_clear_flag(ui_ButtonPanel2, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_TestWifiSettingsButton = lv_btn_create(ui_ButtonPanel2);
    lv_obj_set_height(ui_TestWifiSettingsButton, 40);
    lv_obj_set_width(ui_TestWifiSettingsButton, LV_SIZE_CONTENT);   /// 100
    lv_obj_set_align(ui_TestWifiSettingsButton, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_TestWifiSettingsButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_TestWifiSettingsButton, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_TestWifiSettingsText = lv_label_create(ui_TestWifiSettingsButton);
    lv_obj_set_width(ui_TestWifiSettingsText, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_TestWifiSettingsText, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_TestWifiSettingsText, LV_ALIGN_CENTER);
    lv_label_set_text(ui_TestWifiSettingsText, "Test");

    ui_ComputerSettings = lv_obj_create(ui_SettingsPanel);
    lv_obj_set_height(ui_ComputerSettings, lv_pct(100));
    lv_obj_set_width(ui_ComputerSettings, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_ComputerSettings, 48);
    lv_obj_set_y(ui_ComputerSettings, -431);
    lv_obj_set_align(ui_ComputerSettings, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_ComputerSettings, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_ComputerSettings, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_SPACE_AROUND);

    ui_ComputerSettingsHeader = lv_label_create(ui_ComputerSettings);
    lv_obj_set_width(ui_ComputerSettingsHeader, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ComputerSettingsHeader, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_ComputerSettingsHeader, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ComputerSettingsHeader, "Auth Settings:");
    lv_obj_set_style_text_font(ui_ComputerSettingsHeader, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_AuthStatus = lv_label_create(ui_ComputerSettings);
    lv_obj_set_width(ui_AuthStatus, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_AuthStatus, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_AuthStatus, LV_ALIGN_CENTER);
    lv_label_set_text(ui_AuthStatus, "Status: Not Secured");
    lv_label_set_recolor(ui_AuthStatus, "true");

    ui_ComputerAuthPin = lv_textarea_create(ui_ComputerSettings);
    lv_obj_set_width(ui_ComputerAuthPin, 200);
    lv_obj_set_height(ui_ComputerAuthPin, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ComputerAuthPin, -45);
    lv_obj_set_y(ui_ComputerAuthPin, 2);
    lv_obj_set_align(ui_ComputerAuthPin, LV_ALIGN_CENTER);
    lv_textarea_set_max_length(ui_ComputerAuthPin, 4);
    lv_textarea_set_placeholder_text(ui_ComputerAuthPin, "Pin");
    lv_textarea_set_one_line(ui_ComputerAuthPin, true);
    lv_textarea_set_password_mode(ui_ComputerAuthPin, true);

    ui_ComputerAuthPinNew = lv_textarea_create(ui_ComputerSettings);
    lv_obj_set_width(ui_ComputerAuthPinNew, 200);
    lv_obj_set_height(ui_ComputerAuthPinNew, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_ComputerAuthPinNew, -36);
    lv_obj_set_y(ui_ComputerAuthPinNew, -77);
    lv_obj_set_align(ui_ComputerAuthPinNew, LV_ALIGN_CENTER);
    lv_textarea_set_max_length(ui_ComputerAuthPinNew, 4);
    lv_textarea_set_placeholder_text(ui_ComputerAuthPinNew, "New pin");
    lv_textarea_set_one_line(ui_ComputerAuthPinNew, true);
    lv_textarea_set_password_mode(ui_ComputerAuthPinNew, true);

    ui_ComputerSaveButton = lv_btn_create(ui_ComputerSettings);
    lv_obj_set_height(ui_ComputerSaveButton, 40);
    lv_obj_set_width(ui_ComputerSaveButton, LV_SIZE_CONTENT);   /// 100
    lv_obj_set_x(ui_ComputerSaveButton, 261);
    lv_obj_set_y(ui_ComputerSaveButton, -52);
    lv_obj_set_align(ui_ComputerSaveButton, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_ComputerSaveButton, LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_ComputerSaveButton, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_ComputerSaveText = lv_label_create(ui_ComputerSaveButton);
    lv_obj_set_width(ui_ComputerSaveText, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_ComputerSaveText, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_ComputerSaveText, LV_ALIGN_CENTER);
    lv_label_set_text(ui_ComputerSaveText, "Save");

    ui_DeviceSettings = lv_obj_create(ui_SettingsPanel);
    lv_obj_set_height(ui_DeviceSettings, lv_pct(100));
    lv_obj_set_width(ui_DeviceSettings, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_x(ui_DeviceSettings, -19);
    lv_obj_set_y(ui_DeviceSettings, -433);
    lv_obj_set_align(ui_DeviceSettings, LV_ALIGN_CENTER);
    lv_obj_set_flex_flow(ui_DeviceSettings, LV_FLEX_FLOW_COLUMN);
    lv_obj_set_flex_align(ui_DeviceSettings, LV_FLEX_ALIGN_START, LV_FLEX_ALIGN_CENTER, LV_FLEX_ALIGN_START);

    ui_DeviceSettingsHeader = lv_label_create(ui_DeviceSettings);
    lv_obj_set_width(ui_DeviceSettingsHeader, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_DeviceSettingsHeader, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_DeviceSettingsHeader, LV_ALIGN_CENTER);
    lv_label_set_text(ui_DeviceSettingsHeader, "Device Settings:");
    lv_obj_set_style_text_font(ui_DeviceSettingsHeader, &lv_font_montserrat_16, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Label2 = lv_label_create(ui_DeviceSettings);
    lv_obj_set_width(ui_Label2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Label2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Label2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Label2, "Brightness");

    ui_ScreenBrightnessArk = lv_arc_create(ui_DeviceSettings);
    lv_obj_set_width(ui_ScreenBrightnessArk, 150);
    lv_obj_set_height(ui_ScreenBrightnessArk, 150);
    lv_obj_set_align(ui_ScreenBrightnessArk, LV_ALIGN_CENTER);

    ui_SettingsKeyboardText = lv_keyboard_create(ui_SettingsView);
    lv_obj_set_width(ui_SettingsKeyboardText, lv_pct(100));
    lv_obj_set_height(ui_SettingsKeyboardText, lv_pct(40));
    lv_obj_set_x(ui_SettingsKeyboardText, 0);
    lv_obj_set_y(ui_SettingsKeyboardText, 145);
    lv_obj_set_align(ui_SettingsKeyboardText, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_SettingsKeyboardText, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_SettingsKeyboardText,
                      LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_SCROLLABLE);      /// Flags

    ui_SettingsKeyboardNumber = lv_keyboard_create(ui_SettingsView);
    lv_keyboard_set_mode(ui_SettingsKeyboardNumber, LV_KEYBOARD_MODE_NUMBER);
    lv_obj_set_width(ui_SettingsKeyboardNumber, lv_pct(100));
    lv_obj_set_height(ui_SettingsKeyboardNumber, lv_pct(40));
    lv_obj_set_x(ui_SettingsKeyboardNumber, 0);
    lv_obj_set_y(ui_SettingsKeyboardNumber, 145);
    lv_obj_set_align(ui_SettingsKeyboardNumber, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_SettingsKeyboardNumber, LV_OBJ_FLAG_HIDDEN | LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_SettingsKeyboardNumber,
                      LV_OBJ_FLAG_CLICKABLE | LV_OBJ_FLAG_PRESS_LOCK | LV_OBJ_FLAG_SCROLLABLE);    /// Flags

    lv_obj_add_event_cb(ui_SettingsBackToHome, ui_event_SettingsBackToHome, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_SettingsHeaderPanel, ui_event_SettingsHeaderPanel, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_WifiPasswordTextInput, ui_event_WifiPasswordTextInput, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_WifiScanButton, ui_event_WifiScanButton, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_WifiSaveButton, ui_event_WifiSaveButton, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_TestWifiSettingsButton, ui_event_TestWifiSettingsButton, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_WifiConnect, ui_event_WifiConnect, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ComputerAuthPin, ui_event_ComputerAuthPin, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ComputerAuthPinNew, ui_event_ComputerAuthPinNew, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ComputerSaveButton, ui_event_ComputerSaveButton, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ComputerSettings, ui_event_ComputerSettings, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_ScreenBrightnessArk, ui_event_ScreenBrightnessArk, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_DeviceSettings, ui_event_DeviceSettings, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_SettingsPanel, ui_event_SettingsPanel, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_SettingsView, ui_event_SettingsView, LV_EVENT_ALL, NULL);

}
