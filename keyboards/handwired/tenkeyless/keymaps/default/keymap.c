#include "tenkeyless.h"

#define TRNS KC_TRNS

static const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: QWERTY */
  [0] = KEYMAP_ANSI(\
        KC_ESC,           KC_F1,   KC_F2,       KC_F3,          KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,       KC_PSCR, KC_SLCK, KC_BRK,  \
        KC_GRV,  KC_1,    KC_2,    KC_3,        KC_4,           KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,      KC_INS,  KC_HOME, KC_PGUP, \
        KC_TAB,  KC_Q,    KC_W,    KC_E,        KC_R,           KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,      KC_DEL,  KC_END,  KC_PGDN, \
        KC_LCTL, KC_A,    KC_S,    KC_D,        KC_F,           KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT, \
        KC_LSFT,          KC_Z,    KC_X,        KC_C,           KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT,               KC_UP, \
        KC_LCTL, KC_LALT, KC_LGUI,                                       KC_SPC,                             KC_RGUI, KC_RALT, KC_FN0,  KC_RCTL,      KC_LEFT, KC_DOWN, KC_RGHT),
    /* 0: FN0 Layer */
  [1] = KEYMAP_ANSI(\
        KC_TRNS,          KC_TRNS, KC_TRNS,     KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU,       KC_TRNS, KC_TRNS, KC_TRNS, \
        KC_TRNS,    KC_A,    KC_B,    KC_C,        KC_D,           KC_E,    KC_F, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, \
        KC_TRNS,    KC_7,    KC_8,    KC_9,  KC_KP_PLUS,    KC_KP_MINUS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, \
        KC_CAPS,    KC_4,    KC_5,    KC_6, KC_KP_SLASH, KC_KP_ASTERISK, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, \
        KC_TRNS,    KC_1,    KC_2,    KC_3,        KC_0,         KC_DOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS,                KC_TRNS, \
        KC_TRNS, KC_TRNS,  KC_ENT,                              KC_TRNS,                                     KC_TRNS, KC_TRNS, KC_TRNS, KC_APP,        KC_TRNS, KC_TRNS, KC_TRNS)
};

const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1)
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
  return MACRO_NONE;
};
