#ifndef LANGUAGE_EN_H
#define LANGUAGE_EN_H

#include <avr/pgmspace.h>

const char EN_SCREEN_EMERGENCY_TITLE[] PROGMEM      = "Emergency Stop active";
const char EN_SCREEN_EMERGENCY_TEXT[] PROGMEM       = "Keep the button pressed to unlock the machine";
const char EN_SCREEN_EMERGENCY_BOX[] PROGMEM        = "Keep pressed";

const char EN_NOSD[] PROGMEM                        = "Insert SD card";
const char EN_SD[] PROGMEM                          = "SD card";
const char EN_FILAMENT_UNLOAD[] PROGMEM             = "Unload filament";
const char EN_FILAMENT_LOAD[] PROGMEM               = "Load filament";
const char EN_LEVELING[] PROGMEM                    = "Level plate";
const char EN_HOMING[] PROGMEM                      = "Auto-home";
const char EN_SETTINGS[] PROGMEM                    = "Settings";
const char EN_STEPPERS[] PROGMEM                    = "Disable steppers";
const char EN_STEPPERS_OFF[] PROGMEM                = "Steppers disabled";
const char EN_MOVEAXIS[] PROGMEM                    = "Move axis";
const char EN_TEMPERATURE[] PROGMEM                 = "Change temperature";
const char EN_LIGHTLED_DISABLE[] PROGMEM            = "Led light off";
const char EN_LIGHTLED[] PROGMEM                    = "Led light on";
const char EN_INFO[] PROGMEM                        = "FW info";
const char EN_PLAY[] PROGMEM                        = "Play";
const char EN_PAUSE[] PROGMEM                       = "Pause";
const char EN_STOP[] PROGMEM                        = "Stop";
const char EN_CHANGE_FILAMENT[] PROGMEM             = "Change filament";
const char EN_CHANGE_SPEED[] PROGMEM                = "Change speed";
const char EN_BACK[] PROGMEM                        = "Back";
const char EN_RETRY[] PROGMEM                       = "Retry";
const char EN_OK2[] PROGMEM                         = "Confirm";
const char EN_MOVE_X[] PROGMEM                      = "Move X";
const char EN_MOVE_Y[] PROGMEM                      = "Move Y";
const char EN_MOVE_Z[] PROGMEM                      = "Move Z";
const char EN_MOVE_E[] PROGMEM                      = "Move E";
const char EN_AUTOLEVEL[] PROGMEM                   = "Autolevel: On";
const char EN_AUTOLEVEL_DISABLE[] PROGMEM           = "Autolevel: Off";
const char EN_OFFSET[] PROGMEM                      = "Offset";

const char EN_SCREEN_LOGO[] PROGMEM                 = "BQ logo";
const char EN_SCREEN_LOGO_TEXT[] PROGMEM            = "Test";
const char EN_SCREEN_LOGO_BOX[] PROGMEM             = "Test";

const char EN_SCREEN_SD_LIST[] PROGMEM              = "SD Card";
const char EN_SCREEN_SD_CONFIRM[] PROGMEM           = "Confirm Print";
const char EN_SCREEN_SD_BACK[] PROGMEM              = "Back";
const char EN_SCREEN_SD_LIST_BACK[] PROGMEM         = "Back to main menu";
const char EN_SCREEN_SD_LIST_PREV[] PROGMEM         = "Previous folder";

const char EN_SCREEN_UNLOAD_TITLE[] PROGMEM         = "Unload filament";
const char EN_SCREEN_UNLOAD_TEXT1[] PROGMEM         = "Press the button let it extrude the filament & pull";
const char EN_SCREEN_UNLOAD_TEXT2[] PROGMEM         = "Start process?";
const char EN_SCREEN_UNLOAD_WAIT[] PROGMEM          = "Please wait";
const char EN_SCREEN_UNLOAD_CONTINUE[] PROGMEM      = "Press to continue";
const char EN_SCREEN_UNLOAD_PULL[] PROGMEM          = "Extrude and pull";
const char EN_SCREEN_UNLOAD_CONFIRM[] PROGMEM       = "Finished?";
const char EN_SCREEN_UNLOADING_TEXT[] PROGMEM       = "Unloading...";

const char EN_SCREEN_LOAD_TITLE[] PROGMEM           = "Load filament";
const char EN_SCREEN_LOAD_TEXT1[] PROGMEM           = "Press the button and press the filament inside";
const char EN_SCREEN_LOAD_TEXT2[] PROGMEM           = "Start process?";
const char EN_SCREEN_LOAD_WAIT[] PROGMEM            = "Please wait";
const char EN_SCREEN_LOAD_CONTINUE[] PROGMEM        = "Press to continue";
const char EN_SCREEN_LOAD_PRESS[] PROGMEM           = "Push to continue";
const char EN_SCREEN_LOAD_CONFIRM[] PROGMEM         = "Finished?";
const char EN_SCREEN_LOADING_TEXT[] PROGMEM         = "Loading...";

const char EN_SCREEN_LEVEL_TITLE[] PROGMEM          = "Level plate";
const char EN_SCREEN_LEVEL_TEXT[] PROGMEM           = "Start leveling?";
const char EN_SCREEN_LEVEL_WAIT[] PROGMEM           = "Please wait";
const char EN_SCREEN_LEVEL_CONTINUE[] PROGMEM       = "Push to continue";
const char EN_SCREEN_LEVEL_TEXT0[] PROGMEM          = "Performing homing operation";
const char EN_SCREEN_LEVEL_TEXT1[] PROGMEM          = "Adjust first point 1mm between the plate and extruder";
const char EN_SCREEN_LEVEL_TEXT2[] PROGMEM          = "Adjust second point 1mm between the plate and extruder";
const char EN_SCREEN_LEVEL_TEXT3[] PROGMEM          = "Adjust third point 1mm between the plate and extruder";
const char EN_SCREEN_LEVEL_TEXT4[] PROGMEM          = "Adjust center point 1mm between the plate and extruder";
const char EN_SCREEN_LEVEL_BOX0[] PROGMEM           = "Please wait";
const char EN_SCREEN_LEVEL_BOX1[] PROGMEM           = "Push to continue";
const char EN_SCREEN_LEVEL_BOX2[] PROGMEM           = "Push to continue";
const char EN_SCREEN_LEVEL_BOX3[] PROGMEM           = "Push to continue";
const char EN_SCREEN_LEVEL_BOX4[] PROGMEM           = "Push to continue";
const char EN_SCREEN_LEVEL_CONFIRM[] PROGMEM        = "Finished?";

const char EN_SCREEN_AUTOHOME[] PROGMEM             = "Auto-home";
const char EN_SCREEN_AUTOHOME_TITLE[] PROGMEM       = "Auto-home";
const char EN_SCREEN_AUTOHOME_TEXT[] PROGMEM        = "Homing...";
const char EN_SCREEN_AUTOHOME_WAIT[] PROGMEM        = "Please wait";

const char EN_SCREEN_SETTINGS[] PROGMEM             = "Settings";
const char EN_SCREEN_SETTINGS_TEXT[] PROGMEM        = "Choose an option";
const char EN_SCREEN_STEPPER[] PROGMEM              = "Steppers on";

const char EN_SCREEN_MOVE_TITLE[] PROGMEM           = "Move axis";
const char EN_SCREEN_MOVE_TEXT[] PROGMEM            = "Select axis";
const char EN_SCREEN_MOVE_X[] PROGMEM               = "X axis / Select mm";
const char EN_SCREEN_MOVE_Y[] PROGMEM               = "Y axis / Select mm";
const char EN_SCREEN_MOVE_Z[] PROGMEM               = "Z axis / Select mm";
const char EN_SCREEN_MOVE_E[] PROGMEM               = "Extruder / Select mm";
const char EN_SCREEN_MOVE_2MOVE[] PROGMEM           = "Back";
const char EN_SCREEN_MOVE_01MM[] PROGMEM            = "0.1mm";
const char EN_SCREEN_MOVE_1MM[] PROGMEM             = "1mm";
const char EN_SCREEN_MOVE_10MM[] PROGMEM            = "10mm";
const char EN_SCREEN_MOVE_HEAT_CONFIRM[] PROGMEM    = "Preheat extruder?";
const char EN_SCREEN_MOVE_BOX0[] PROGMEM            = "Please wait";

const char EN_SCREEN_BACK2MAIN[] PROGMEM            = "Back";

const char EN_SCREEN_PRINT_PRINTING[] PROGMEM       = "Printing";
const char EN_SCREEN_PRINT_TITLE[] PROGMEM          = "Print finished";
const char EN_SCREEN_PRINT_COMPLETED[] PROGMEM      = "Remove the piece from the plate";
const char EN_SCREEN_PRINT_COMPLETED_BOX[] PROGMEM  = "Push to continue";
const char EN_SCREEN_PRINT_PAUSE[] PROGMEM          = "Pause";
const char EN_SCREEN_PRINT_PAUSED[] PROGMEM         = "Paused";
const char EN_SCREEN_PRINT_PAUSING[] PROGMEM        = "Pausing...";
const char EN_SCREEN_PRINT_STOPPED[] PROGMEM        = "Stopped";

const char EN_SCREEN_TEMP_TITLE[] PROGMEM           = "Change temperature";
const char EN_SCREEN_LIGHT[] PROGMEM                = "Led light on";
const char EN_SCREEN_AUTOLEVEL[] PROGMEM            = "Autolevel";
const char EN_SCREEN_PRINT[] PROGMEM                = "Confirm";
const char EN_SCREEN_INFO[] PROGMEM                 = "FW info";
const char EN_SCREEN_INFO_TEXT[] PROGMEM            = "FW info";
const char EN_SCREEN_INFO_BOX[] PROGMEM             = "Push to continue";

const char EN_SCREEN_OFFSET_TITLE[] PROGMEM         = "Offset";
const char EN_SCREEN_OFFSET_TEXT[] PROGMEM          = "Adjust offset?";
const char EN_SCREEN_OFFSET_DIALOG_TEXT[] PROGMEM   = "Adjust the distance between the extruder & plate";
const char EN_SCREEN_OFFSET_DIALOG_BOX[] PROGMEM    = "Push to continue";
const char EN_SCREEN_OFFSET_FINISH[] PROGMEM        = "Finished?";
const char EN_SCREEN_OFFSET_WAIT[] PROGMEM          = "Please wait";
const char EN_SCREEN_OFFSET_WAIT_BOX[] PROGMEM      = "Push to continue";
const char EN_SCREEN_OFFSET_HOME_TEXT[] PROGMEM     = "Performing homing operation";
const char EN_SCREEN_OFFSET_PLANE_TEXT[] PROGMEM    = "Calculating the offset plane...";

const char EN_SCREEN_STOP_CONFIRM[] PROGMEM         = "Stop";
const char EN_SCREEN_STOP_BACK[] PROGMEM            = "Back";
const char EN_SCREEN_STOP_OK[] PROGMEM              = "Confirm";

const char EN_SCREEN_CHANGE_TITLE[] PROGMEM         = "Change filament";
const char EN_SCREEN_CHANGE_BOX[] PROGMEM           = "Push to continue";
const char EN_SCREEN_CHANGE_CONFIRM[] PROGMEM       = "Change filament";
const char EN_SCREEN_CHANGE_START[] PROGMEM         = "Start";
const char EN_SCREEN_CHANGE_PULLOUT[] PROGMEM       = "Pull out";
const char EN_SCREEN_CHANGE_INSERT[] PROGMEM        = "Insert & press";
const char EN_SCREEN_CHANGE_RETRY[] PROGMEM         = "Finished?";
const char EN_SCREEN_CHANGE_PAUSING[] PROGMEM       = "Pausing...";

const char EN_SCREEN_HEATING_MAIN_TITLE[] PROGMEM   = "Change temperature";
const char EN_SCREEN_HEATING_MAIN_BOX[] PROGMEM     = "Back";

const char EN_SCREEN_SPEED[] PROGMEM                = "Change speed";
const char EN_SELECTOR_BOX[] PROGMEM                = "Select a value";
const char EN_OK1[] PROGMEM                         = "OK";

const char EN_SCREEN_SERIAL_TITLE[] PROGMEM         = "Serial control";

#endif //LANGUAGE_EN_H