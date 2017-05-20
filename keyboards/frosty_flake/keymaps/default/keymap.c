#include "frosty_flake.h"

enum macro_id {
  M_NOM,
  M_EML,
  M_GHB,
  M_PIV,
  M_PNM,
  M_PSG,
  M_HTP,
  M_SSL,
  M_VER
};

#define __CPLK_ MT(MOD_LCTL, KC_BSPC)
#define __ENT__ MT(MOD_LCTL, KC_ENT)
#define __TAB__ MT(MOD_LALT, KC_TAB)
#define __BSLS_ MT(MOD_LALT, KC_BSLS)
#define __GRV__ MT(MOD_LGUI, KC_GRV)
#define __BSP__ MT(MOD_LGUI, KC_BSPC)
#define __SPC__ MT(MOD_LCTL, KC_SPC)

// Numpad short cuts
#define N_PLUS KC_KP_PLUS
#define N_SLSH KC_KP_SLASH
#define N_MNUS KC_KP_MINUS
#define N_ASTK KC_KP_ASTERISK

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = KEYMAP(\
KC_ESC,   KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9, KC_F10, KC_F11, KC_F12,           KC_PSCR,KC_SLCK,KC_PAUS, \
  KC_GRV,    KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,KC_MINS, KC_EQL,KC_BSPC,   KC_INS,KC_HOME,KC_PGUP,    KC_NLCK,KC_PSLS,KC_PAST,KC_PMNS, \
  KC_TAB,    KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,KC_LBRC,KC_RBRC,KC_BSLS,   KC_DEL, KC_END,KC_PGDN,    KC_P7,  KC_P8,  KC_P9,KC_PPLS, \
  __CPLK_,   KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,KC_SCLN,KC_QUOT,         __ENT__,                              KC_P4,  KC_P5,  KC_P6, \
  KC_LSFT,KC_NUBS,   KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,KC_COMM, KC_DOT,KC_SLSH,        KC_RSFT,            KC_UP,            KC_P1,  KC_P2,  KC_P3,KC_PENT, \
  KC_LCTL,KC_LALT,KC_LGUI,                   KC_SPC,                                KC_RGUI,KC_RALT,MO(1),KC_RCTL,   KC_LEFT,KC_DOWN,KC_RGHT,   KC_P0,KC_PDOT),


[1] = KEYMAP(\
M(M_VER),M(M_NOM),M(M_EML),M(M_GHB),M(M_HTP),M(M_SSL),KC_TRNS, KC_MPRV, KC_MPLY, KC_MNXT, KC_MUTE, KC_VOLD, KC_VOLU,                M(M_PNM),M(M_PIV), KC_TRNS, \
  KC_TRNS,    KC_A,    KC_B,    KC_C,    KC_D,    KC_E,    KC_F, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,    KC_NLCK,KC_PSLS,KC_PAST,KC_PMNS, \
  KC_TRNS,    KC_7,    KC_8,    KC_9,  N_PLUS,  N_MNUS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,       KC_TRNS, KC_TRNS, KC_TRNS,    KC_P7,  KC_P8,  KC_P9,KC_PPLS, \
  KC_CAPS,    KC_4,    KC_5,    KC_6,  N_SLSH,  N_ASTK, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,                                     KC_P4,  KC_P5,  KC_P6,      \
  KC_TRNS, KC_TRNS,    KC_1,    KC_2,    KC_3,    KC_0,  KC_DOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,                KC_TRNS,             KC_P1,  KC_P2,  KC_P3,KC_PENT, \
  KC_TRNS, KC_TRNS,  KC_ENT,                     KC_TRNS,                                   KC_TRNS, KC_TRNS, KC_TRNS, KC_APP,        KC_TRNS, KC_TRNS, KC_TRNS,    KC_P0,KC_PDOT),
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
      SEND_STRING("@gmail.com");
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
  case M_PSG:
    if (record->event.pressed) {
      SEND_STRING("pivotal-sg");
    }
    break;
  case M_PIV:
    if (record->event.pressed) {
      SEND_STRING("pivotal.io");
    }
    break;
  case M_PNM:
    if (record->event.pressed) {
      SEND_STRING("jmilkins");
    }
    break;
  }

  return MACRO_NONE;
};
