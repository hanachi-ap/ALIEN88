/* Copyright 2021 QMK
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
enum layer_names {
    _BASE,
    _L1,
    _L2,
    _L3,
    _L4,
    _L5,
    _L6,
    _L7,
    _L8,
    _FN,
    _SYS,
};
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[_BASE] = LAYOUT_93_ansi( // BASIC
             KC_GRV,    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,    MO(_SYS),            
  KC_VOLU,   KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,     KC_9,     KC_0 ,    KC_MINS,  KC_EQUAL,  KC_BSLS, KC_DEL,  KC_PGUP, 
  KC_VOLD,   KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,       KC_BSPC,      KC_PGDN,   
  KC_MUTE,   KC_LCTL,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,     KC_L,     KC_SCLN,  KC_QUOT,         KC_ENT,               KC_HOME,   
  KC_UP,     KC_LSFT,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,         KC_UP,                KC_END,
  KC_DOWN,   KC_LCTL,   KC_LGUI, KC_LALT,         KC_SPC,              LSFT_T(KC_SPC),         KC_RCTL,  KC_RGUI,  KC_RALT,  KC_LEFT,         KC_DOWN,              KC_RIGHT ,
                                                     LCTL_T(KC_F13),  MO(_FN),
                                               KC_NO, KC_WH_L,KC_BTN3,KC_WH_R,KC_NO
    ),
[_L1] = LAYOUT_93_ansi( // GAMING 

              C(KC_F1),  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,    MO(_SYS),            
  C(KC_F2),   KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,     KC_9,     KC_0 ,    KC_MINS,  KC_EQUAL,  KC_BSLS, KC_DEL,  KC_PGUP, 
  C(KC_F3),   KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,       KC_BSPC,      KC_PGDN,   
  C(KC_F4),   KC_LCTL,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,     KC_L,     KC_SCLN,  KC_QUOT,         KC_ENT,               KC_HOME,   
  C(KC_F5),   KC_LSFT,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,         KC_UP,                KC_END,
  C(KC_F6),   KC_LCTL,   KC_LGUI, KC_LALT,         KC_SPC,              LSFT_T(KC_SPC),         KC_RCTL,  KC_RGUI,  KC_RALT,  KC_LEFT,         KC_DOWN,              KC_RIGHT ,
                                                     LCTL_T(KC_F13),  MO(_FN),
                                               KC_NO, KC_VOLD,KC_MUTE,KC_VOLU,KC_NO
    ),


[_L2] = LAYOUT_93_ansi(   
             KC_GRV,    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,    MO(_SYS),            
  KC_VOLU,   KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,     KC_9,     KC_0 ,    KC_MINS,  KC_EQUAL,  KC_BSLS, KC_DEL,  KC_PGUP, 
  KC_VOLD,   KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,       KC_BSPC,      KC_PGDN,   
  KC_MUTE,   KC_LCTL,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,     KC_L,     KC_SCLN,  KC_QUOT,         KC_ENT,               KC_HOME,   
  KC_UP,     KC_LSFT,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,         KC_UP,                KC_END,
  KC_DOWN,   KC_LCTL,   KC_LGUI, KC_LALT,         KC_SPC,              LSFT_T(KC_SPC),         KC_RCTL,  KC_RGUI,  KC_RALT,  KC_LEFT,         KC_DOWN,              KC_RIGHT ,
                                                     LCTL_T(KC_F13),  MO(_FN),
                                               KC_NO, KC_WH_L,KC_BTN3,KC_WH_R,KC_NO
    ),
[_L3] = LAYOUT_93_ansi(
             KC_GRV,    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,    MO(_SYS),            
  KC_VOLU,   KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,     KC_9,     KC_0 ,    KC_MINS,  KC_EQUAL,  KC_BSLS, KC_DEL,  KC_PGUP, 
  KC_VOLD,   KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,       KC_BSPC,      KC_PGDN,   
  KC_MUTE,   KC_LCTL,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,     KC_L,     KC_SCLN,  KC_QUOT,         KC_ENT,               KC_HOME,   
  KC_UP,     KC_LSFT,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,         KC_UP,                KC_END,
  KC_DOWN,   KC_LCTL,   KC_LGUI, KC_LALT,         KC_SPC,              LSFT_T(KC_SPC),         KC_RCTL,  KC_RGUI,  KC_RALT,  KC_LEFT,         KC_DOWN,      KC_RIGHT ,
                                                     LCTL_T(KC_F13), MO(_FN),
                                               KC_NO, KC_WH_L,KC_BTN3,KC_WH_R,KC_NO
    ),
[_L4] = LAYOUT_93_ansi(
             KC_GRV,    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,    MO(_SYS),            
  KC_VOLU,   KC_ESC,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,     KC_9,     KC_0 ,    KC_MINS,  KC_EQUAL,  KC_BSLS, KC_DEL,  KC_PGUP, 
  KC_VOLD,   KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,       KC_BSPC,      KC_PGDN,   
  KC_MUTE,   KC_LCTL,   KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,     KC_L,     KC_SCLN,  KC_QUOT,         KC_ENT,               KC_HOME,   
  KC_UP,     KC_LSFT,   KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,         KC_UP,                KC_END,
  KC_DOWN,   KC_LCTL,   KC_LGUI, KC_LALT,         KC_SPC,              LSFT_T(KC_SPC),          KC_RCTL,  KC_RGUI,  KC_RALT,  KC_LEFT,      KC_DOWN,         KC_RIGHT ,
                                                     LCTL_T(KC_F13),  MO(_FN),
                                               KC_NO, KC_WH_L,KC_BTN3,KC_WH_R,KC_NO
    ),
[_L5] = LAYOUT_93_ansi(
           KC_NO,   KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,     KC_NO,    KC_NO,  KC_NO,  _______,            
  KC_NO,   KC_NO,   KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,     KC_NO ,   KC_NO,  KC_NO,  KC_NO, KC_NO,  KC_NO, 
  KC_NO,   KC_NO,   KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,     KC_NO,    KC_NO,  KC_NO,  KC_NO,         KC_NO,   
  KC_NO,   KC_NO,   KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,     KC_NO,    KC_NO,  KC_NO,                 KC_NO,   
  KC_NO,   KC_NO,   KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,     KC_NO,    KC_NO,  KC_NO,                 KC_NO,
  KC_NO,   KC_NO,   KC_NO,    KC_NO,    KC_NO,              KC_NO,           KC_NO,       KC_NO,     KC_NO,     KC_NO,        KC_NO ,                KC_NO ,
                                                     KC_NO,  KC_NO,
                                               KC_NO, KC_NO,KC_NO,KC_NO,KC_NO
     ),
[_L6] = LAYOUT_93_ansi(
           KC_NO,   KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,     KC_NO,    KC_NO,  KC_NO,  _______,            
  KC_NO,   KC_NO,   KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,     KC_NO ,   KC_NO,  KC_NO,  KC_NO, KC_NO,  KC_NO, 
  KC_NO,   KC_NO,   KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,     KC_NO,    KC_NO,  KC_NO,  KC_NO,         KC_NO,   
  KC_NO,   KC_NO,   KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,     KC_NO,    KC_NO,  KC_NO,                 KC_NO,   
  KC_NO,   KC_NO,   KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,     KC_NO,    KC_NO,  KC_NO,                 KC_NO,
  KC_NO,   KC_NO,   KC_NO,    KC_NO,    KC_NO,              KC_NO,           KC_NO,       KC_NO,     KC_NO,     KC_NO,        KC_NO ,                KC_NO ,
                                                     KC_NO,  KC_NO,
                                               KC_NO, KC_NO,KC_NO,KC_NO,KC_NO
     ),
[_L7] = LAYOUT_93_ansi(
           KC_NO,   KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,     KC_NO,    KC_NO,  KC_NO,  _______,            
  KC_NO,   KC_NO,   KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,     KC_NO ,   KC_NO,  KC_NO,  KC_NO, KC_NO,  KC_NO, 
  KC_NO,   KC_NO,   KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,     KC_NO,    KC_NO,  KC_NO,  KC_NO,         KC_NO,   
  KC_NO,   KC_NO,   KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,     KC_NO,    KC_NO,  KC_NO,                 KC_NO,   
  KC_NO,   KC_NO,   KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,     KC_NO,    KC_NO,  KC_NO,                 KC_NO,
  KC_NO,   KC_NO,   KC_NO,    KC_NO,    KC_NO,              KC_NO,           KC_NO,       KC_NO,     KC_NO,     KC_NO,        KC_NO ,                KC_NO ,
                                                     KC_NO,  KC_NO,
                                               KC_NO, KC_NO,KC_NO,KC_NO,KC_NO
     ),
[_L8] = LAYOUT_93_ansi(
           KC_NO,   KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,     KC_NO,    KC_NO,  KC_NO,  _______,            
  KC_NO,   KC_NO,   KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,     KC_NO ,   KC_NO,  KC_NO,  KC_NO, KC_NO,  KC_NO, 
  KC_NO,   KC_NO,   KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,     KC_NO,    KC_NO,  KC_NO,  KC_NO,         KC_NO,   
  KC_NO,   KC_NO,   KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,     KC_NO,    KC_NO,  KC_NO,                 KC_NO,   
  KC_NO,   KC_NO,   KC_NO,    KC_NO,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,     KC_NO,    KC_NO,  KC_NO,                 KC_NO,
  KC_NO,   KC_NO,   KC_NO,    KC_NO,    KC_NO,              KC_NO,           KC_NO,       KC_NO,     KC_NO,     KC_NO,        KC_NO ,                KC_NO ,
                                                     KC_NO,  KC_NO,
                                               KC_NO, KC_NO,KC_NO,KC_NO,KC_NO
     ),

[_FN] = LAYOUT_93_ansi(
           S(C(KC_F1)),   S(KC_F1), S(KC_F2), S(KC_F3), S(KC_F4), S(KC_F5), S(KC_F6), S(KC_F7), S(KC_F8),  S(KC_F9),  S(KC_F10),S(KC_F11),  S(KC_F12),  MO(_SYS),            
  S(C(KC_F2)),   KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,     KC_NO ,   KC_NO,  KC_NO,  KC_NO, KC_NO,  KC_NO, 
  S(C(KC_F3)),   KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_UP,     KC_NO,     KC_NO,    KC_NO,  KC_NO,  KC_NO,         KC_NO,   
  S(C(KC_F4)),   KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_DEL,   KC_LEFT,  KC_DOWN,   KC_RIGHT,  KC_NO,    KC_NO,  KC_NO,                 KC_NO,   
  S(C(KC_F5)),   KC_NO,   KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_HOME,  KC_END,    KC_NO,     KC_NO,    KC_NO,  KC_NO,                 KC_NO,
  S(C(KC_F6)),   KC_NO,   KC_NO, KC_NO,             KC_BSPC,              KC_DEL,                     KC_NO,  KC_NO,  KC_NO,  KC_NO,     KC_NO,          KC_NO ,
                                                           KC_ENT,     _______ ,
                                               KC_NO, KC_VOLD,KC_MUTE,KC_VOLU,KC_NO
    ),
[_SYS] = LAYOUT_93_ansi(
           TO(_BASE), TO(1),  TO(2),    TO(3),    TO(4),    TO(5),    TO(6),    TO(7),    TO(8),     KC_NO,     KC_NO,    KC_NO,  KC_SLEP,  _______,            
  KC_NO,   RGB_TOG, RGB_MOD,  RGB_RMOD, KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,     KC_NO ,   KC_NO,  KC_NO,  KC_NO, KC_NO,  KC_NO, 
  KC_NO,   KC_NO,   RGB_VAI,  RGB_VAD,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,     KC_NO,    KC_NO,  KC_NO,  KC_NO,         KC_NO,   
  KC_NO,   KC_NO,   RGB_SAI,  RGB_SAD,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,     KC_NO,    KC_NO,  KC_NO,                 KC_NO,   
  KC_NO,   KC_NO,   RGB_HUI,  RGB_HUD,  KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,     KC_NO,     KC_NO,    KC_NO,  KC_NO,                 KC_NO,
  QK_BOOT, KC_NO,   KC_NO,    KC_NO,    KC_NO,              KC_NO,           KC_NO,       KC_NO,     KC_NO,     KC_CAPS,        KC_NUM ,                KC_SCRL ,
                                                     KC_NO,  KC_NO,
                                               KC_NO, KC_NO,KC_NO,KC_NO,KC_NO
    )

};

const rgblight_segment_t PROGMEM layer_0[] = RGBLIGHT_LAYER_SEGMENTS(
    {0,   1, HSV_GREEN}
);
const rgblight_segment_t PROGMEM layer_1[] = RGBLIGHT_LAYER_SEGMENTS(
    {1,   1, HSV_GREEN}
);
const rgblight_segment_t PROGMEM layer_2[] = RGBLIGHT_LAYER_SEGMENTS(
    {2,   1, HSV_GREEN}
);
const rgblight_segment_t PROGMEM layer_3[] = RGBLIGHT_LAYER_SEGMENTS(
    {3,   1, HSV_GREEN}
);
const rgblight_segment_t PROGMEM layer_4[] = RGBLIGHT_LAYER_SEGMENTS(
    {4,   1, HSV_GREEN}
);
const rgblight_segment_t PROGMEM layer_5[] = RGBLIGHT_LAYER_SEGMENTS(
    {5,   1, HSV_GREEN}
);
const rgblight_segment_t PROGMEM layer_6[] = RGBLIGHT_LAYER_SEGMENTS(
    {6,   1, HSV_GREEN}
);
const rgblight_segment_t PROGMEM layer_7[] = RGBLIGHT_LAYER_SEGMENTS(
    {7,   1, HSV_GREEN}
);
const rgblight_segment_t PROGMEM layer_8[] = RGBLIGHT_LAYER_SEGMENTS(
    {8,   1, HSV_GREEN}
);
const rgblight_segment_t PROGMEM rgb_caps_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {88, 1, HSV_GREEN}
);
const rgblight_segment_t PROGMEM rgb_numlock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {89, 1, HSV_GREEN}
);
const rgblight_segment_t PROGMEM rgb_scllock_layer[] = RGBLIGHT_LAYER_SEGMENTS(
    {90, 1, HSV_GREEN}
);

const rgblight_segment_t* const PROGMEM rgb_layers[] = RGBLIGHT_LAYERS_LIST(
    layer_0,
    layer_1,
    layer_2,
    layer_3,
    layer_4,
    layer_5,
    layer_6,
    layer_7,
    layer_8,
    rgb_caps_layer,
    rgb_numlock_layer,
    rgb_scllock_layer
);

void keyboard_post_init_user(void) {
    rgblight_layers = rgb_layers;

//    debug_enable = true;
//    debug_matrix = true;
    // debug_keyboard=true;
    // debug_mouse=true;
}

layer_state_t layer_state_set_user(layer_state_t state) {
//    rgblight_set_layer_state(0, layer_state_cmp(state, _BASE));
    rgblight_set_layer_state(1, layer_state_cmp(state, _L1));
    rgblight_set_layer_state(2, layer_state_cmp(state, _L2));
    rgblight_set_layer_state(3, layer_state_cmp(state, _L3));
    rgblight_set_layer_state(4, layer_state_cmp(state, _L4));
    rgblight_set_layer_state(5, layer_state_cmp(state, _L5));
    rgblight_set_layer_state(6, layer_state_cmp(state, _L6));
    rgblight_set_layer_state(7, layer_state_cmp(state, _L7));
    rgblight_set_layer_state(8, layer_state_cmp(state, _L8));
    return state;
}

bool led_update_user(led_t led_state) {
    rgblight_set_layer_state(9, IS_HOST_LED_ON(USB_LED_CAPS_LOCK));
    rgblight_set_layer_state(10, IS_HOST_LED_ON(USB_LED_NUM_LOCK));
    rgblight_set_layer_state(11, IS_HOST_LED_ON(USB_LED_SCROLL_LOCK));

    return true;
}
