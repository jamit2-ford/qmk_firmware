/*
Copyright 2012 Jun Wako <wakojun@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0x6060
#define DEVICE_VER      0x0001
#define MANUFACTURER    GON
#define PRODUCT         NerDTKL
#define DESCRIPTION     QMK keyboard firmware for Nerd TKL

/* key matrix size */
#define MATRIX_ROWS 9
#define MATRIX_COLS 10

// ROWS: Top to bottom, COLS: Left to right
/* Row pin configuration
*/
#define MATRIX_ROW_PINS { B4, E2, F4, F7, F1, F6, C6, F5, D7, C7 }
/* Column pin configuration
 */
#define MATRIX_COL_PINS { E6, B0, B1, B2, B3, F0, D0, D5, D1 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION ROW2COL

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

/* /\* Underlight configuration */
/*  *\/ */
/* #define RGB_DI_PIN B6 */
/* #define RGBLIGHT_TIMER */
/* #define RGBLED_NUM 20     // Number of LEDs */
/* #define RGBLIGHT_HUE_STEP 10 */
/* #define RGBLIGHT_SAT_STEP 17 */
/* #define RGBLIGHT_VAL_STEP 17 */

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION

#endif
