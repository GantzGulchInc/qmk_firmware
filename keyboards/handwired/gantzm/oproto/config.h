// Copyright 2022 Michael L. Gantz (@Michael L. Gantz)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define SPLIT_USB_DETECT 
#define SPLIT_HAND_PIN B0
#define SOFT_SERIAL_PIN D2

#define LED_CAPS_LOCK_PIN D6

#define MATRIX_COLS 9
#define MATRIX_ROWS 12

#define MATRIX_COL_PINS { F0, F1, F4, F5, F6, F7, B6, B5, B4}
#define MATRIX_ROW_PINS { B1, B2, B3, B7, D0, D1}

#define MATRIX_COL_PINS_RIGHT { F0, F1, F4, F5, F6, F7, B6, B5, B4}
#define MATRIX_ROW_PINS_RIGHT { B1, B2, B3, B7, D0, D1}



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
