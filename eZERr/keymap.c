#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
  ST_MACRO_8,
  ST_MACRO_9,
  ST_MACRO_10,
  ST_MACRO_11,
  ST_MACRO_12,
  ST_MACRO_13,
  ST_MACRO_14,
  ST_MACRO_15,
  ST_MACRO_16,
  ST_MACRO_17,
  ST_MACRO_18,
  ST_MACRO_19,
  ST_MACRO_20,
  ST_MACRO_21,
  ST_MACRO_22,
  ST_MACRO_23,
  ST_MACRO_24,
  ST_MACRO_25,
  ST_MACRO_26,
  ST_MACRO_27,
  ST_MACRO_28,
  ST_MACRO_29,
  ST_MACRO_30,
  ST_MACRO_31,
  ST_MACRO_32,
  ST_MACRO_33,
  ST_MACRO_34,
  ST_MACRO_35,
  ST_MACRO_36,
  ST_MACRO_37,
  ST_MACRO_38,
  ST_MACRO_39,
  ST_MACRO_40,
  ST_MACRO_41,
  ST_MACRO_42,
  ST_MACRO_43,
  ST_MACRO_44,
  ST_MACRO_45,
  ST_MACRO_46,
  ST_MACRO_47,
  ST_MACRO_48,
  ST_MACRO_49,
  ST_MACRO_50,
  ST_MACRO_51,
  ST_MACRO_52,
  ST_MACRO_53,
  ST_MACRO_54,
  ST_MACRO_55,
  ST_MACRO_56,
  ST_MACRO_57,
  ST_MACRO_58,
  ST_MACRO_59,
};



enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    TG(5),          RGB_TOG,        RGB_MODE_FORWARD,RGB_VAD,        RGB_VAI,        ST_MACRO_0,                                     KC_MEDIA_PREV_TRACK,TD(DANCE_0),    KC_MEDIA_STOP,  KC_MEDIA_NEXT_TRACK,TD(DANCE_1),    KC_AUDIO_VOL_UP,
    KC_TRANSPARENT, KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,        
    KC_ESCAPE,      MT(MOD_LSFT, KC_A),MT(MOD_LCTL, KC_S),MT(MOD_LALT, KC_D),MT(MOD_LGUI, KC_F),LT(4,KC_G),                                     LT(4,KC_H),     MT(MOD_RGUI, KC_J),MT(MOD_RALT, KC_K),MT(MOD_RCTL, KC_L),MT(MOD_RSFT, KC_SCLN),KC_QUOTE,       
    OSL(3),         KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       MO(3),          
                                                    LT(1,KC_SPACE), LT(2,KC_TAB),                                   KC_ENTER,       LT(1,KC_BSPC)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TILD,        KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,                                        KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_LPRN,        KC_RPRN,        KC_UNDS,        
    KC_GRAVE,       KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_MINUS,       
    KC_TRANSPARENT, KC_TRANSPARENT, TD(DANCE_2),    TD(DANCE_3),    TD(DANCE_4),    KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_COMMA,       KC_DOT,         KC_PLUS,        KC_EQUAL,       
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    LCTL(KC_5),     LCTL(KC_4),     LCTL(KC_3),     LCTL(KC_2),     LCTL(KC_1),     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, LALT(KC_LEFT),  LGUI(KC_LEFT),  RGUI(KC_RIGHT), RALT(KC_RIGHT), KC_HOME,                                        KC_END,         LGUI(KC_PAGE_UP),LGUI(LSFT(KC_LEFT)),KC_UP,          LGUI(KC_PGDN),  KC_TRANSPARENT, 
    KC_TRANSPARENT, LCTL(LSFT(KC_TAB)),KC_PGDN,        KC_PAGE_UP,     LCTL(KC_TAB),   KC_TRANSPARENT,                                 KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_MS_ACCEL1,   KC_MS_ACCEL2,   
    KC_TRANSPARENT, LCTL(KC_LEFT),  LGUI(KC_DOWN),  LGUI(KC_UP),    RCTL(KC_RIGHT), KC_TRANSPARENT,                                 KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_UP,       KC_MS_RIGHT,    KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_MS_BTN1,     KC_MS_BTN2
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 ST_MACRO_19,    ST_MACRO_20,    ST_MACRO_21,    ST_MACRO_22,    ST_MACRO_23,    KC_TRANSPARENT, 
    ST_MACRO_1,     ST_MACRO_2,     ST_MACRO_3,     ST_MACRO_4,     ST_MACRO_5,     ST_MACRO_6,                                     ST_MACRO_24,    ST_MACRO_25,    ST_MACRO_26,    ST_MACRO_27,    ST_MACRO_28,    KC_TRANSPARENT, 
    ST_MACRO_7,     ST_MACRO_8,     ST_MACRO_9,     ST_MACRO_10,    ST_MACRO_11,    ST_MACRO_12,                                    ST_MACRO_29,    ST_MACRO_30,    ST_MACRO_31,    ST_MACRO_32,    KC_TRANSPARENT, KC_TRANSPARENT, 
    ST_MACRO_13,    ST_MACRO_14,    ST_MACRO_15,    ST_MACRO_16,    ST_MACRO_17,    ST_MACRO_18,                                    ST_MACRO_33,    ST_MACRO_34,    ST_MACRO_35,    ST_MACRO_36,    KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_37,    ST_MACRO_38,    ST_MACRO_39,    KC_TRANSPARENT,                                 KC_TRANSPARENT, ST_MACRO_50,    ST_MACRO_51,    ST_MACRO_52,    KC_TRANSPARENT, KC_TRANSPARENT, 
    ST_MACRO_40,    ST_MACRO_41,    KC_TRANSPARENT, ST_MACRO_42,    ST_MACRO_43,    KC_TRANSPARENT,                                 KC_TRANSPARENT, ST_MACRO_53,    ST_MACRO_54,    ST_MACRO_55,    KC_TRANSPARENT, KC_TRANSPARENT, 
    ST_MACRO_44,    ST_MACRO_45,    ST_MACRO_46,    ST_MACRO_47,    ST_MACRO_48,    KC_TRANSPARENT,                                 KC_TRANSPARENT, ST_MACRO_56,    ST_MACRO_57,    ST_MACRO_58,    KC_TRANSPARENT, ST_MACRO_59,    
    ST_MACRO_49,    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_A,           KC_S,           KC_D,           KC_F,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_J,           KC_K,           KC_L,           KC_SCLN,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
};



extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {80,243,245}, {0,228,225}, {80,243,245}, {80,243,245}, {80,243,245}, {43,187,207}, {80,243,245}, {80,243,245}, {80,243,245}, {80,243,245}, {80,243,245}, {80,243,245}, {80,243,245}, {0,0,254}, {0,0,254}, {0,0,254}, {0,0,254}, {80,243,245}, {0,0,100}, {80,243,245}, {80,243,245}, {80,243,245}, {80,243,245}, {80,243,245}, {42,217,219}, {80,243,245}, {0,255,255}, {160,255,255}, {69,197,196}, {0,255,255}, {1,187,207}, {1,187,207}, {80,243,245}, {80,243,245}, {80,243,245}, {80,243,245}, {80,243,245}, {80,243,245}, {80,243,245}, {0,0,254}, {0,0,254}, {0,0,254}, {0,0,254}, {80,243,245}, {80,243,245}, {80,243,245}, {80,243,245}, {80,243,245}, {80,243,245}, {80,243,245}, {163,255,247}, {42,217,219} },

    [1] = { {42,217,219}, {42,217,219}, {42,217,219}, {42,217,219}, {42,217,219}, {42,217,219}, {176,255,247}, {176,255,247}, {176,255,247}, {176,255,247}, {176,255,247}, {176,255,247}, {176,255,247}, {69,255,255}, {69,255,255}, {69,197,196}, {69,255,255}, {69,255,255}, {42,217,219}, {42,217,219}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {42,217,219}, {42,217,219}, {42,217,219}, {42,217,219}, {42,217,219}, {42,217,219}, {42,217,219}, {42,217,219}, {176,255,247}, {176,255,247}, {176,255,247}, {0,255,255}, {0,255,255}, {176,255,247}, {69,255,255}, {69,255,255}, {69,197,196}, {69,255,255}, {69,255,255}, {176,255,247}, {42,217,219}, {42,217,219}, {42,217,219}, {42,217,219}, {176,255,247}, {176,255,247}, {42,217,219}, {42,217,219} },

    [2] = { {80,243,245}, {80,243,245}, {55,218,204}, {80,243,245}, {80,243,245}, {80,243,245}, {80,243,245}, {15,199,196}, {15,199,196}, {15,199,196}, {15,199,196}, {15,199,196}, {80,243,245}, {15,199,196}, {15,199,196}, {15,199,196}, {15,199,196}, {80,243,245}, {80,243,245}, {15,199,196}, {80,243,245}, {80,243,245}, {15,199,196}, {80,243,245}, {80,243,245}, {80,243,245}, {80,243,245}, {80,243,245}, {80,243,245}, {80,243,245}, {80,243,245}, {80,243,245}, {15,199,196}, {80,243,245}, {80,243,245}, {80,243,245}, {80,243,245}, {80,243,245}, {54,60,155}, {54,60,155}, {54,60,155}, {54,60,155}, {80,243,245}, {80,243,245}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {80,243,245}, {80,243,245}, {0,255,255}, {0,255,255} },

    [3] = { {0,0,0}, {81,202,190}, {81,202,190}, {81,202,190}, {81,202,190}, {0,0,0}, {81,202,190}, {81,202,190}, {81,202,190}, {81,202,190}, {81,202,190}, {81,202,190}, {81,202,190}, {81,202,190}, {81,202,190}, {81,202,190}, {81,202,190}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {81,202,190}, {81,202,190}, {0,0,0}, {0,0,0}, {81,202,190}, {81,202,190}, {81,202,190}, {81,202,190}, {81,202,190}, {0,0,0}, {81,202,190}, {81,202,190}, {81,202,190}, {81,202,190}, {81,202,190}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {81,202,190}, {81,202,190}, {81,202,190}, {81,202,190}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,0}, {0,0,0}, {81,202,190}, {81,202,190}, {81,202,190}, {0,0,0}, {27,255,255}, {160,255,255}, {0,0,0}, {160,255,255}, {160,255,255}, {0,0,0}, {27,255,255}, {160,255,255}, {160,255,255}, {160,255,255}, {160,255,255}, {0,0,0}, {27,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,225}, {0,0,225}, {0,0,225}, {0,0,0}, {0,0,0}, {0,0,0}, {160,255,255}, {160,255,255}, {160,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {160,255,255}, {160,255,255}, {160,255,255}, {0,0,0}, {0,0,225}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (keyboard_config.disable_layer_led) { return false; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_LSFT(SS_TAP(X_3))));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(25) SS_TAP(X_D));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(25) SS_TAP(X_1));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(25) SS_TAP(X_2));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(25) SS_TAP(X_3));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(25) SS_TAP(X_4));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(25) SS_TAP(X_5));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(25) SS_LSFT(SS_TAP(X_7)));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(25) SS_TAP(X_P));
    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(25) SS_LSFT(SS_TAP(X_5)));
    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(25) SS_LSFT(SS_TAP(X_QUOTE)));
    }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(25) SS_TAP(X_N));
    }
    break;
    case ST_MACRO_12:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(25) SS_TAP(X_PAGE_UP));
    }
    break;
    case ST_MACRO_13:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_ESCAPE) SS_DELAY(25) SS_LSFT(SS_TAP(X_SCLN)) SS_DELAY(25) SS_TAP(X_X) SS_DELAY(25) SS_TAP(X_A) SS_DELAY(25) SS_LSFT(SS_TAP(X_1))  SS_DELAY(25) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_14:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_ESCAPE) SS_DELAY(25) SS_LSFT(SS_TAP(X_SCLN)) SS_DELAY(25) SS_TAP(X_Q) SS_DELAY(25) SS_TAP(X_A) SS_DELAY(25) SS_RSFT(SS_TAP(X_1))  SS_DELAY(25) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_15:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_ESCAPE) SS_DELAY(25) SS_RSFT(SS_TAP(X_SCLN)) SS_DELAY(25) SS_TAP(X_Q) SS_DELAY(25) SS_LSFT(SS_TAP(X_1))  SS_DELAY(25) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_16:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_ESCAPE) SS_DELAY(25) SS_LSFT(SS_TAP(X_SCLN)) SS_DELAY(25) SS_TAP(X_W)  SS_DELAY(25) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_17:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(25) SS_TAP(X_C));
    }
    break;
    case ST_MACRO_18:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(25) SS_TAP(X_M) SS_DELAY(25) SS_TAP(X_U) SS_DELAY(25) SS_TAP(X_X) SS_DELAY(25) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_19:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(25) SS_TAP(X_COMMA));
    }
    break;
    case ST_MACRO_20:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(25) SS_LCTL(SS_TAP(X_LEFT)));
    }
    break;
    case ST_MACRO_21:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(25) SS_LCTL(SS_TAP(X_DOWN)));
    }
    break;
    case ST_MACRO_22:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(25) SS_LCTL(SS_TAP(X_UP)));
    }
    break;
    case ST_MACRO_23:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(25) SS_LCTL(SS_TAP(X_RIGHT)));
    }
    break;
    case ST_MACRO_24:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(25) SS_TAP(X_6));
    }
    break;
    case ST_MACRO_25:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(25) SS_TAP(X_7));
    }
    break;
    case ST_MACRO_26:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(25) SS_TAP(X_8));
    }
    break;
    case ST_MACRO_27:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(25) SS_TAP(X_9));
    }
    break;
    case ST_MACRO_28:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(25) SS_TAP(X_0));
    }
    break;
    case ST_MACRO_29:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_W)) SS_DELAY(25) SS_TAP(X_LEFT));
    }
    break;
    case ST_MACRO_30:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_W)) SS_DELAY(25) SS_TAP(X_DOWN));
    }
    break;
    case ST_MACRO_31:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_W)) SS_DELAY(25) SS_TAP(X_UP));
    }
    break;
    case ST_MACRO_32:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_W)) SS_DELAY(25) SS_TAP(X_RIGHT));
    }
    break;
    case ST_MACRO_33:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(25) SS_TAP(X_LEFT));
    }
    break;
    case ST_MACRO_34:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(25) SS_TAP(X_DOWN));
    }
    break;
    case ST_MACRO_35:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(25) SS_TAP(X_UP));
    }
    break;
    case ST_MACRO_36:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B)) SS_DELAY(25) SS_TAP(X_RIGHT));
    }
    break;
    case ST_MACRO_37:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(25) SS_TAP(X_F) SS_DELAY(25) SS_TAP(X_I));
    }
    break;
    case ST_MACRO_38:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(25) SS_TAP(X_F) SS_DELAY(25) SS_TAP(X_P));
    }
    break;
    case ST_MACRO_39:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(25) SS_TAP(X_F) SS_DELAY(25) SS_TAP(X_A));
    }
    break;
    case ST_MACRO_40:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(25) SS_TAP(X_S) SS_DELAY(25) SS_TAP(X_S) SS_DELAY(25) SS_TAP(X_O)  SS_DELAY(25) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_41:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_K) SS_DELAY(25) SS_TAP(X_D) SS_DELAY(25) SS_TAP(X_P));
    }
    break;
    case ST_MACRO_42:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_K) SS_DELAY(25) SS_TAP(X_R) SS_DELAY(25) SS_TAP(X_B) SS_DELAY(25) SS_TAP(X_C));
    }
    break;
    case ST_MACRO_43:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_K) SS_DELAY(25) SS_TAP(X_R) SS_DELAY(25) SS_TAP(X_D));
    }
    break;
    case ST_MACRO_44:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(25) SS_TAP(X_W) SS_DELAY(25) SS_TAP(X_S) SS_DELAY(25) SS_TAP(X_P)  SS_DELAY(25) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_45:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_K) SS_DELAY(25) SS_TAP(X_G) SS_DELAY(25) SS_TAP(X_I));
    }
    break;
    case ST_MACRO_46:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_K) SS_DELAY(25) SS_TAP(X_G) SS_DELAY(25) SS_TAP(X_S));
    }
    break;
    case ST_MACRO_47:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_K) SS_DELAY(25) SS_TAP(X_G) SS_DELAY(25) SS_TAP(X_C) SS_DELAY(25) SS_TAP(X_M));
    }
    break;
    case ST_MACRO_48:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_K) SS_DELAY(25) SS_TAP(X_G) SS_DELAY(25) SS_TAP(X_P));
    }
    break;
    case ST_MACRO_49:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A) SS_DELAY(25) SS_TAP(X_C)  SS_DELAY(25) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_50:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_H) SS_DELAY(25) SS_TAP(X_L));
    }
    break;
    case ST_MACRO_51:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_H) SS_DELAY(25) SS_TAP(X_I));
    }
    break;
    case ST_MACRO_52:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_H) SS_DELAY(25) SS_TAP(X_U));
    }
    break;
    case ST_MACRO_53:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_K) SS_DELAY(25) SS_TAP(X_G) SS_DELAY(25) SS_TAP(X_N));
    }
    break;
    case ST_MACRO_54:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_K) SS_DELAY(25) SS_TAP(X_G) SS_DELAY(25) SS_TAP(X_N) SS_DELAY(25) SS_TAP(X_O));
    }
    break;
    case ST_MACRO_55:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_K) SS_DELAY(25) SS_TAP(X_G) SS_DELAY(25) SS_TAP(X_L) SS_DELAY(25) SS_TAP(X_F));
    }
    break;
    case ST_MACRO_56:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_K) SS_DELAY(25) SS_TAP(X_S) SS_DELAY(25) SS_TAP(X_N));
    }
    break;
    case ST_MACRO_57:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_K) SS_DELAY(25) SS_TAP(X_G) SS_DELAY(25) SS_TAP(X_E));
    }
    break;
    case ST_MACRO_58:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_K) SS_DELAY(25) SS_TAP(X_G) SS_DELAY(25) SS_TAP(X_L));
    }
    break;
    case ST_MACRO_59:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_K) SS_DELAY(25) SS_TAP(X_9) SS_DELAY(25) SS_TAP(X_S)  SS_DELAY(25) SS_TAP(X_ENTER));
    }
    break;

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[5];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MEDIA_PLAY_PAUSE);
        tap_code16(KC_MEDIA_PLAY_PAUSE);
        tap_code16(KC_MEDIA_PLAY_PAUSE);
    }
    if(state->count > 3) {
        tap_code16(KC_MEDIA_PLAY_PAUSE);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_MEDIA_PLAY_PAUSE); break;
        case SINGLE_HOLD: register_code16(KC_PAUSE); break;
        case DOUBLE_TAP: register_code16(KC_MEDIA_PLAY_PAUSE); register_code16(KC_MEDIA_PLAY_PAUSE); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MEDIA_PLAY_PAUSE); register_code16(KC_MEDIA_PLAY_PAUSE);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_MEDIA_PLAY_PAUSE); break;
        case SINGLE_HOLD: unregister_code16(KC_PAUSE); break;
        case DOUBLE_TAP: unregister_code16(KC_MEDIA_PLAY_PAUSE); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MEDIA_PLAY_PAUSE); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(tap_dance_state_t *state, void *user_data);
void dance_1_finished(tap_dance_state_t *state, void *user_data);
void dance_1_reset(tap_dance_state_t *state, void *user_data);

void on_dance_1(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_AUDIO_VOL_DOWN);
        tap_code16(KC_AUDIO_VOL_DOWN);
        tap_code16(KC_AUDIO_VOL_DOWN);
    }
    if(state->count > 3) {
        tap_code16(KC_AUDIO_VOL_DOWN);
    }
}

void dance_1_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(KC_AUDIO_VOL_DOWN); break;
        case SINGLE_HOLD: register_code16(KC_AUDIO_MUTE); break;
        case DOUBLE_TAP: register_code16(KC_AUDIO_VOL_DOWN); register_code16(KC_AUDIO_VOL_DOWN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_AUDIO_VOL_DOWN); register_code16(KC_AUDIO_VOL_DOWN);
    }
}

void dance_1_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(KC_AUDIO_VOL_DOWN); break;
        case SINGLE_HOLD: unregister_code16(KC_AUDIO_MUTE); break;
        case DOUBLE_TAP: unregister_code16(KC_AUDIO_VOL_DOWN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_AUDIO_VOL_DOWN); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(tap_dance_state_t *state, void *user_data);
void dance_2_finished(tap_dance_state_t *state, void *user_data);
void dance_2_reset(tap_dance_state_t *state, void *user_data);

void on_dance_2(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_LBRC);
        tap_code16(KC_LBRC);
        tap_code16(KC_LBRC);
    }
    if(state->count > 3) {
        tap_code16(KC_LBRC);
    }
}

void dance_2_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(KC_LBRC); break;
        case SINGLE_HOLD: register_code16(KC_RBRC); break;
        case DOUBLE_TAP: register_code16(KC_LBRC); register_code16(KC_LBRC); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_LBRC); register_code16(KC_LBRC);
    }
}

void dance_2_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(KC_LBRC); break;
        case SINGLE_HOLD: unregister_code16(KC_RBRC); break;
        case DOUBLE_TAP: unregister_code16(KC_LBRC); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_LBRC); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(tap_dance_state_t *state, void *user_data);
void dance_3_finished(tap_dance_state_t *state, void *user_data);
void dance_3_reset(tap_dance_state_t *state, void *user_data);

void on_dance_3(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_LPRN);
        tap_code16(KC_LPRN);
        tap_code16(KC_LPRN);
    }
    if(state->count > 3) {
        tap_code16(KC_LPRN);
    }
}

void dance_3_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(KC_LPRN); break;
        case SINGLE_HOLD: register_code16(KC_RPRN); break;
        case DOUBLE_TAP: register_code16(KC_LPRN); register_code16(KC_LPRN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_LPRN); register_code16(KC_LPRN);
    }
}

void dance_3_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(KC_LPRN); break;
        case SINGLE_HOLD: unregister_code16(KC_RPRN); break;
        case DOUBLE_TAP: unregister_code16(KC_LPRN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_LPRN); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(tap_dance_state_t *state, void *user_data);
void dance_4_finished(tap_dance_state_t *state, void *user_data);
void dance_4_reset(tap_dance_state_t *state, void *user_data);

void on_dance_4(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_LCBR);
        tap_code16(KC_LCBR);
        tap_code16(KC_LCBR);
    }
    if(state->count > 3) {
        tap_code16(KC_LCBR);
    }
}

void dance_4_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(KC_LCBR); break;
        case SINGLE_HOLD: register_code16(KC_RCBR); break;
        case DOUBLE_TAP: register_code16(KC_LCBR); register_code16(KC_LCBR); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_LCBR); register_code16(KC_LCBR);
    }
}

void dance_4_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(KC_LCBR); break;
        case SINGLE_HOLD: unregister_code16(KC_RCBR); break;
        case DOUBLE_TAP: unregister_code16(KC_LCBR); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_LCBR); break;
    }
    dance_state[4].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
};
