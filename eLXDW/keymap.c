#include QMK_KEYBOARD_H
#include "version.h"
#define MOON_LED_LEVEL LED_LEVEL
#ifndef ZSA_SAFE_RANGE
#define ZSA_SAFE_RANGE SAFE_RANGE
#endif

enum custom_keycodes {
  RGB_SLD = ZSA_SAFE_RANGE,
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
};




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
    TG(5),          KC_1,           KC_2,           KC_3,           KC_4,           KC_5,                                           KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           LALT(LGUI(KC_Q)),
    LGUI(LSFT(KC_3)),KC_Q,           KC_W,           KC_E,           KC_R,           KC_T,                                           KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_BSLS,        
    KC_ESCAPE,      MT(MOD_LSFT, KC_A),MT(MOD_LCTL, KC_S),MT(MOD_LALT, KC_D),MT(MOD_LGUI, KC_F),LT(4, KC_G),                                    LT(4, KC_H),    MT(MOD_RGUI, KC_J),MT(MOD_RALT, KC_K),MT(MOD_RCTL, KC_L),MT(MOD_RSFT, KC_SCLN),KC_QUOTE,       
    OSL(3),         KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_COMMA,       KC_DOT,         KC_SLASH,       MO(3),          
                                                    LT(1, KC_SPACE),LT(2, KC_TAB),                                  KC_ENTER,       LT(1, KC_BSPC)
  ),
  [1] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TILD,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_GRAVE,       KC_LBRC,        KC_RBRC,        KC_LCBR,        KC_RCBR,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_EQUAL,       KC_UNDS,        KC_MINUS,       KC_PLUS,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_COMMA,       KC_DOT,         KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_voyager(
    LCTL(KC_5),     LCTL(KC_4),     LCTL(KC_3),     LCTL(KC_2),     LCTL(KC_1),     KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, LALT(KC_LEFT),  LGUI(KC_LEFT),  RGUI(KC_RIGHT), RALT(KC_RIGHT), KC_HOME,                                        KC_END,         LGUI(KC_PAGE_UP),LGUI(LSFT(KC_LEFT)),KC_UP,          LGUI(KC_PGDN),  KC_TRANSPARENT, 
    KC_TRANSPARENT, LCTL(LSFT(KC_TAB)),KC_PGDN,        KC_PAGE_UP,     LCTL(KC_TAB),   KC_TRANSPARENT,                                 KC_LEFT,        KC_DOWN,        KC_UP,          KC_RIGHT,       KC_MS_ACCEL1,   KC_MS_ACCEL2,   
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_UP,       KC_MS_RIGHT,    KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_MS_BTN1,     KC_MS_BTN2
  ),
  [3] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 ST_MACRO_18,    ST_MACRO_19,    ST_MACRO_20,    ST_MACRO_21,    ST_MACRO_22,    KC_TRANSPARENT, 
    ST_MACRO_0,     ST_MACRO_1,     ST_MACRO_2,     ST_MACRO_3,     ST_MACRO_4,     ST_MACRO_5,                                     ST_MACRO_23,    ST_MACRO_24,    ST_MACRO_25,    ST_MACRO_26,    ST_MACRO_27,    KC_TRANSPARENT, 
    ST_MACRO_6,     ST_MACRO_7,     ST_MACRO_8,     ST_MACRO_9,     ST_MACRO_10,    ST_MACRO_11,                                    ST_MACRO_28,    ST_MACRO_29,    ST_MACRO_30,    ST_MACRO_31,    KC_TRANSPARENT, KC_TRANSPARENT, 
    ST_MACRO_12,    ST_MACRO_13,    ST_MACRO_14,    ST_MACRO_15,    ST_MACRO_16,    ST_MACRO_17,                                    ST_MACRO_32,    ST_MACRO_33,    ST_MACRO_34,    ST_MACRO_35,    KC_TRANSPARENT, KC_TRANSPARENT, 
                                                    KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [4] = LAYOUT_voyager(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    ST_MACRO_36,    ST_MACRO_37,    KC_TRANSPARENT, ST_MACRO_38,    ST_MACRO_39,    KC_TRANSPARENT,                                 KC_TRANSPARENT, ST_MACRO_49,    ST_MACRO_50,    ST_MACRO_51,    KC_TRANSPARENT, KC_TRANSPARENT, 
    ST_MACRO_40,    ST_MACRO_41,    ST_MACRO_42,    ST_MACRO_43,    ST_MACRO_44,    KC_TRANSPARENT,                                 KC_TRANSPARENT, ST_MACRO_52,    ST_MACRO_53,    ST_MACRO_54,    KC_TRANSPARENT, ST_MACRO_55,    
    ST_MACRO_45,    KC_TRANSPARENT, ST_MACRO_46,    ST_MACRO_47,    ST_MACRO_48,    KC_TRANSPARENT,                                 KC_TRANSPARENT, ST_MACRO_56,    ST_MACRO_57,    ST_MACRO_58,    KC_TRANSPARENT, KC_TRANSPARENT, 
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

RGB hsv_to_rgb_with_value(HSV hsv) {
  RGB rgb = hsv_to_rgb( hsv );
  float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
  return (RGB){ f * rgb.r, f * rgb.g, f * rgb.b };
}

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = { {80,243,245}, {0,228,225}, {80,243,245}, {80,243,245}, {80,243,245}, {43,187,207}, {80,243,245}, {80,243,245}, {80,243,245}, {80,243,245}, {80,243,245}, {80,243,245}, {80,243,245}, {0,0,254}, {0,0,254}, {0,0,254}, {0,0,254}, {80,243,245}, {0,0,100}, {80,243,245}, {80,243,245}, {80,243,245}, {80,243,245}, {80,243,245}, {42,217,219}, {80,243,245}, {0,255,255}, {160,255,255}, {69,197,196}, {0,255,255}, {1,187,207}, {41,255,255}, {80,243,245}, {80,243,245}, {80,243,245}, {80,243,245}, {80,243,245}, {80,243,245}, {80,243,245}, {0,0,254}, {0,0,254}, {0,0,254}, {0,0,254}, {80,243,245}, {80,243,245}, {80,243,245}, {80,243,245}, {80,243,245}, {80,243,245}, {80,243,245}, {163,255,247}, {42,217,219} },

    [1] = { {42,217,219}, {42,217,219}, {42,217,219}, {42,217,219}, {42,217,219}, {42,217,219}, {176,255,247}, {42,217,219}, {42,217,219}, {42,217,219}, {42,217,219}, {42,217,219}, {176,255,247}, {0,255,255}, {0,255,255}, {176,255,247}, {176,255,247}, {42,217,219}, {42,217,219}, {42,217,219}, {42,217,219}, {42,217,219}, {42,217,219}, {42,217,219}, {42,217,219}, {42,217,219}, {42,217,219}, {42,217,219}, {42,217,219}, {42,217,219}, {42,217,219}, {42,217,219}, {42,217,219}, {42,217,219}, {42,217,219}, {42,217,219}, {42,217,219}, {42,217,219}, {42,217,219}, {176,255,247}, {176,255,247}, {176,255,247}, {176,255,247}, {42,217,219}, {42,217,219}, {42,217,219}, {42,217,219}, {42,217,219}, {42,217,219}, {42,217,219}, {42,217,219}, {42,217,219} },

    [2] = { {80,243,245}, {80,243,245}, {55,218,204}, {80,243,245}, {80,243,245}, {80,243,245}, {80,243,245}, {15,199,196}, {15,199,196}, {15,199,196}, {15,199,196}, {15,199,196}, {80,243,245}, {15,199,196}, {15,199,196}, {15,199,196}, {15,199,196}, {80,243,245}, {80,243,245}, {80,243,245}, {80,243,245}, {80,243,245}, {80,243,245}, {80,243,245}, {80,243,245}, {80,243,245}, {80,243,245}, {80,243,245}, {80,243,245}, {80,243,245}, {80,243,245}, {80,243,245}, {15,199,196}, {80,243,245}, {80,243,245}, {80,243,245}, {80,243,245}, {80,243,245}, {54,60,155}, {54,60,155}, {54,60,155}, {54,60,155}, {80,243,245}, {80,243,245}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {80,243,245}, {80,243,245}, {0,255,255}, {0,255,255} },

    [3] = { {0,0,0}, {81,202,190}, {81,202,190}, {81,202,190}, {81,202,190}, {0,0,0}, {81,202,190}, {81,202,190}, {81,202,190}, {81,202,190}, {81,202,190}, {81,202,190}, {81,202,190}, {81,202,190}, {81,202,190}, {81,202,190}, {81,202,190}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {81,202,190}, {81,202,190}, {0,0,0}, {0,0,0}, {81,202,190}, {81,202,190}, {81,202,190}, {81,202,190}, {81,202,190}, {0,0,0}, {81,202,190}, {81,202,190}, {81,202,190}, {81,202,190}, {81,202,190}, {0,0,0}, {0,255,255}, {0,255,255}, {0,255,255}, {0,255,255}, {0,0,0}, {0,0,0}, {81,202,190}, {81,202,190}, {81,202,190}, {81,202,190}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [4] = { {0,0,0}, {0,0,0}, {81,202,190}, {81,202,190}, {81,202,190}, {0,0,0}, {27,255,255}, {160,255,255}, {0,0,0}, {160,255,255}, {160,255,255}, {81,202,190}, {27,255,255}, {160,255,255}, {160,255,255}, {160,255,255}, {160,255,255}, {0,0,0}, {27,255,255}, {0,0,0}, {81,202,190}, {81,202,190}, {81,202,190}, {81,202,190}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,225}, {0,0,225}, {0,0,225}, {0,0,0}, {0,0,0}, {0,0,225}, {160,255,255}, {160,255,255}, {160,255,255}, {0,0,0}, {0,0,0}, {0,0,225}, {160,255,255}, {160,255,255}, {160,255,255}, {0,0,0}, {0,0,225}, {0,0,225}, {0,0,225}, {0,0,225}, {0,0,225}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

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
        RGB rgb = hsv_to_rgb_with_value(hsv);
        rgb_matrix_set_color(i, rgb.r, rgb.g, rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) {
      return false;
  }
  if (!keyboard_config.disable_layer_led) { 
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
        if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
          rgb_matrix_set_color_all(0, 0, 0);
        }
    }
  } else {
    if (rgb_matrix_get_flags() == LED_FLAG_NONE) {
      rgb_matrix_set_color_all(0, 0, 0);
    }
  }

  return true;
}




bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
  case QK_MODS ... QK_MODS_MAX:
    // Mouse and consumer keys (volume, media) with modifiers work inconsistently across operating systems,
    // this makes sure that modifiers are always applied to the key that was pressed.
    if (IS_MOUSE_KEYCODE(QK_MODS_GET_BASIC_KEYCODE(keycode))) {
      if (record->event.pressed) {
        add_mods(QK_MODS_GET_MODS(keycode));
        send_keyboard_report();
        wait_ms(2);
        register_code(QK_MODS_GET_BASIC_KEYCODE(keycode));
        return false;
      } else {
        wait_ms(2);
        del_mods(QK_MODS_GET_MODS(keycode));
      }
    }
    break;
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B))SS_DELAY(100)  SS_TAP(X_D));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B))SS_DELAY(100)  SS_TAP(X_1));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B))SS_DELAY(100)  SS_TAP(X_2));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B))SS_DELAY(100)  SS_TAP(X_3));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B))SS_DELAY(100)  SS_TAP(X_4));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B))SS_DELAY(100)  SS_TAP(X_5));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B))SS_DELAY(100)  SS_LSFT(SS_TAP(X_7)));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B))SS_DELAY(100)  SS_TAP(X_P));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B))SS_DELAY(100)  SS_LSFT(SS_TAP(X_5)));
    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B))SS_DELAY(100)  SS_LSFT(SS_TAP(X_QUOTE)));
    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B))SS_DELAY(100)  SS_TAP(X_N));
    }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B))SS_DELAY(100)  SS_TAP(X_PAGE_UP));
    }
    break;
    case ST_MACRO_12:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_ESCAPE)SS_DELAY(100)  SS_LSFT(SS_TAP(X_SCLN))SS_DELAY(100)  SS_TAP(X_X)SS_DELAY(100)  SS_TAP(X_A)SS_DELAY(100)  SS_LSFT(SS_TAP(X_1))  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_13:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_ESCAPE)SS_DELAY(100)  SS_LSFT(SS_TAP(X_SCLN))SS_DELAY(100)  SS_TAP(X_Q)SS_DELAY(100)  SS_TAP(X_A)SS_DELAY(100)  SS_RSFT(SS_TAP(X_1))  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_14:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_ESCAPE)SS_DELAY(100)  SS_RSFT(SS_TAP(X_SCLN))SS_DELAY(100)  SS_TAP(X_Q)SS_DELAY(100)  SS_LSFT(SS_TAP(X_1))  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_15:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_ESCAPE)SS_DELAY(100)  SS_LSFT(SS_TAP(X_SCLN))SS_DELAY(100)  SS_TAP(X_W)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_16:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B))SS_DELAY(100)  SS_TAP(X_C));
    }
    break;
    case ST_MACRO_17:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T)SS_DELAY(100)  SS_TAP(X_M)SS_DELAY(100)  SS_TAP(X_U)SS_DELAY(100)  SS_TAP(X_X)SS_DELAY(100)  SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_18:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B))SS_DELAY(100)  SS_TAP(X_COMMA));
    }
    break;
    case ST_MACRO_19:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B))SS_DELAY(100)  SS_LCTL(SS_TAP(X_LEFT)));
    }
    break;
    case ST_MACRO_20:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B))SS_DELAY(100)  SS_LCTL(SS_TAP(X_DOWN)));
    }
    break;
    case ST_MACRO_21:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B))SS_DELAY(100)  SS_LCTL(SS_TAP(X_UP)));
    }
    break;
    case ST_MACRO_22:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B))SS_DELAY(100)  SS_LCTL(SS_TAP(X_RIGHT)));
    }
    break;
    case ST_MACRO_23:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B))SS_DELAY(100)  SS_TAP(X_6));
    }
    break;
    case ST_MACRO_24:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B))SS_DELAY(100)  SS_TAP(X_7));
    }
    break;
    case ST_MACRO_25:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B))SS_DELAY(100)  SS_TAP(X_8));
    }
    break;
    case ST_MACRO_26:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B))SS_DELAY(100)  SS_TAP(X_9));
    }
    break;
    case ST_MACRO_27:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B))SS_DELAY(100)  SS_TAP(X_0));
    }
    break;
    case ST_MACRO_28:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_W))SS_DELAY(100)  SS_TAP(X_LEFT));
    }
    break;
    case ST_MACRO_29:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_W))SS_DELAY(100)  SS_TAP(X_DOWN));
    }
    break;
    case ST_MACRO_30:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_W))SS_DELAY(100)  SS_TAP(X_UP));
    }
    break;
    case ST_MACRO_31:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_W))SS_DELAY(100)  SS_TAP(X_RIGHT));
    }
    break;
    case ST_MACRO_32:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B))SS_DELAY(100)  SS_TAP(X_LEFT));
    }
    break;
    case ST_MACRO_33:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B))SS_DELAY(100)  SS_TAP(X_DOWN));
    }
    break;
    case ST_MACRO_34:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B))SS_DELAY(100)  SS_TAP(X_UP));
    }
    break;
    case ST_MACRO_35:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_B))SS_DELAY(100)  SS_TAP(X_RIGHT));
    }
    break;
    case ST_MACRO_36:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A)SS_DELAY(100)  SS_TAP(X_S)SS_DELAY(100)  SS_TAP(X_S)SS_DELAY(100)  SS_TAP(X_O)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_37:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_K)SS_DELAY(100)  SS_TAP(X_D)SS_DELAY(100)  SS_TAP(X_P));
    }
    break;
    case ST_MACRO_38:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_K)SS_DELAY(100)  SS_TAP(X_R)SS_DELAY(100)  SS_TAP(X_B)SS_DELAY(100)  SS_TAP(X_C));
    }
    break;
    case ST_MACRO_39:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_K)SS_DELAY(100)  SS_TAP(X_R)SS_DELAY(100)  SS_TAP(X_D));
    }
    break;
    case ST_MACRO_40:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A)SS_DELAY(100)  SS_TAP(X_W)SS_DELAY(100)  SS_TAP(X_S)SS_DELAY(100)  SS_TAP(X_P)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_41:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_K)SS_DELAY(100)  SS_TAP(X_G)SS_DELAY(100)  SS_TAP(X_I));
    }
    break;
    case ST_MACRO_42:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_K)SS_DELAY(100)  SS_TAP(X_G)SS_DELAY(100)  SS_TAP(X_S));
    }
    break;
    case ST_MACRO_43:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_K)SS_DELAY(100)  SS_TAP(X_G)SS_DELAY(100)  SS_TAP(X_C)SS_DELAY(100)  SS_TAP(X_M));
    }
    break;
    case ST_MACRO_44:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_K)SS_DELAY(100)  SS_TAP(X_G)SS_DELAY(100)  SS_TAP(X_P));
    }
    break;
    case ST_MACRO_45:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_A)SS_DELAY(100)  SS_TAP(X_C)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_46:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T)SS_DELAY(100)  SS_TAP(X_F)SS_DELAY(100)  SS_TAP(X_I));
    }
    break;
    case ST_MACRO_47:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T)SS_DELAY(100)  SS_TAP(X_F)SS_DELAY(100)  SS_TAP(X_P));
    }
    break;
    case ST_MACRO_48:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T)SS_DELAY(100)  SS_TAP(X_F)SS_DELAY(100)  SS_TAP(X_A));
    }
    break;
    case ST_MACRO_49:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_K)SS_DELAY(100)  SS_TAP(X_G)SS_DELAY(100)  SS_TAP(X_N));
    }
    break;
    case ST_MACRO_50:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_K)SS_DELAY(100)  SS_TAP(X_G)SS_DELAY(100)  SS_TAP(X_N)SS_DELAY(100)  SS_TAP(X_O));
    }
    break;
    case ST_MACRO_51:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_K)SS_DELAY(100)  SS_TAP(X_G)SS_DELAY(100)  SS_TAP(X_L)SS_DELAY(100)  SS_TAP(X_F));
    }
    break;
    case ST_MACRO_52:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_K)SS_DELAY(100)  SS_TAP(X_S)SS_DELAY(100)  SS_TAP(X_N));
    }
    break;
    case ST_MACRO_53:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_K)SS_DELAY(100)  SS_TAP(X_G)SS_DELAY(100)  SS_TAP(X_E));
    }
    break;
    case ST_MACRO_54:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_K)SS_DELAY(100)  SS_TAP(X_G)SS_DELAY(100)  SS_TAP(X_L));
    }
    break;
    case ST_MACRO_55:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_K)SS_DELAY(100)  SS_TAP(X_9)SS_DELAY(100)  SS_TAP(X_S)  SS_DELAY(100) SS_TAP(X_ENTER));
    }
    break;
    case ST_MACRO_56:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_H)SS_DELAY(100)  SS_TAP(X_L));
    }
    break;
    case ST_MACRO_57:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_H)SS_DELAY(100)  SS_TAP(X_I));
    }
    break;
    case ST_MACRO_58:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_H)SS_DELAY(100)  SS_TAP(X_U));
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
