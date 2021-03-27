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

 /**
  * 2017 Victor Perez Marlin for stm32f1 test
  * 2018 Modified by Pablo Crespo for Morpheus Board (https://github.com/pscrespo/Morpheus-STM32)
  */

/**
 * MORPHEUS Board pin assignments
 */

#ifndef __STM32F1__
  #error "Oops! Select an STM32F1 board in 'Tools > Board.'"
#endif

#ifndef BOARD_NAME
  #define BOARD_NAME "Bluepill Morpheus based board"
#endif



//
// Limit Switches
//
#define X_MAX_PIN            PB9
#define Y_MAX_PIN            PB3
#define Z_MAX_PIN            PA9

//
// Z Probe (when not Z_MIN_PIN)
//
#ifndef Z_MIN_PROBE_PIN
  #define Z_MIN_PROBE_PIN    Z_MAX_PIN
#endif

//
// Steppers
//
// X & Y enable are the same
#define X_STEP_PIN         PB7
#define X_DIR_PIN          PB6
#define X_ENABLE_PIN       PB8

#define Y_STEP_PIN         PB5
#define Y_DIR_PIN          PB4
#define Y_ENABLE_PIN       X_ENABLE_PIN

#define Z_STEP_PIN         PA15
#define Z_DIR_PIN          PA10
#define Z_ENABLE_PIN       X_ENABLE_PIN

#define E0_STEP_PIN        PA8
#define E0_DIR_PIN         PB15
#define E0_ENABLE_PIN      X_ENABLE_PIN

//
// Temperature Sensors
//
#define TEMP_0_PIN         PB1   // Analog Input (HOTEND thermistor)
#define TEMP_BED_PIN       PB0   // Analog Input (BED thermistor)

//
// Heaters / Fans
//
#define HEATER_0_PIN       PA2   // HOTEND MOSFET
#define HEATER_BED_PIN     PA0   // BED MOSFET

#define FAN_PIN            PA1   // FAN1 header on board - PRINT FAN

//
// Misc.
//
//#define LED_PIN            PC13
#define SDSS               PA3

// LCD

#define LCD_PINS_RS       PB12
#define LCD_PINS_ENABLE   PB13
#define LCD_PINS_D4       PB14
#define LCD_PINS_D5       PA3
#define LCD_PINS_D6       PB10
#define LCD_PINS_D7       PB11

// ENCODER

#define BTN_EN1           PC15
#define BTN_EN2           PC14
#define BTN_ENC           PC13
#define SD_DETECT_PIN     -1
#define KILL_PIN          -1
