// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.3.0
// LVGL version: 8.3.6
// Project name: KitsuDeck

#ifndef _KITSUDECK_UI_H
#define _KITSUDECK_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

#include "lv_i18n.h"
#include "ui_helpers.h"
#include "ui_events.h"
void gert_Animation(lv_obj_t * TargetObject, int delay);
// SCREEN: ui_Home
void ui_Home_screen_init(void);
void ui_event_Home(lv_event_t * e);
extern lv_obj_t * ui_Home;
extern lv_obj_t * ui_Navbar;
extern lv_obj_t * ui_Clock;
extern lv_obj_t * ui_Panel1;
extern lv_obj_t * ui_ImgButton3;
void ui_event_SettingsBtn(lv_event_t * e);
extern lv_obj_t * ui_SettingsBtn;
extern lv_obj_t * ui_DeckCol;
extern lv_obj_t * ui_Panel3;
void ui_event_DeckNavSlider(lv_event_t * e);
extern lv_obj_t * ui_DeckNavSlider;
extern lv_obj_t * ui_PageChangePanel;
extern lv_obj_t * ui_PageText;
// SCREEN: ui_SettingsView
void ui_SettingsView_screen_init(void);
void ui_event_SettingsView(lv_event_t * e);
extern lv_obj_t * ui_SettingsView;
void ui_event_SettingsHeaderPanel(lv_event_t * e);
extern lv_obj_t * ui_SettingsHeaderPanel;
void ui_event_SettingsBackToHome(lv_event_t * e);
extern lv_obj_t * ui_SettingsBackToHome;
extern lv_obj_t * ui_SettingsHeader;
void ui_event_SettingsPanel(lv_event_t * e);
extern lv_obj_t * ui_SettingsPanel;
void ui_event_WifiConnect(lv_event_t * e);
extern lv_obj_t * ui_WifiConnect;
extern lv_obj_t * ui_WifiHeader;
extern lv_obj_t * ui_WifiSsidRoller;
void ui_event_WifiPasswordTextInput(lv_event_t * e);
extern lv_obj_t * ui_WifiPasswordTextInput;
extern lv_obj_t * ui_ButtonPanel;
void ui_event_WifiScanButton(lv_event_t * e);
extern lv_obj_t * ui_WifiScanButton;
extern lv_obj_t * ui_WifiScanText;
void ui_event_WifiSaveButton(lv_event_t * e);
extern lv_obj_t * ui_WifiSaveButton;
extern lv_obj_t * ui_WifiSaveText;
extern lv_obj_t * ui_WifiTestResultLabel;
extern lv_obj_t * ui_ButtonPanel2;
void ui_event_TestWifiSettingsButton(lv_event_t * e);
extern lv_obj_t * ui_TestWifiSettingsButton;
extern lv_obj_t * ui_TestWifiSettingsText;
void ui_event_ComputerSettings(lv_event_t * e);
extern lv_obj_t * ui_ComputerSettings;
extern lv_obj_t * ui_ComputerSettingsHeader;
extern lv_obj_t * ui_AuthStatus;
void ui_event_ComputerAuthPin(lv_event_t * e);
extern lv_obj_t * ui_ComputerAuthPin;
void ui_event_ComputerAuthPinNew(lv_event_t * e);
extern lv_obj_t * ui_ComputerAuthPinNew;
void ui_event_ComputerSaveButton(lv_event_t * e);
extern lv_obj_t * ui_ComputerSaveButton;
extern lv_obj_t * ui_ComputerSaveText;
void ui_event_DeviceSettings(lv_event_t * e);
extern lv_obj_t * ui_DeviceSettings;
extern lv_obj_t * ui_DeviceSettingsHeader;
extern lv_obj_t * ui_Label2;
void ui_event_ScreenBrightnessArk(lv_event_t * e);
extern lv_obj_t * ui_ScreenBrightnessArk;
void ui_event_DeviceInformation(lv_event_t * e);
extern lv_obj_t * ui_DeviceInformation;
extern lv_obj_t * ui_DeviceInformationHeader;
extern lv_obj_t * ui_KitsuDeckVersion;
extern lv_obj_t * ui_RamHeader;
extern lv_obj_t * ui_RamValue;
extern lv_obj_t * ui_PsramHeader;
extern lv_obj_t * ui_PsramValue;
extern lv_obj_t * ui_CreatedByInformation;
extern lv_obj_t * ui_SettingsKeyboardText;
extern lv_obj_t * ui_SettingsKeyboardNumber;
extern lv_obj_t * ui____initial_actions0;

LV_IMG_DECLARE(ui_img_deckimg_png);    // assets\deckImg.png
LV_IMG_DECLARE(ui_img_gear_png);    // assets\gear.png
LV_IMG_DECLARE(ui_img_b2_png);    // assets\b2.png
LV_IMG_DECLARE(ui_img_macro_icon_png);    // assets\macro_icon.png

void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
