/* Copyright 2019 Bing Xu

 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once
#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0xFEED
#define PRODUCT_ID      0xB195
#define DEVICE_VER      0x0001
#define MANUFACTURER    bing
#define PRODUCT         chief
#define DESCRIPTION     4 knobs 8 keys rgb and stuff

/* key matrix size */
#define MATRIX_ROWS 3
#define MATRIX_COLS 4

/* Milk default pinout */
#define DIRECT_PINS { \
    {D7}, \
    {E6}, \
    {B4}, \
    {B5}  \
}

#define DEBOUNCE 20
#define TAPPING_TERM 200

