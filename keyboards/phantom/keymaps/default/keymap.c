#include "phantom.h"

enum macro_id {
  M_NOM,
  M_EML,
  M_GHB,
  M_HTP,
  M_SSL,
  M_VER
};

// Used for SHIFT_ESC
#define MODS_CTRL_MASK  (MOD_BIT(KC_LSHIFT)|MOD_BIT(KC_RSHIFT))

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
/* #define BASE_LAYER 0 */
/* #define FN1_LAYER 1 */
/* #define COLEMAK_LAYER 2 */
/* #define DVORAK_LAYER 3 */
/* #define WORKMAN_LAYER 4 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* KEYMAP( */
  /*        KC_ESC,             KC_F1,    KC_F2,   KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_PSCR,    KC_SLCK,  KC_PAUS, \ */
  /*        KC_GRV,   KC_1,     KC_2,     KC_3,    KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  KC_INS,     KC_HOME,  KC_PGUP, \ */
  /*        KC_TAB,   KC_Q,     KC_W,     KC_E,    KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,  KC_DELETE,  KC_END,   KC_PGDN, \ */
  /*        KC_LCTL,  KC_A,     KC_S,     KC_D,    KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_ENT, \ */
  /*        KC_LSFT,  KC_Z,     KC_X,     KC_C,    KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,                                  KC_UP, \ */
  /*        KC_LCTL,  KC_LALT,  KC_LGUI,                     KC_SPC,                                 KC_RGUI,  KC_RALT,  MO(FN1_LAYER), KC_RCTL,       KC_LEFT,    KC_DOWN,  KC_RGHT), */
  /* Layer 0: QWERTY */
  KEYMAP(\
              KC_ESC,           KC_F1,    KC_F2,    KC_F3,   KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_PSCR,    KC_SLCK,  KC_BRK,  \
              KC_GRV,  KC_1,    KC_2,     KC_3,     KC_4,    KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  KC_INS,     KC_HOME,  KC_PGUP, \
              KC_TAB,  KC_Q,    KC_W,     KC_E,     KC_R,    KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,  KC_BSLS,  KC_DEL,     KC_END,   KC_PGDN, \
              KC_LCTL, KC_A,    KC_S,     KC_D,     KC_F,    KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_ENT, \
              KC_LSFT, KC_Z,    KC_X,     KC_C,     KC_V,    KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,                                  KC_UP, \
              KC_LCTL, KC_LALT, KC_LGUI,                     KC_SPC,                                 KC_RGUI,  KC_RALT,  MO(1),    KC_RCTL,            KC_LEFT,    KC_DOWN,  KC_RGHT),

  /* KEYMAP( */
  /*        KC_TRNS,          KC_F16,  KC_F17,  KC_F18,      KC_F19,         KC_F20,  KC_F21,  KC_F22,  KC_F23,  KC_F24,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \ */
  /*        KC_TRNS, KC_A,    KC_B,    KC_C,    KC_D,        KC_E,           KC_F,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, RESET,   KC_TRNS, KC_TRNS, KC_TRNS, \ */
  /*        KC_TRNS, KC_KP_7, KC_KP_8, KC_KP_9, KC_KP_PLUS,  KC_KP_MINUS,    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, \ */
  /*        KC_TRNS, KC_KP_4, KC_KP_5, KC_KP_6, KC_KP_SLASH, KC_KP_ASTERISK, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_UP,   KC_TRNS, \ */
  /*        KC_TRNS, KC_KP_1, KC_KP_2, KC_KP_2, KC_KP_0,     KC_KP_DOT,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                            KC_TRNS, \ */
  /*        KC_TRNS, KC_TRNS, KC_KP_ENTER,                                   KC_TRNS,                            KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS), */
  /* Layer 1: FN0 */
  KEYMAP(\
              M(M_VER),        M(M_NOM), M(M_EML),   M(M_GHB),       M(M_HTP),M(M_SSL), KC_TRNS, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU,       KC_TRNS, KC_TRNS, RESET, \
              KC_TRNS,    KC_A,    KC_B,    KC_C,        KC_D,           KC_E,    KC_F, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, \
              KC_TRNS,    KC_7,    KC_8,    KC_9,  KC_KP_PLUS,    KC_KP_MINUS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, \
              KC_CAPS,    KC_4,    KC_5,    KC_6, KC_KP_SLASH, KC_KP_ASTERISK, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, \
              KC_TRNS,    KC_1,    KC_2,    KC_3,        KC_0,         KC_DOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                                  KC_TRNS, \
              KC_TRNS, KC_TRNS,  KC_ENT,                                TG(2),                                     KC_TRNS, KC_TRNS, KC_TRNS, KC_APP,        KC_TRNS, KC_TRNS, KC_TRNS),

  /* Layer 2: Mouse keys */
  // Ref:
  // `KC_MS_U`, `KC_MS_D`, `KC_MS_L`, `KC_MS_R`            for mouse cursor
  // `KC_WH_U`, `KC_WH_D`, `KC_WH_L`, `KC_WH_R`            for mouse wheel
  // `KC_BTN1`, `KC_BTN2`, `KC_BTN3`, `KC_BTN4`, `KC_BTN5` for mouse buttons
  KEYMAP(\
              KC_TRNS,           KC_TRNS, KC_TRNS,     KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, \
              KC_TRNS, KC_BTN3,  KC_BTN4, KC_BTN5,     KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, \
              KC_TRNS, KC_BTN1,  KC_MS_U, KC_BTN2,     KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, \
              KC_TRNS, KC_MS_L,  KC_MS_D, KC_MS_R,     KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, \
              KC_TRNS, KC_WH_L,  KC_WH_U, KC_WH_R,     KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                                  KC_TRNS, \
              KC_TRNS, KC_TRNS,  KC_WH_D,                              KC_TRNS,                                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS),

  /* unmodified layer template
     KEYMAP(\
              KC_TRNS,           KC_TRNS, KC_TRNS,     KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, \
              KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,     KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, \
              KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,     KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS, \
              KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,     KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, \
              KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,     KC_TRNS,        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                   KC_TRNS,                KC_TRNS, \
              KC_TRNS, KC_TRNS,  KC_TRNS,                              KC_TRNS,                                     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS)
  */

  /* [COLEMAK_LAYER] = */
  /* KEYMAP( */
  /*        KC_ESC,             KC_F1,    KC_F2,   KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_PSCR,    KC_SLCK,  KC_PAUS, \ */
  /*        KC_GRV,   KC_1,     KC_2,     KC_3,    KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  KC_INS,     KC_HOME,  KC_PGUP, \ */
  /*        KC_TAB,   KC_Q,     KC_W,     KC_F,    KC_P,     KC_G,     KC_J,     KC_L,     KC_U,     KC_Y,     KC_SCLN,  KC_LBRC,  KC_RBRC,  KC_BSLS,  KC_DELETE,  KC_END,   KC_PGDN, \ */
  /*        KC_BSPC,  KC_A,     KC_R,     KC_S,    KC_T,     KC_D,     KC_H,     KC_N,     KC_E,     KC_I,     KC_O,     KC_QUOT,  KC_ENT, \ */
  /*        KC_LSFT,  KC_Z,     KC_X,     KC_C,    KC_V,     KC_B,     KC_K,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,                                  KC_UP, \ */
  /*        KC_LCTL,  KC_LALT,  KC_LGUI,                     KC_SPC,                                 KC_RGUI,  KC_RALT,  MO(FN1_LAYER), KC_RCTL,       KC_LEFT,    KC_DOWN,  KC_RGHT), */

  /* [DVORAK_LAYER] = */
  /* KEYMAP( */
  /*        KC_ESC,             KC_F1,    KC_F2,   KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_PSCR,    KC_SLCK,  KC_PAUS, \ */
  /*        KC_GRV,   KC_1,     KC_2,     KC_3,    KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_LBRC,  KC_RBRC,  KC_BSPC,  KC_INS,     KC_HOME,  KC_PGUP, \ */
  /*        KC_TAB,   KC_QUOT,  KC_COMM,  KC_DOT,  KC_P,     KC_Y,     KC_F,     KC_G,     KC_C,     KC_R,     KC_L,     KC_SLSH,  KC_EQL,   KC_BSLS,  KC_DELETE,  KC_END,   KC_PGDN, \ */
  /*        KC_LCTL,  KC_A,     KC_O,     KC_E,    KC_U,     KC_I,     KC_D,     KC_H,     KC_T,     KC_N,     KC_S,     KC_MINS,  KC_ENT, \ */
  /*        KC_LSFT,  KC_SCLN,  KC_Q,     KC_J,    KC_K,     KC_X,     KC_B,     KC_M,     KC_W,     KC_V,     KC_Z,     KC_RSFT,                                  KC_UP, \ */
  /*        KC_LCTL,  KC_LALT,  KC_LGUI,                     KC_SPC,                                 KC_RGUI,  KC_RALT,  MO(FN1_LAYER), KC_RCTL,       KC_LEFT,    KC_DOWN,  KC_RGHT), */

  /* [WORKMAN_LAYER] = */
  /* KEYMAP( */
  /*        KC_ESC,             KC_F1,    KC_F2,   KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   KC_PSCR,    KC_SLCK,  KC_PAUS, \ */
  /*        KC_GRV,   KC_1,     KC_2,     KC_3,    KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,  KC_INS,     KC_HOME,  KC_PGUP, \ */
  /*        KC_TAB,   KC_Q,     KC_D,     KC_R,    KC_W,     KC_B,     KC_J,     KC_F,     KC_U,     KC_P,     KC_SCLN,  KC_LBRC,  KC_RBRC,  KC_BSLS,  KC_DELETE,  KC_END,   KC_PGDN, \ */
  /*        KC_LCTL,  KC_A,     KC_S,     KC_H,    KC_T,     KC_G,     KC_Y,     KC_N,     KC_E,     KC_O,     KC_I,     KC_QUOT,  KC_ENT, \ */
  /*        KC_LSFT,  KC_Z,     KC_X,     KC_M,    KC_C,     KC_V,     KC_K,     KC_L,     KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT,                                  KC_UP, \ */
  /*        KC_LCTL,  KC_LALT,  KC_LGUI,                     KC_SPC,                                 KC_RGUI,  KC_RALT,  MO(FN1_LAYER), KC_RCTL,       KC_LEFT,    KC_DOWN,  KC_RGHT), */


};

const uint16_t PROGMEM fn_actions[] = {
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {

  switch (id) {
  case M_NOM:
    if (record->event.pressed) {
      SEND_STRING("jasonm23");
    }
    break;
  case M_EML:
    if (record->event.pressed) {
      SEND_STRING("jasonm23@gmail.com");
    }
    break;
  case M_GHB:
    if (record->event.pressed) {
      SEND_STRING("github.com");
    }
    break;
  case M_HTP:
    if (record->event.pressed) {
      SEND_STRING("http://");
    }
    break;
  case M_SSL:
    if (record->event.pressed) {
      SEND_STRING("https://");
    }
    break;
  case M_VER:
    if (record->event.pressed) {
      SEND_STRING(QMK_KEYBOARD "/" QMK_KEYMAP "@" QMK_VERSION "@" QMK_BUILDDATE);
    }
    break;

  }
  return MACRO_NONE;
};


/* enum function_id { */
/*   SHIFT_ESC, */
/* }; */

/* const uint16_t PROGMEM fn_actions[] = { */
/*   [0]  = ACTION_FUNCTION(SHIFT_ESC), */
/* }; */

/* void action_function(keyrecord_t *record, uint8_t id, uint8_t opt) { */
/*   static uint8_t shift_esc_shift_mask; */
/*   switch (id) { */
/*   case SHIFT_ESC: */
/*     shift_esc_shift_mask = get_mods()&MODS_CTRL_MASK; */
/*     if (record->event.pressed) { */
/*       if (shift_esc_shift_mask) { */
/*         add_key(KC_GRV); */
/*         send_keyboard_report(); */
/*       } else { */
/*         add_key(KC_ESC); */
/*         send_keyboard_report(); */
/*       } */
/*     } else { */
/*       if (shift_esc_shift_mask) { */
/*         del_key(KC_GRV); */
/*         send_keyboard_report(); */
/*       } else { */
/*         del_key(KC_ESC); */
/*         send_keyboard_report(); */
/*       } */
/*     } */
/*     break; */
/*   } */
/* } */
