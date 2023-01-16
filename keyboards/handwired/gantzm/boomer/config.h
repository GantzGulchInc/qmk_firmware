// Copyright 2022 GantzGulch, Inc. & Michael L. Gantz (@Michael L. Gantz)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define OLED_DISPLAY_128X64

#define SPLIT_USB_DETECT 
#define SOFT_SERIAL_PIN       D3

// #define LED_CAPS_LOCK_PIN     D6

#define MATRIX_COLS           10
#define MATRIX_ROWS           12

#define MATRIX_COL_PINS       { B5, F0, B6, B2, B3, B1, F7, F6, F5, F4} 
#define MATRIX_ROW_PINS       { D2, D4, C6, D7, E6, B4 }

#define MATRIX_COL_PINS_RIGHT { B5, F0, B6, B2, B3, B1, F7, F6, F5, F4} 
#define MATRIX_ROW_PINS_RIGHT { D2, D4, C6, D7, E6, B4 }
