#include QMK_KEYBOARD_H

enum {
      QWERTY = 0, // Default QWERTY layer.
      NAV         // Navigation layer.
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [QWERTY] = LAYOUT_default(
                   KC_ESC,   KC_F1,   KC_F2,   KC_F3,   KC_F4,           KC_F5,  KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_M,    KC_PSCR, KC_SCRL, KC_PAUS, 
    KC_F1, KC_F2,  KC_GRV,   KC_1,    KC_2,    KC_3,    KC_4,            KC_5,   KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_INS,  KC_HOME, KC_PGUP,
    KC_F3, KC_F4,  KC_TAB,   KC_Q,    KC_W,    KC_E,    KC_R,            KC_T,   KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_DEL,  KC_END,  KC_PGDN,
    KC_F5, KC_F6,  KC_CAPS,  KC_A,    KC_S,    KC_D,    KC_F,            KC_G,   KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
    KC_F7, KC_F8,  KC_LSFT,  KC_Z,    KC_X,    KC_C,    KC_V,            KC_B,   KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,
    KC_F9, KC_F10, KC_LCTL,  KC_LGUI, KC_LALT, MO(NAV), LT(NAV, KC_SPC), KC_SPC, KC_RALT, KC_RGUI, KC_APP,  KC_RCTL, KC_LEFT, KC_DOWN, KC_RIGHT
    ),
    [NAV] = LAYOUT_default(
                      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
    )
};


void keyboard_post_init_user(void) {
  
  // debug_enable=true;
  // debug_matrix=true;
  // debug_keyboard=true;
  // debug_mouse=true;
  
}



#ifdef OLED_ENABLE
bool oled_task_user(void) {

  oled_set_cursor(0, 0);

  oled_write_P(PSTR("Hello Mike! "), false);

  led_t led_state = host_keyboard_led_state();

  oled_set_cursor(0, 1);
  oled_write_P(led_state.num_lock ? PSTR("NUM: ON ") : PSTR("NUM: OFF"), false);

  oled_set_cursor(0, 2);
  oled_write_P(led_state.caps_lock ? PSTR("CAP: ON ") : PSTR("CAP: OFF"), false);

  oled_set_cursor(0, 3);
  oled_write_P(led_state.scroll_lock ? PSTR("SCR: ON ") : PSTR("SCR: OFF"), false);

  oled_set_cursor(0, 4);

  switch (get_highest_layer(layer_state)) {
  case QWERTY:
    oled_write_P(PSTR("LAY: QWERTY  "), false);
    break;
  case NAV:
    oled_write_P(PSTR("LAY: NAV     "), false);
    break;
  default:
    oled_write_P(PSTR("LAY: ???     "), false);
  }

/*
    // Host Keyboard Layer Status
    oled_write_P(PSTR("Layer: "), false);


    // Host Keyboard LED Status
    led_t led_state = host_keyboard_led_state();
    oled_write_P(led_state.num_lock ? PSTR("NUM ") : PSTR("    "), false);
    oled_write_P(led_state.caps_lock ? PSTR("CAP ") : PSTR("    "), false);
    oled_write_P(led_state.scroll_lock ? PSTR("SCR ") : PSTR("    "), false);
  
*/  
    return false;
}
#endif
