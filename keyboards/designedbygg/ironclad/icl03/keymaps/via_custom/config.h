/* Copyright 2023 Dimitris Mantzouranis <d3xter93@gmail.com>
 *
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
#define DYNAMIC_KEYMAP_LAYER_COUNT 2
#define USB_DEFAULT_BUFFER_CAPACITY 2

// USB polling rate in milliseconds
#define USB_POLLING_INTERVAL_MS 2

// Debug options
#undef DEBUG_MATRIX_SCAN_RATE

// WIN disabling LED
#undef LED_WIN_LOCK_PIN
#define LED_WIN_BLOCK_PIN B12

// RGB default values
#define RGB_MATRIX_DEFAULT_ON false
#define RGB_MATRIX_DEFAULT_MODE RGB_MATRIX_SOLID_COLOR
#define RGB_MATRIX_DEFAULT_HUE 31
#define RGB_MATRIX_DEFAULT_SAT 33
#define RGB_MATRIX_DEFAULT_VAL 160
#define RGB_MATRIX_DEFAULT_SPD 65

// Code size saving
#define NO_ACTION_TAPPING
#define NO_ACTION_ONESHOT
#define LAYER_STATE_8BIT
#undef ENABLE_RGB_MATRIX_TYPING_HEATMAP
#undef ENABLE_RGB_MATRIX_DIGITAL_RAIN