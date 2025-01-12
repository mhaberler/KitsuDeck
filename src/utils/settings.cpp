#include "settings.h"
#include "ScreenMessages.h"

#include "Arduino.h"
#include "SD.h"
#include <ArduinoJson.h>

const char *settingsFile = "/settings.json";

void createSettings()
{
    File file = SD.open(settingsFile);
    if (file)
    {
        // delete the file
        SD.remove(settingsFile);
    }
    // create the file and write the default settings using ArduinoJson
    file = SD.open(settingsFile, FILE_WRITE);
    if (file)
    {
        StaticJsonDocument<1024> doc;
        doc["brightness"] = 100;
        doc["wifi_ssid"] = "";
        doc["wifi_password"] = "";
        doc["auth_pin"] = "";
        serializeJson(doc, file);
        file.close();
    }
}

bool checkSettingsWifiBool()
{
    if (SD.exists(settingsFile))
    {
        // check if the wifi_ssid and wifi_password are set
        if (getSettings("wifi_ssid") != "" && getSettings("wifi_password") != "")
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}
/* Settings Functions */
// settings file variable

bool checkSettingsBool()
{
    if (SD.exists(settingsFile))
    {
        return true;
    }
    else
    {
        return false;
    }
}

String validateSettingsJson()
{
    File file = SD.open(settingsFile);
    if (file)
    {
        StaticJsonDocument<1024> doc;
        DeserializationError error = deserializeJson(doc, file);
        if (error)
        {
            return "false";
        }
        else
        {
            return "true";
        }
    }
    else
    {
        return "false";
    }
}

String getSettings(String setting)
{
    File file = SD.open(settingsFile);
    if (file)
    {
        StaticJsonDocument<1024> doc;
        DeserializationError error = deserializeJson(doc, file);
        if (error)
        {
            errorSettings();
        }
        else
        {
            return doc[setting];
        }
    }
    else
    {
        return "false";
    }
}

String setSettings(String setting, String value)
{
    File file = SD.open(settingsFile);
    if (file)
    {
        StaticJsonDocument<1024> doc;
        DeserializationError error = deserializeJson(doc, file);
        if (error)
        {
            errorSettings();
        }
        else
        {
            doc[setting] = value;
            file.close();
            file = SD.open(settingsFile, FILE_WRITE);
            if (file)
            {
                serializeJson(doc, file);
                file.close();
                return "true";
            }
            else
            {
                return "false";
            }
        }
    }
    else
    {
        return "false";
    }
}