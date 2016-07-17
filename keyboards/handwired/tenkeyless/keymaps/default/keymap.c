#include "tenkeyless.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  /* Layer 0: QWERTY */
  KEYMAP_ANSI(\
        KC_ESC,           KC_F1,   KC_F2,       KC_F3,          KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,       KC_PSCR, KC_SLCK, KC_BRK,  \
        KC_GRV,  KC_1,    KC_2,    KC_3,        KC_4,           KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC,      KC_INS,  KC_HOME, KC_PGUP, \
        KC_TAB,  KC_Q,    KC_W,    KC_E,        KC_R,           KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,      KC_DEL,  KC_END,  KC_PGDN, \
        KC_LCTL, KC_A,    KC_S,    KC_D,        KC_F,           KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT, \
        KC_LSPO,          KC_Z,    KC_X,        KC_C,           KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSPC,               KC_UP, \
        KC_LCTL, KC_LALT, KC_LGUI,                                       KC_SPC,                             KC_RGUI, KC_RALT, MO(1),   KC_RCTL,      KC_LEFT, KC_DOWN, KC_RGHT),
  /* Layer 1: FN0 */
  KEYMAP_ANSI(\
        KC_TRNS,          KC_TRNS, KC_TRNS,     KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU,       KC_TRNS, KC_TRNS, KC_TRNS, \
        KC_TRNS,    KC_A,    KC_B,    KC_C,        KC_D,           KC_E,    KC_F, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, \
        KC_TRNS,    KC_7,    KC_8,    KC_9,  KC_KP_PLUS,    KC_KP_MINUS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, \
        KC_CAPS,    KC_4,    KC_5,    KC_6, KC_KP_SLASH, KC_KP_ASTERISK, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, \
        KC_TRNS,    KC_1,    KC_2,    KC_3,        KC_0,         KC_DOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS,                KC_TRNS, \
        KC_TRNS, KC_TRNS,  KC_ENT,                                TG(2),                                     KC_TRNS, KC_TRNS, KC_TRNS, KC_APP,        KC_TRNS, KC_TRNS, KC_TRNS),

  /* Layer 2: Mouse keys */
  // Ref:
  // `KC_MS_U`, `KC_MS_D`, `KC_MS_L`, `KC_MS_R`            for mouse cursor
  // `KC_WH_U`, `KC_WH_D`, `KC_WH_L`, `KC_WH_R`            for mouse wheel
  // `KC_BTN1`, `KC_BTN2`, `KC_BTN3`, `KC_BTN4`, `KC_BTN5` for mouse buttons
  KEYMAP_ANSI(\
        KC_TRNS,           KC_TRNS, KC_TRNS,     KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, \
        KC_TRNS, KC_BTN3,  KC_BTN4, KC_BTN5,     KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, \
        KC_TRNS, KC_BTN1,  KC_MS_U, KC_BTN2,     KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, \
        KC_TRNS, KC_MS_L,  KC_MS_D, KC_MS_R,     KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, \
        KC_TRNS, KC_WH_L,  KC_WH_U, KC_WH_R,     KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS,                KC_TRNS, \
        KC_TRNS, KC_TRNS,  KC_WH_D,                              KC_TRNS,                                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS)

  /* unmodified layer template
  KEYMAP_ANSI(\
       KC_TRNS,           KC_TRNS, KC_TRNS,     KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, \
       KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,     KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, \
       KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,     KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, \
       KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,     KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, \
       KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,     KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS,                KC_TRNS, \
       KC_TRNS, KC_TRNS,  KC_TRNS,                              KC_TRNS,                                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS)
  */
};



const uint16_t PROGMEM fn_actions[] = {
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
  return MACRO_NONE;
};
