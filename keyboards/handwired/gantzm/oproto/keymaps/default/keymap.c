#include QMK_KEYBOARD_H


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT_split_3x5_2(
        KC_A,    KC_B,    KC_C,    KC_1,    KC_2,    KC_3,
        KC_D,    KC_E,    KC_F,    KC_4,    KC_5,    KC_6
    )
};


void keyboard_post_init_user(void) {
  debug_enable=true;
  debug_matrix=true;
  debug_keyboard=true;
  //debug_mouse=true;

  setPinOutput(D6);
  writePinHigh(D6);
}

