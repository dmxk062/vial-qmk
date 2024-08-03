/* Copyright 2023 @ Keychron (https://www.keychron.com)
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

#include "quantum_keycodes.h"
#include QMK_KEYBOARD_H
#include "keychron_common.h"

#define LSHIFT_LED_INDEX 77
#define RSHIFT_LED_INDEX 88
#define SPACE_LED_INDEX  95

enum layers{
  LAYER_0,
  LAYER_1,
  LAYER_2,
  LAYER_3
};

// clang-format off

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [LAYER_0] = LAYOUT_ansi_103(
    /*  knob(press)   󰔷           󰝣                         󱊷         F1        F2        F3        F4        F5        F6        F7        F8         F9       F10       F11          F12      DEL                  󰛨    */
        KC_MUTE,    DM_PLY1,    KC_PSCR,      KC_MPLY,     KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,     KC_F9,   KC_F10,   KC_F11,     KC_F12,   KC_DEL,             RGB_TOG,
    /*  numlock       /           *             -            ~         1         2         3         4         5         6         7         8          9        0         -           =        <-                   pgup  */
        KC_NUM,     KC_PSLS,    KC_PAST,      KC_PMNS,     KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,      KC_9,    KC_0,     KC_MINS,    KC_EQL,   KC_BSPC,            KC_PGUP,
    /*    7           8           9             +            󰌒         Q         W         E         R         T         Y         U         I          O        P         [           ]         \                   pgdn  */
        KC_P7,      KC_P8,      KC_P9,        KC_PPLS,     KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,      KC_O,    KC_P,     KC_LBRC,    KC_RBRC,  KC_BSLS,            KC_PGDN,
    /*    4           5           6                          caps      A         S         D         F         G         H         J         K          L        ;         '                     󰌑                   home  */
        KC_P4,      KC_P5,      KC_P6,               LCTL_T(KC_ESC), KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,      KC_L,    KC_SCLN,  KC_QUOT,              KC_ENT,             KC_HOME,
    /*    1           2           3                          lshift              Z         X         C         V         B         N         M          ,        .          /                    rshift       󰅃            */
        KC_P1,      KC_P2,      KC_P3,        KC_PENT,     SC_LSPO,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,      KC_COMM, KC_DOT,   KC_SLSH,              SC_RSPC,     KC_UP,
    /*    0                       .                        lctrl     lgui      lalt                                    space                                   ralt         fn         rctrl        󰅁         󰅀         󰅂   */
        KC_P0,                  KC_PDOT,                 KC_LCTL,  KC_LWIN,  LALT_T(KC_BSPC),                        KC_SPC,                                 KC_RALT,  MO(LAYER_1),  KC_RCTL,     KC_LEFT,  KC_DOWN,  KC_RGHT
    ),
    [LAYER_1] = LAYOUT_ansi_103(
    /*  knob(press)   󰔷           󰝣                         󱊷         F1        F2        F3        F4        F5        F6        F7        F8         F9       F10       F11          F12      DEL                  󰛨    */
        KC_MPLY,    DM_REC1,    _______,      KC_MSTP,     _______,  KC_BRID,  KC_BRIU,  KC_TASK,  _______,  RGB_M_P,  RGB_MOD,  KC_MPRV,  KC_MPLY,   KC_MNXT, KC_MUTE,  KC_VOLU,    KC_VOLD,  KC_BSPC,            RGB_TOG,
    /*  numlock       /           *             -            ~         1         2         3         4         5         6         7         8          9        0         -           =        <-                   pgup  */
        _______,    RGB_SAD,    RGB_SAI,      RGB_HUI,     _______,  _______,  _______,   _______, _______,  _______,  _______,  _______,  _______,   _______, _______,  _______,    _______,  _______,            _______,
    /*    7           8           9             +            󰌒         Q         W         E         R         T         Y         U         I          O        P         [           ]         \                   pgdn  */
        KC_MS_BTN1, KC_MS_U,    KC_MS_BTN2,   RGB_HUD,     KC_BSPC,  _______,  _______,   _______, _______,  _______,  _______,  _______,  _______,   _______, _______,  _______,    _______,  _______,            _______,
    /*    4           5           6                          caps      A         S         D         F         G         H         J         K          L        ;         '                     󰌑                   home  */
        KC_MS_L,    KC_MS_D,    KC_MS_R,                   KC_CAPS,  _______,  _______,   _______, _______,  _______,  _______,  _______,  _______,   _______, _______,  _______,              _______,            _______,
    /*    1           2           3                          lshift              Z         X         C         V         B         N         M          ,        .          /                    rshift       󰅃            */
        KC_MS_WH_UP,KC_MS_BTN3, KC_MS_WH_DOWN,_______,     _______,            _______,   _______, _______,  _______,  _______,  _______,  _______,   _______, _______,  _______,             _______,      KC_PAGE_UP,
    /*    0                       .                        lctrl     lgui      lalt                                    space                                   ralt         fn         rctrl        󰅁         󰅀         󰅂   */
        _______,                _______,      _______,     _______,  _______,                                        CW_TOGG,                                _______,  _______,      _______,     KC_HOME,  KC_PAGE_DOWN,  KC_END
    ),
    [LAYER_2] = LAYOUT_ansi_103(
    /*  knob(press)   󰔷           󰝣                         󱊷         F1        F2        F3        F4        F5        F6        F7        F8         F9       F10       F11          F12      DEL                  󰛨    */
        KC_MUTE,    DM_PLY1,    KC_PSCR,      KC_MPLY,     KC_ESC,   KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,     KC_F9,   KC_F10,   KC_F11,     KC_F12,   KC_DEL,             RGB_TOG,
    /*  numlock       /           *             -            ~         1         2         3         4         5         6         7         8          9        0         -           =        <-                   pgup  */
        KC_NUM,     KC_PSLS,    KC_PAST,      KC_PMNS,     KC_GRV,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,      KC_9,    KC_0,     KC_MINS,    KC_EQL,   KC_BSPC,            KC_PGUP,
    /*    7           8           9             +            󰌒         Q         W         E         R         T         Y         U         I          O        P         [           ]         \                   pgdn  */
        KC_P7,      KC_P8,      KC_P9,        KC_PPLS,     KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,      KC_O,    KC_P,     KC_LBRC,    KC_RBRC,  KC_BSLS,            KC_PGDN,
    /*    4           5           6                          caps      A         S         D         F         G         H         J         K          L        ;         '                     󰌑                   home  */
        KC_P4,      KC_P5,      KC_P6,               LCTL_T(KC_ESC), KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,      KC_L,    KC_SCLN,  KC_QUOT,              KC_ENT,             KC_HOME,
    /*    1           2           3                          lshift              Z         X         C         V         B         N         M          ,        .          /                    rshift       󰅃            */
        KC_P1,      KC_P2,      KC_P3,        KC_PENT,     SC_LSPO,            KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,      KC_COMM, KC_DOT,   KC_SLSH,              SC_RSPC,     KC_UP,
    /*    0                       .                        lctrl     lgui      lalt                                    space                                   ralt         fn         rctrl        󰅁         󰅀         󰅂   */
        KC_P0,                  KC_PDOT,                 KC_LCTL,  KC_LWIN,  LALT_T(KC_BSPC),                        KC_SPC,                                 KC_RALT,  MO(LAYER_1),  KC_RCTL,     KC_LEFT,  KC_DOWN,  KC_RGHT
    ),
    [LAYER_3] = LAYOUT_ansi_103(
    /*  knob(press)   󰔷           󰝣                         󱊷         F1        F2        F3        F4        F5        F6        F7        F8         F9       F10       F11          F12      DEL                  󰛨    */
        KC_MPLY,    DM_REC1,    _______,      KC_MSTP,     _______,  KC_BRID,  KC_BRIU,  KC_TASK,  _______,  RGB_M_P,  RGB_MOD,  KC_MPRV,  KC_MPLY,   KC_MNXT, KC_MUTE,  KC_VOLU,    KC_VOLD,  KC_BSPC,            RGB_TOG,
    /*  numlock       /           *             -            ~         1         2         3         4         5         6         7         8          9        0         -           =        <-                   pgup  */
        _______,    RGB_SAD,    RGB_SAI,      RGB_HUI,     _______,  _______,  _______,   _______, _______,  _______,  _______,  _______,  _______,   _______, _______,  _______,    _______,  _______,            _______,
    /*    7           8           9             +            󰌒         Q         W         E         R         T         Y         U         I          O        P         [           ]         \                   pgdn  */
        KC_MS_BTN1, KC_MS_U,    KC_MS_BTN2,   RGB_HUD,     KC_BSPC,  _______,  _______,   _______, _______,  _______,  _______,  _______,  _______,   _______, _______,  _______,    _______,  _______,            _______,
    /*    4           5           6                          caps      A         S         D         F         G         H         J         K          L        ;         '                     󰌑                   home  */
        KC_MS_L,    KC_MS_D,    KC_MS_R,                   KC_CAPS,  _______,  _______,   _______, _______,  _______,  _______,  _______,  _______,   _______, _______,  _______,              _______,            _______,
    /*    1           2           3                          lshift              Z         X         C         V         B         N         M          ,        .          /                    rshift       󰅃            */
        KC_MS_WH_UP,KC_MS_BTN3, KC_MS_WH_DOWN,_______,     _______,            _______,   _______, _______,  _______,  _______,  _______,  _______,   _______, _______,  _______,             _______,      KC_PAGE_UP,
    /*    0                       .                        lctrl     lgui      lalt                                    space                                   ralt         fn         rctrl        󰅁         󰅀         󰅂   */
        _______,                _______,      _______,     _______,  _______,                                        CW_TOGG,                                _______,  _______,      _______,     KC_HOME,  KC_PAGE_DOWN,  KC_END
    ),
};

const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [LAYER_0] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [LAYER_1] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [LAYER_2] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)},
    [LAYER_3] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)}
};
// clang-format on

void housekeeping_task_user(void) {
    housekeeping_task_keychron();
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (!process_record_keychron(keycode, record)) {
        return false;
    }
    return true;
}

#define SET_WHITE(_index) rgb_matrix_set_color(_index, 255, 255, 255)
#define SET_BLACK(_index) rgb_matrix_set_color(_index, 0, 0, 0)

static bool caps_word_is_on = false;
bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    led_t led_state = host_keyboard_led_state();
    if (led_state.caps_lock) {
        SET_WHITE(LSHIFT_LED_INDEX);
        SET_WHITE(RSHIFT_LED_INDEX);
    } else {
        if (!rgb_matrix_get_flags()) {
            SET_BLACK(LSHIFT_LED_INDEX);
            SET_BLACK(RSHIFT_LED_INDEX);
        }
    }

    if (led_state.num_lock) {
        SET_WHITE(NUM_LOCK_LED_INDEX);
    } else {
        if (!rgb_matrix_get_flags()) {
            SET_BLACK(NUM_LOCK_LED_INDEX);
        }
    }

    if (caps_word_is_on) {
        SET_WHITE(SPACE_LED_INDEX);
        SET_WHITE(LSHIFT_LED_INDEX);
        SET_WHITE(RSHIFT_LED_INDEX);
    } else {
        if (!rgb_matrix_get_flags()) {
            SET_BLACK(SPACE_LED_INDEX);
            if (!led_state.caps_lock) {
                SET_BLACK(LSHIFT_LED_INDEX);
                SET_BLACK(RSHIFT_LED_INDEX);
            }
        }
    }


    return false;
}

void caps_word_set_user(bool active) {
    caps_word_is_on = active;
}
