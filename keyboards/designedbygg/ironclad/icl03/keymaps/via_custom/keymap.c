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

#include QMK_KEYBOARD_H

#define LSF(f) (QK_LSFT | (KC_F##f))
#define RSF(f) (QK_RSFT | (KC_F##f))
#define LCF(f) (QK_LCTL | (KC_F##f))
#define RCF(f) (QK_RCTL | (KC_F##f))
enum user_keycode_defines {
  QK_RGB_MATRIX_RESET = SAFE_RANGE,
  QK_RGB_MATRIX_SOLID_COLOR,
  QK_RGB_MATRIX_ALPHAS_MODS,
  RM_RSET = QK_RGB_MATRIX_RESET,
  RM_SLDC = QK_RGB_MATRIX_SOLID_COLOR,
  RM_ALMD = QK_RGB_MATRIX_ALPHAS_MODS
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┐   ┌───┬───┬───┬───┐ ┌───┬───┬───┬───┐ ┌───┬───┬───┬───┐ ┌───┬───┬───┐ ┌───┬───┬───┬───┐
     * │Esc│   │F1 │F2 │F3 │F4 │ │F5 │F6 │F7 │F8 │ │F9 │F10│F11│F12│ │PSc│Scr│Pse│ │Clc│VMT│VDN│VUP│
     * └───┘   └───┴───┴───┴───┘ └───┴───┴───┴───┘ └───┴───┴───┴───┘ └───┴───┴───┘ └───┴───┴───┴───┘
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐ ┌───┬───┬───┐ ┌───┬───┬───┬───┐
     * │ ` │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │ Backsp│ │Ins│Hom│PgU│ │Num│ / │ * │ - │
     * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤ ├───┼───┼───┤ ├───┼───┼───┼───┤
     * │ Tab │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ [ │ ] │     │ │Del│End│PgD│ │ 7 │ 8 │ 9 │   │
     * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐ Ent│ └───┴───┴───┘ ├───┼───┼───┤ + │
     * │ Caps │ A │ S │ D │ F │ G │ H │ J │ K │ L │ ; │ ' │ # │    │               │ 4 │ 5 │ 6 │   │
     * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤     ┌───┐     ├───┼───┼───┼───┤
     * │Shft│ \ │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ / │    Shift │     │ ↑ │     │ 1 │ 2 │ 3 │   │
     * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤ ┌───┼───┼───┐ ├───┴───┼───┤Ent│
     * │Ctrl│GUI │Alt │                        │ Alt│ GUI│Menu│Ctrl│ │ ← │ ↓ │ → │ │   0   │ . │   │
     * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘ └───┴───┴───┘ └───────┴───┴───┘
     */
    [0] = LAYOUT_fullsize_extended_iso(
        KC_ESC,           KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,     KC_PSCR, KC_SCRL, KC_PAUS,    KC_CALC, KC_MUTE, KC_VOLD, KC_VOLU,

        KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,    KC_INS,  KC_HOME, KC_PGUP,    KC_NUM,  KC_PSLS, KC_PAST, KC_PMNS,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC,             KC_DEL,  KC_END,  KC_PGDN,    KC_P7,   KC_P8,   KC_P9,   KC_PPLS,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_NUHS, KC_ENT,                                   KC_P4,   KC_P5,   KC_P6,
        KC_LSFT, KC_NUBS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT,             KC_UP,               KC_P1,   KC_P2,   KC_P3,   KC_PENT,
        KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                             KC_RALT, KC_RGUI,  MO(1),   KC_RCTL,    KC_LEFT, KC_DOWN, KC_RGHT,    KC_P0,            KC_PDOT
    ),

    [1] = LAYOUT_fullsize_extended_iso(
        QK_BOOT,          KC_F13,  KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,  KC_F19,  KC_F20,  KC_F21,  KC_F22,  KC_F23,  KC_F24,     _______, _______, KC_SLEP,    _______, RM_TOGG, RM_VALD, RM_VALU,

        RCF(21), LSF(22), RSF(22), LCF(22), RCF(22), LSF(23), RSF(23), LCF(23), RCF(23), LSF(24), RSF(24), LCF(24), RCF(24), _______,    XXXXXXX, XXXXXXX, KC_MPRV,    _______, RM_ALMD, RM_SLDC, RM_SPDD,
        XXXXXXX, LSF(13), RSF(13), LCF(13), RCF(13), LSF(14), RSF(14), LCF(14), RCF(14), LSF(15), RSF(15), LCF(15), RCF(15),             KC_PWR,  XXXXXXX, KC_MNXT,    XXXXXXX, RM_SATU, RM_PREV, RM_SPDU,
        _______, LSF(16), RSF(16), LCF(16), RCF(16), LSF(17), RSF(17), LCF(17), RCF(17), LSF(18), RSF(18), LCF(18), RCF(18), _______,                                  RM_HUED, RM_RSET, RM_HUEU,
        _______, LSF(19), RSF(19), LCF(19), RCF(19), LSF(20), RSF(20), LCF(20), RCF(20), LSF(21), RSF(21), LCF(21),          _______,             _______,             XXXXXXX, RM_SATD, RM_NEXT, XXXXXXX,
        _______, GU_TOGG,  _______,                           KC_MPLY,                            _______, GU_TOGG, _______, _______,    _______, _______, _______,    XXXXXXX,          XXXXXXX
    )
};

#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [0] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] = {ENCODER_CCW_CW(RGB_VAD, RGB_VAI) }
};
#endif

#ifdef RGB_MATRIX_ENABLE
void keyboard_post_init_user(void) {
  g_led_config.flags[20] = 4;
  g_led_config.flags[37] = 1;
  g_led_config.flags[95] = 1;
}
#endif

struct {
  bool rgui_other_key_pressed : 1;
  bool keymap_config_no_gui : 1;
  uint8_t reserved : 6;
} state_user;

#ifdef LED_WIN_BLOCK_PIN
void keyboard_pre_init_user(void) {
	gpio_set_pin_output(LED_WIN_BLOCK_PIN);
	gpio_write_pin(LED_WIN_BLOCK_PIN, ! LED_PIN_ON_STATE);
}
void housekeeping_task_user(void) {
  if (keymap_config.no_gui != state_user.keymap_config_no_gui) {
	  gpio_write_pin(LED_WIN_BLOCK_PIN, (state_user.keymap_config_no_gui = keymap_config.no_gui) ^ ! LED_PIN_ON_STATE);
  }
}
void suspend_power_down_user(void) {
  gpio_write_pin(LED_WIN_BLOCK_PIN, ! LED_PIN_ON_STATE);
}
void suspend_wakeup_init_user(void) {
  gpio_write_pin(LED_WIN_BLOCK_PIN, (state_user.keymap_config_no_gui = keymap_config.no_gui) ^ ! LED_PIN_ON_STATE);
}
#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  if (keycode == KC_RGUI) {
    if (! (record->event.pressed || state_user.rgui_other_key_pressed)) {
      tap_code(KC_APP);
    }
    state_user.rgui_other_key_pressed = false;
    return true;
  }
  state_user.rgui_other_key_pressed = true;
  if (keycode < QK_MAGIC) {return true;}
#ifndef MAGIC_ENABLE
  if (keycode <= QK_MAGIC_MAX) {
    if (record->event.pressed) {
      switch (keycode) {
        case QK_MAGIC_GUI_OFF:
          keymap_config.no_gui = true;
        break;
        case QK_MAGIC_GUI_ON:
          keymap_config.no_gui = false;
        break;
        case QK_MAGIC_TOGGLE_GUI:
          keymap_config.no_gui = ! keymap_config.no_gui;
        break;
        default:
          return false;
      }
      clear_keyboard();
    }
    return false;
  }
#endif
#ifdef RGB_MATRIX_ENABLE
  if (IS_RGB_MATRIX_KEYCODE(keycode) || IS_UNDERGLOW_KEYCODE(keycode)) {
#ifdef RGB_TRIGGER_ON_KEYDOWN
    if (record->event.pressed) {
#else
    if (! record->event.pressed) {
#endif
      switch (keycode) {
        case QK_RGB_MATRIX_ON:
          rgb_matrix_enable_noeeprom();
        break;
        case QK_RGB_MATRIX_OFF:
          rgb_matrix_disable_noeeprom();
        break;
        case QK_RGB_MATRIX_TOGGLE:
        case QK_UNDERGLOW_TOGGLE:
          rgb_matrix_toggle_noeeprom();
        break;
        case QK_RGB_MATRIX_MODE_NEXT:
        case QK_UNDERGLOW_MODE_NEXT:
          rgb_matrix_step_noeeprom();
        break;
        case QK_RGB_MATRIX_MODE_PREVIOUS:
        case QK_UNDERGLOW_MODE_PREVIOUS:
          rgb_matrix_step_reverse_noeeprom();
        break;
        case QK_RGB_MATRIX_HUE_UP:
        case QK_UNDERGLOW_HUE_UP:
          rgb_matrix_increase_hue_noeeprom();
        break;
        case QK_RGB_MATRIX_HUE_DOWN:
        case QK_UNDERGLOW_HUE_DOWN:
          rgb_matrix_decrease_hue_noeeprom();
        break;
        case QK_RGB_MATRIX_SATURATION_UP:
        case QK_UNDERGLOW_SATURATION_UP:
          rgb_matrix_increase_sat_noeeprom();
        break;
        case QK_RGB_MATRIX_SATURATION_DOWN:
        case QK_UNDERGLOW_SATURATION_DOWN:
          rgb_matrix_decrease_sat_noeeprom();
        break;
        case QK_RGB_MATRIX_VALUE_UP:
        case QK_UNDERGLOW_VALUE_UP:
          rgb_matrix_increase_val_noeeprom();
        break;
        case QK_RGB_MATRIX_VALUE_DOWN:
        case QK_UNDERGLOW_VALUE_DOWN:
          rgb_matrix_decrease_val_noeeprom();
        break;
        case QK_RGB_MATRIX_SPEED_UP:
        case QK_UNDERGLOW_SPEED_UP:
          rgb_matrix_increase_speed_noeeprom();
        break;
        case QK_RGB_MATRIX_SPEED_DOWN:
        case QK_UNDERGLOW_SPEED_DOWN:
          rgb_matrix_decrease_speed_noeeprom();
        break;
      }
    }
    return false;
  }
  if (keycode >= SAFE_RANGE) {
#ifdef RGB_TRIGGER_ON_KEYDOWN
    if (record->event.pressed) {
#else
    if (! record->event.pressed) {
#endif
      switch (keycode) {
        case QK_RGB_MATRIX_RESET:
          rgb_matrix_reload_from_eeprom();
        break;
        case QK_RGB_MATRIX_SOLID_COLOR:
          rgb_matrix_enable_noeeprom();
          rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_COLOR);
          rgb_matrix_sethsv_noeeprom(31, 33, 160);
        break;
#ifdef ENABLE_RGB_MATRIX_ALPHAS_MODS
        case QK_RGB_MATRIX_ALPHAS_MODS:
          rgb_matrix_enable_noeeprom();
          rgb_matrix_mode_noeeprom(RGB_MATRIX_ALPHAS_MODS);
          rgb_matrix_sethsv_noeeprom(10, 127, 160);
          rgb_matrix_set_speed_noeeprom(65);
        break;
#endif
      }
    }
    return false;
  }
#endif
  return true;
}

#ifndef MAGIC_ENABLE
uint16_t keycode_config(uint16_t keycode) {
  return (keymap_config.no_gui && (keycode == KC_LEFT_GUI || keycode == KC_RIGHT_GUI)) ? KC_NO : keycode;
}
uint8_t mod_config(uint8_t mod) {
  return keymap_config.no_gui ? (mod & ~MOD_LGUI) : mod;
}
#endif