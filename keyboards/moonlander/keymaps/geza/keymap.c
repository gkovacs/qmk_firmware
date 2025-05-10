#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  KC_LEFT_ALT = KC_LALT,
  KC_LEFT_SHIFT = KC_LSHIFT,
  KC_RIGHT_SHIFT = KC_RSHIFT,
  KC_LEFT_CTRL = KC_LCTRL,
  KC_RIGHT_CTRL = KC_RCTRL,
  KC_RIGHT_GUI = KC_RGUI,
  KC_PAGE_UP = KC_PGUP,
  KC_PAGE_DOWN = KC_PGDN,
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           MO(3),                                          MO(3),          KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       
    KC_GRAVE,       KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TAB,                                         KC_ENTER,       KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,        
    KC_LEFT_SHIFT,  KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_TAB,                                                                         KC_ENTER,       KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,       
    KC_LEFT_CTRL,   KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RIGHT_SHIFT, 
    KC_RIGHT_CTRL,  KC_UP,          KC_DOWN,        KC_LEFT,        KC_RIGHT,       KC_LEFT_ALT,                                                                                                    TO(1),          KC_UP,          KC_DOWN,        KC_LEFT,        KC_RIGHT,       KC_RIGHT_CTRL,  
    MO(2),          KC_LEFT_CTRL,   KC_RIGHT_GUI,                   KC_F24, KC_BSPC,        KC_SPACE
  ),
  [1] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       
    KC_GRAVE,       KC_Q,           KC_W,           KC_F,           KC_P,           KC_G,           KC_TAB,                                         KC_ENTER,       KC_J,           KC_L,           KC_U,           KC_Y,           KC_SCLN,        KC_BSLS,        
    KC_LEFT_SHIFT,  KC_A,           KC_R,           KC_S,           KC_T,           KC_D,           KC_TAB,                                                                         KC_ENTER,       KC_H,           KC_N,           KC_E,           KC_I,           KC_O,           KC_QUOTE,       
    LM(4,MOD_LCTL), KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_K,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RIGHT_SHIFT, 
    LM(4,MOD_RCTL), KC_UP,          KC_DOWN,        KC_LEFT,        KC_RIGHT,       LM(4,MOD_LALT),                                                                                                 TO(0),          KC_UP,          KC_DOWN,        KC_LEFT,        KC_RIGHT,       LM(4,MOD_RCTL), 
    KC_TRANSPARENT, LM(4,MOD_LCTL), LM(4,MOD_RGUI),                 KC_F24, KC_BSPC,        KC_SPACE
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_LPRN,        KC_RPRN,        KC_UNDS,        
    KC_TILD,        KC_PAGE_UP,     RALT(KC_LEFT),  KC_UP,          RALT(KC_RIGHT), KC_PGDN,        RSFT(KC_TAB),                                   RSFT(KC_ENTER), KC_TRANSPARENT, KC_LCBR,        KC_RCBR,        KC_LBRC,        KC_COLN,        KC_PIPE,        
    KC_TRANSPARENT, KC_HOME,        KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_END,         RSFT(KC_TAB),                                                                   RSFT(KC_ENTER), KC_TRANSPARENT, KC_LPRN,        KC_RPRN,        KC_LBRC,        KC_RBRC,        KC_DQUO,        
    KC_TRANSPARENT, KC_TILD,        KC_PLUS,        KC_UNDS,        KC_EQUAL,       KC_MINUS,                                       KC_TRANSPARENT, KC_TRANSPARENT, KC_LABK,        KC_RABK,        KC_QUES,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    MAGIC_TOGGLE_NKRO,KC_F1,          KC_F2,          KC_F3,          KC_F4,          KC_F5,          KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F6,          KC_F7,          KC_F8,          KC_F9,          KC_F10,         KC_F11,         
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_AUDIO_MUTE,                                  KC_AUDIO_VOL_UP,KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_F12,         
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MEDIA_PLAY_PAUSE,                                                                KC_AUDIO_VOL_DOWN,KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RGB_TOG,        
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, MOON_LED_LEVEL, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       
    KC_GRAVE,       KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,           KC_TAB,                                         KC_ENTER,       KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,        
    KC_LEFT_SHIFT,  KC_A,           KC_S,           KC_D,           KC_F,           KC_G,           KC_TAB,                                                                         KC_ENTER,       KC_H,           KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_QUOTE,       
    KC_TRANSPARENT, KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RIGHT_SHIFT, 
    KC_TRANSPARENT, KC_UP,          KC_DOWN,        KC_LEFT,        KC_RIGHT,       KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_UP,          KC_DOWN,        KC_LEFT,        KC_RIGHT,       KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_BSPC,        KC_SPACE
  ),
};


// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//   switch (keycode) {

//     case RGB_SLD:
//         if (rawhid_state.rgb_control) {
//             return false;
//         }
//         if (record->event.pressed) {
//             rgblight_mode(1);
//         }
//         return false;
//   }
//   return true;
// }

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    // case RGB_SLD:
    //   if (record->event.pressed) {
    //     rgblight_mode(1);
    //   }
    //   return false;
    case KC_F24:
        if (record->event.pressed) {
          if (IS_LAYER_ON(1)) {
          	layer_off(1);
          } else {
          	layer_on(1);
          }
          register_code(KC_LCTRL);
          tap_code(KC_SPACE);
          unregister_code(KC_LCTRL);
        }
        return false;
  }
  return true;
}

layer_state_t layer_state_set_user(layer_state_t state) {

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

