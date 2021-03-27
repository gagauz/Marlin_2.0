/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */
#pragma once

#include "../inc/MarlinConfig.h"

#define _UxGT(a) a

// Fallback if no language is set. DON'T CHANGE
#ifndef LCD_LANGUAGE
  #define LCD_LANGUAGE en
#endif

// For character-based LCD controllers (DISPLAY_CHARSET_HD44780)
#define JAPANESE 1
#define WESTERN  2
#define CYRILLIC 3

// NOTE: IF YOU CHANGE LANGUAGE FILES OR MERGE A FILE WITH CHANGES
//
//   ==> ALWAYS TRY TO COMPILE MARLIN WITH/WITHOUT "ULTIPANEL" / "ULTRALCD" / "SDSUPPORT" #define IN "Configuration.h"
//   ==> ALSO TRY ALL AVAILABLE LANGUAGE OPTIONS
// See also http://marlinfw.org/docs/development/lcd_language.html

// Languages
// an         Aragonese
// bg         Bulgarian
// ca         Catalan
// cz         Czech
// de         German
// el         Greek
// el-gr      Greek (Greece)
// en         English
// es         Spanish
// eu         Basque-Euskera
// fi         Finnish
// fr         French
// gl         Galician
// hr         Croatian
// it         Italian
// jp-kana    Japanese
// ko_KR      Korean (South Korea)
// nl         Dutch
// pl         Polish
// pt         Portuguese
// pt-br      Portuguese (Brazilian)
// ru         Russian
// sk         Slovak
// tr         Turkish
// uk         Ukrainian
// zh_CN      Chinese (Simplified)
// zh_TW      Chinese (Traditional)

#ifdef DEFAULT_SOURCE_CODE_URL
  #undef  SOURCE_CODE_URL
  #define SOURCE_CODE_URL DEFAULT_SOURCE_CODE_URL
#endif

#ifdef CUSTOM_MACHINE_NAME
  #undef  MACHINE_NAME
  #define MACHINE_NAME CUSTOM_MACHINE_NAME
#else
  #ifdef DEFAULT_MACHINE_NAME
    #undef  MACHINE_NAME
    #define MACHINE_NAME DEFAULT_MACHINE_NAME
  #endif
#endif

#ifndef MACHINE_UUID
  #define MACHINE_UUID DEFAULT_MACHINE_UUID
#endif

#ifdef DEFAULT_WEBSITE_URL
  #undef  WEBSITE_URL
  #define WEBSITE_URL DEFAULT_WEBSITE_URL
#endif

#if HAS_GRAPHICAL_LCD
  //
  // Custom characters from Marlin_symbols.fon which was merged into ISO10646-0-3.bdf
  // \x00 intentionally skipped to avoid problems in strings
  //
  #define LCD_STR_REFRESH     "\x01"
  #define LCD_STR_FOLDER      "\x02"
  #define LCD_STR_ARROW_RIGHT "\x03"
  #define LCD_STR_UPLEVEL     "\x04"
  #define LCD_STR_CLOCK       "\x05"
  #define LCD_STR_FEEDRATE    "\x06"
  #define LCD_STR_BEDTEMP     "\x07"
  #define LCD_STR_THERMOMETER "\x08"
  #define LCD_STR_DEGREE      "\x09"

  #define LCD_STR_SPECIAL_MAX '\x09'
  // Maximum here is 0x1F because 0x20 is ' ' (space) and the normal charsets begin.
  // Better stay below 0x10 because DISPLAY_CHARSET_HD44780_WESTERN begins here.

  // Symbol characters
  #define LCD_STR_FILAM_DIA   "\xF8"
  #define LCD_STR_FILAM_MUL   "\xA4"

#elif HAS_CHARACTER_LCD

  // Custom characters defined in the first 8 characters of the LCD
  #define LCD_STR_BEDTEMP     "\x00" // Print only as a char. This will have 'unexpected' results when used in a string!
  #define LCD_STR_DEGREE      "\x01"
  #define LCD_STR_THERMOMETER "\x02" // Still used with string concatenation
  #define LCD_STR_UPLEVEL     "\x03"
  #define LCD_STR_REFRESH     "\x04"
  #define LCD_STR_FOLDER      "\x05"
  #define LCD_STR_FEEDRATE    "\x06"
  #define LCD_STR_CLOCK       "\x07"
  #define LCD_STR_ARROW_RIGHT ">"  /* from the default character set */

#endif

// Common LCD messages

  /* nothing here yet */

// Common serial messages
#define MSG_MARLIN "Marlin"

// Serial Console Messages (do not translate those!)


#define MSG_ENQUEUEING                      ""
#define MSG_POWERUP                         ""
#define MSG_EXTERNAL_RESET                  ""
#define MSG_BROWNOUT_RESET                  ""
#define MSG_WATCHDOG_RESET                  ""
#define MSG_SOFTWARE_RESET                  ""
#define MSG_AUTHOR                          ""
#define MSG_CONFIGURATION_VER               ""
#define MSG_FREE_MEMORY                     ""
#define MSG_PLANNER_BUFFER_BYTES            ""
#define MSG_OK                              ""
#define MSG_WAIT                            ""
#define MSG_STATS                           ""
#define MSG_FILE_SAVED                      ""
#define MSG_ERR_LINE_NO                     ""
#define MSG_ERR_CHECKSUM_MISMATCH           ""
#define MSG_ERR_NO_CHECKSUM                 ""
#define MSG_FILE_PRINTED                    ""
#define MSG_BEGIN_FILE_LIST                 ""
#define MSG_END_FILE_LIST                   ""
#define MSG_INVALID_EXTRUDER                ""
#define MSG_INVALID_SOLENOID                ""
#define MSG_ERR_NO_THERMISTORS              ""
#define MSG_M115_REPORT                     "" MACHINE_UUID
#define MSG_COUNT_X                         ""
#define MSG_COUNT_A                         ""
#define MSG_WATCHDOG_FIRED                  ""
#define MSG_ERR_KILLED                      ""
#define MSG_ERR_STOPPED                     ""
#define MSG_BUSY_PROCESSING                 ""
#define MSG_BUSY_PAUSED_FOR_USER            ""
#define MSG_BUSY_PAUSED_FOR_INPUT           ""
#define MSG_Z_MOVE_COMP                     ""
#define MSG_RESEND                          ""
#define MSG_UNKNOWN_COMMAND                 ""
#define MSG_ACTIVE_EXTRUDER                 ""
#define MSG_X_MIN                           ""
#define MSG_X_MAX                           ""
#define MSG_X2_MIN                          ""
#define MSG_X2_MAX                          ""
#define MSG_Y_MIN                           ""
#define MSG_Y_MAX                           ""
#define MSG_Y2_MIN                          ""
#define MSG_Y2_MAX                          ""
#define MSG_Z_MIN                           ""
#define MSG_Z_MAX                           ""
#define MSG_Z2_MIN                          ""
#define MSG_Z2_MAX                          ""
#define MSG_Z3_MIN                          ""
#define MSG_Z3_MAX                          ""
#define MSG_Z_PROBE                         ""
#define MSG_FILAMENT_RUNOUT_SENSOR          ""
#define MSG_PROBE_Z_OFFSET                  ""
#define MSG_SKEW_MIN                        ""
#define MSG_SKEW_MAX                        ""
#define MSG_ERR_MATERIAL_INDEX              ""
#define MSG_ERR_M421_PARAMETERS             ""
#define MSG_ERR_BAD_PLANE_MODE              ""
#define MSG_ERR_MESH_XY                     ""
#define MSG_ERR_ARC_ARGS                    ""
#define MSG_ERR_PROTECTED_PIN               ""
#define MSG_ERR_M420_FAILED                 ""
#define MSG_ERR_M428_TOO_FAR                ""
#define MSG_ERR_M303_DISABLED               ""
#define MSG_M119_REPORT                     ""
#define MSG_ON                              ""
#define MSG_OFF                             ""
#define MSG_ENDSTOP_HIT                     ""
#define MSG_ENDSTOP_OPEN                    ""
#define MSG_HOTEND_OFFSET                   ""
#define MSG_DUPLICATION_MODE                ""
#define MSG_SOFT_ENDSTOPS                   ""
#define MSG_SOFT_MIN                        ""
#define MSG_SOFT_MAX                        ""

#define MSG_SD_CANT_OPEN_SUBDIR             ""
#define MSG_SD_INIT_FAIL                    ""
#define MSG_SD_VOL_INIT_FAIL                ""
#define MSG_SD_OPENROOT_FAIL                ""
#define MSG_SD_CARD_OK                      ""
#define MSG_SD_WORKDIR_FAIL                 ""
#define MSG_SD_OPEN_FILE_FAIL               ""
#define MSG_SD_FILE_OPENED                  ""
#define MSG_SD_SIZE                         ""
#define MSG_SD_FILE_SELECTED                ""
#define MSG_SD_WRITE_TO_FILE                ""
#define MSG_SD_PRINTING_BYTE                ""
#define MSG_SD_NOT_PRINTING                 ""
#define MSG_SD_ERR_WRITE_TO_FILE            ""
#define MSG_SD_ERR_READ                     ""
#define MSG_SD_CANT_ENTER_SUBDIR            ""

#define MSG_STEPPER_TOO_HIGH                ""
#define MSG_ENDSTOPS_HIT                    ""
#define MSG_ERR_COLD_EXTRUDE_STOP           ""
#define MSG_ERR_LONG_EXTRUDE_STOP           ""
#define MSG_ERR_HOTEND_TOO_COLD             ""

#define MSG_FILAMENT_CHANGE_HEAT            ""
#define MSG_FILAMENT_CHANGE_INSERT          ""
#define MSG_FILAMENT_CHANGE_WAIT            ""
#define MSG_FILAMENT_CHANGE_HEAT_LCD        ""
#define MSG_FILAMENT_CHANGE_INSERT_LCD      ""
#define MSG_FILAMENT_CHANGE_WAIT_LCD        ""
#define MSG_FILAMENT_CHANGE_HEAT_M108       ""
#define MSG_FILAMENT_CHANGE_INSERT_M108     ""
#define MSG_FILAMENT_CHANGE_WAIT_M108       ""

#define MSG_ERR_EEPROM_WRITE                ""

#define MSG_STOP_BLTOUCH                    ""
#define MSG_STOP_UNHOMED                    ""
#define MSG_KILL_INACTIVE_TIME              ""
#define MSG_KILL_BUTTON                     ""

// temperature.cpp strings
#define MSG_PID_AUTOTUNE                    ""
#define MSG_PID_AUTOTUNE_START              MSG_PID_AUTOTUNE ""
#define MSG_PID_AUTOTUNE_FAILED             MSG_PID_AUTOTUNE ""
#define MSG_PID_BAD_EXTRUDER_NUM            MSG_PID_AUTOTUNE_FAILED ""
#define MSG_PID_TEMP_TOO_HIGH               MSG_PID_AUTOTUNE_FAILED ""
#define MSG_PID_TIMEOUT                     MSG_PID_AUTOTUNE_FAILED ""
#define MSG_BIAS                            ""
#define MSG_D                               ""
#define MSG_T_MIN                           ""
#define MSG_T_MAX                           ""
#define MSG_KU                              ""
#define MSG_TU                              ""
#define MSG_CLASSIC_PID                     ""
#define MSG_KP                              ""
#define MSG_KI                              ""
#define MSG_KD                              ""
#define MSG_AT                              ""
#define MSG_PID_AUTOTUNE_FINISHED           MSG_PID_AUTOTUNE ""
#define MSG_PID_DEBUG                       ""
#define MSG_PID_DEBUG_INPUT                 ""
#define MSG_PID_DEBUG_OUTPUT                ""
#define MSG_PID_DEBUG_PTERM                 ""
#define MSG_PID_DEBUG_ITERM                 ""
#define MSG_PID_DEBUG_DTERM                 ""
#define MSG_PID_DEBUG_CTERM                 ""
#define MSG_INVALID_EXTRUDER_NUM            ""

#define MSG_HEATER_BED                      ""
#define MSG_STOPPED_HEATER                  ""
#define MSG_REDUNDANCY                      ""
#define MSG_T_HEATING_FAILED                ""
#define MSG_T_THERMAL_RUNAWAY               ""
#define MSG_T_MAXTEMP                       ""
#define MSG_T_MINTEMP                       ""

// Debug
#define MSG_DEBUG_PREFIX                    ""
#define MSG_DEBUG_OFF                       ""
#define MSG_DEBUG_ECHO                      ""
#define MSG_DEBUG_INFO                      ""
#define MSG_DEBUG_ERRORS                    ""
#define MSG_DEBUG_DRYRUN                    ""
#define MSG_DEBUG_COMMUNICATION             ""
#define MSG_DEBUG_LEVELING                  ""

// LCD Menu Messages

#define LANGUAGE_DATA_INCL_(M) STRINGIFY_(fontdata/langdata_##M.h)
#define LANGUAGE_DATA_INCL(M) LANGUAGE_DATA_INCL_(M)
#define INCLUDE_LANGUAGE_DATA LANGUAGE_DATA_INCL(LCD_LANGUAGE)

#define LANGUAGE_INCL_(M) STRINGIFY_(../lcd/language/language_##M.h)
#define LANGUAGE_INCL(M) LANGUAGE_INCL_(M)
#define INCLUDE_LANGUAGE LANGUAGE_INCL(LCD_LANGUAGE)

// Never translate these strings
#define MSG_X ""
#define MSG_Y ""
#define MSG_Z ""
#define MSG_E ""
#if IS_KINEMATIC
  #define MSG_A ""
  #define MSG_B ""
  #define MSG_C ""
#else
  #define MSG_A ""
  #define MSG_B ""
  #define MSG_C ""
#endif
#define MSG_X2 ""
#define MSG_Y2 ""
#define MSG_Z2 ""
#define MSG_Z3 ""
#define MSG_H1 ""
#define MSG_H2 ""
#define MSG_H3 ""
#define MSG_H4 ""
#define MSG_H5 ""
#define MSG_H6 ""
#define MSG_LCD_N0 ""
#define MSG_LCD_N1 ""
#define MSG_LCD_N2 ""
#define MSG_LCD_N3 ""
#define MSG_LCD_N4 ""
#define MSG_LCD_N5 ""
#define MSG_E0 ""
#define MSG_E1 ""
#define MSG_E2 ""
#define MSG_E3 ""
#define MSG_E4 ""
#define MSG_E5 ""
#define MSG_E6 ""
#define MSG_MOVE_E1 ""
#define MSG_MOVE_E2 ""
#define MSG_MOVE_E3 ""
#define MSG_MOVE_E4 ""
#define MSG_MOVE_E5 ""
#define MSG_MOVE_E6 ""
#define MSG_DIAM_E1 ""
#define MSG_DIAM_E2 ""
#define MSG_DIAM_E3 ""
#define MSG_DIAM_E4 ""
#define MSG_DIAM_E5 ""
#define MSG_DIAM_E6 ""

#include INCLUDE_LANGUAGE

#if DISABLED(DISPLAY_CHARSET_ISO10646_1) \
 && DISABLED(DISPLAY_CHARSET_ISO10646_5) \
 && DISABLED(DISPLAY_CHARSET_ISO10646_KANA) \
 && DISABLED(DISPLAY_CHARSET_ISO10646_GREEK) \
 && DISABLED(DISPLAY_CHARSET_ISO10646_CN) \
 && DISABLED(DISPLAY_CHARSET_ISO10646_TR) \
 && DISABLED(DISPLAY_CHARSET_ISO10646_PL) \
 && DISABLED(DISPLAY_CHARSET_ISO10646_CZ) \
 && DISABLED(DISPLAY_CHARSET_ISO10646_SK)
  #define DISPLAY_CHARSET_ISO10646_1 // use the better font on full graphic displays.
#endif

//#include ""

#ifdef CUSTOM_USER_MENU_TITLE
  #undef MSG_USER_MENU
  #define MSG_USER_MENU CUSTOM_USER_MENU_TITLE
#endif
