#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"
#include "keymap_steno.h"


#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)

enum custom_keycodes {
  RGB_SLD = EZ_SAFE_RANGE,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           MO(4),                                          TG(2),          KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,
    KC_GRAVE,       KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TAB,                                         KC_ENTER,       KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLASH,
    KC_LSHIFT,      KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCOLON,      KC_QUOTE,
    KC_LGUI,        KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           RSFT(KC_TAB),                                   KC_ENTER,       KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RSHIFT,
    KC_RALT,        KC_UP,          KC_DOWN,        KC_LEFT,        KC_RIGHT,                                                                                                       KC_UP,          KC_DOWN,        KC_LEFT,        KC_RIGHT,       KC_RCTRL,
                                                                                                    KC_PGUP,        KC_PGDOWN,      TO(1),          KC_EQUAL,
                                                                                                                    KC_LALT,        KC_RALT,
                                                                                    MO(3),          KC_LCTRL,       KC_RGUI,        LALT(KC_SPACE), KC_BSPACE,      KC_SPACE
  ),
  [1] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           MO(4),                                          TG(2),          KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,
    KC_GRAVE,       KC_Q,           KC_W,           KC_F,           KC_P,           KC_G,           KC_TAB,                                         KC_ENTER,       KC_J,           KC_L,           KC_U,           KC_Y,           KC_SCOLON,      KC_BSLASH,
    KC_LSHIFT,      KC_A,           KC_R,           KC_S,           KC_T,           KC_D,                                                                           KC_H,           KC_N,           KC_E,           KC_I,           KC_O,           KC_QUOTE,
    LM(5,MOD_LGUI), KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           RSFT(KC_TAB),                                   KC_ENTER,       KC_K,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RSHIFT,
    LM(5,MOD_RALT), KC_UP,          KC_UP,          KC_LEFT,        KC_RIGHT,                                                                                                       KC_UP,          KC_DOWN,        KC_LEFT,        KC_RIGHT,       LM(5,MOD_RCTL),
                                                                                                    KC_PGUP,        KC_PGDOWN,      TO(0),          KC_EQUAL,
                                                                                                                    LM(5, MOD_LALT), LM(5, MOD_RALT),
                                                                                    MO(3),          LM(5,MOD_LCTL), LM(5, MOD_RGUI), LALT(KC_SPACE), KC_BSPACE,     KC_SPACE
  ),
  [2] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,
    KC_GRAVE,       STN_N1,         STN_N2,         STN_N3,         STN_N4,         STN_N5,         KC_TAB,                                         KC_ENTER,       STN_N6,         STN_N7,         STN_N8,         STN_N9,         STN_NA,         STN_NB,
    KC_LSHIFT,      STN_S1,         STN_TL,         STN_PL,         STN_HL,         STN_ST1,                                                                        STN_ST3,        STN_FR,         STN_PR,         STN_LR,         STN_TR,         STN_DR,
    KC_LGUI,        STN_S2,         STN_KL,         STN_WL,         STN_RL,         STN_ST2,        RSFT(KC_TAB),                                   KC_ENTER,       STN_ST4,        STN_RR,         STN_BR,         STN_GR,         STN_SR,         STN_ZR,
    KC_RALT,        KC_UP,          KC_DOWN,        KC_LEFT,        KC_RIGHT,                                                                                                       KC_UP,          KC_DOWN,        KC_LEFT,        KC_RIGHT,       KC_RCTRL,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, QK_STENO_BOLT, QK_STENO_GEMINI,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    STN_A,          STN_O,          KC_TRANSPARENT, KC_TRANSPARENT, STN_E,         STN_U
  ),
  [3] = LAYOUT_ergodox_pretty(
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_LPRN,        KC_RPRN,        KC_UNDS,
    KC_TILD,        KC_TRANSPARENT, KC_TRANSPARENT, KC_UP,          KC_TRANSPARENT, KC_TRANSPARENT, RGUI(KC_TAB),                                   KC_TRANSPARENT, KC_TRANSPARENT, KC_LCBR,        KC_RCBR,        KC_TRANSPARENT, RSFT(KC_P),     KC_PIPE,
    KC_TRANSPARENT, KC_HOME,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_END,                                                                         KC_TRANSPARENT, KC_LPRN,        KC_RPRN,        KC_LBRACKET,    KC_RBRACKET,    KC_DQUO,
    KC_TRANSPARENT, KC_TILD,        KC_PLUS,        KC_UNDS,        KC_EQUAL,       KC_MINUS,       RSFT(RGUI(KC_TAB)),                             KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LABK,        KC_RABK,        KC_QUES,        KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RALT(RCTL(KC_MINUS)), RCTL(KC_GRAVE), RALT(RCTL(KC_EQUAL))
  ),
  [4] = LAYOUT_ergodox_pretty(
    MAGIC_TOGGLE_NKRO,KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_MUTE,                                  KC_AUDIO_VOL_UP,KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F12,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PLAY_PAUSE,                                KC_AUDIO_VOL_DOWN,KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_ergodox_pretty(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,
    KC_GRAVE,       KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TAB,                                         KC_ENTER,       KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLASH,
    KC_LSHIFT,      KC_A,           KC_S,           KC_D,           KC_F,           KC_G,                                                                           KC_H,           KC_J,           KC_K,           KC_L,           KC_SCOLON,      KC_QUOTE,
    KC_TRANSPARENT, KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,           RSFT(KC_TAB),                                   KC_ENTER,       KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RSHIFT,
    KC_TRANSPARENT, KC_UP,          KC_DOWN,        KC_LEFT,        KC_RIGHT,                                                                                                       KC_UP,          KC_DOWN,        KC_LEFT,        KC_RIGHT,       KC_TRANSPARENT,
                                                                                                    KC_PGUP,        KC_PGDOWN,      KC_TRANSPARENT, KC_EQUAL,
                                                                                                                    KC_TRANSPARENT, KC_TRANSPARENT,
                                                                                    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_BSPACE,      KC_SPACE
  ),
};



bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}

uint32_t layer_state_set_user(uint32_t state) {

  // uint8_t layer = biton32(state);

  // ergodox_board_led_off();
  // ergodox_right_led_1_off();
  // ergodox_right_led_2_off();
  // ergodox_right_led_3_off();
  // switch (layer) {
  //   case 1:
  //     ergodox_right_led_1_on();
  //     break;
  //   case 2:
  //     ergodox_right_led_2_on();
  //     break;
  //   case 3:
  //     ergodox_right_led_3_on();
  //     break;
  //   case 4:
  //     ergodox_right_led_1_on();
  //     ergodox_right_led_2_on();
  //     break;
  //   case 5:
  //     ergodox_right_led_1_on();
  //     ergodox_right_led_3_on();
  //     break;
  //   case 6:
  //     ergodox_right_led_2_on();
  //     ergodox_right_led_3_on();
  //     break;
  //   case 7:
  //     ergodox_right_led_1_on();
  //     ergodox_right_led_2_on();
  //     ergodox_right_led_3_on();
  //     break;
  //   default:
  //     break;
  // }
  return state;
};

void matrix_init_user() {
  steno_set_mode(STENO_MODE_GEMINI); // or STENO_MODE_BOLT
}


