#include QMK_KEYBOARD_H
#include "dilly.h"
#include "action_layer.h"

extern keymap_config_t keymap_config;

#define _BASE 0
#define _FN1 1
#define _FN2 2
#define _FN3 3
#define _FN4 4
#define _FN5 5
    
//#define KC_ KC_TRNS
#define _______ KC_TRNS
    
// Tap-Hold keys
#define KC_M_L1 LT(_FN1, KC_M)
#define KC_V_L2 LT(_FN2, KC_V)
#define KC_F_L3 LT(_FN3, KC_F)
#define KC_J_L4 LT(_FN4, KC_J)
#define KC_Q_L5 LT(_FN5, KC_Q)
#define KC_ASFT MT(MOD_LSFT, KC_A)
#define KC_ZCTL MT(MOD_LCTL, KC_Z)
#define KC_XALT MT(MOD_LALT, KC_X)
#define KC_CGUI MT(MOD_LGUI, KC_C)
#define KC_BSGU MT(MOD_RGUI, KC_BSPC)
#define KC_ESCT MT(MOD_RCTL, KC_ESC)
#define KC_ENTS MT(MOD_RSFT, KC_ENT)
#define KC_SPSH MT(MOD_RSFT, KC_SPC)

#define KC_GUIC LGUI(KC_C)    // Copy (cmd+c)
#define KC_ELLP LALT(KC_SCLN) // Ellipsis
    
#define KC_RST RESET
#define KC_BL_S BL_STEP
#define KC_BL_I BL_INC
#define KC_BL_D BL_DEC
#define KC_BL_B BL_BRTG
#define KC_DBUG DEBUG
#define KC_RTOG RGB_TOG
#define KC_RMOD RGB_MOD
#define KC_RHUI RGB_HUI
#define KC_RHUD RGB_HUD
#define KC_RSAI RGB_SAI
#define KC_RSAD RGB_SAD
#define KC_RVAI RGB_VAI
#define KC_RVAD RGB_VAD
    
    const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
        
[_BASE] = LAYOUT_ortho_3x10(
//,-------+-------+-------+-------+-------+-------+-------+-------+-------+-------.
   KC_Q_L5, KC_W  , KC_E  , KC_R  , KC_T  , KC_Y  , KC_U  , KC_I  , KC_O  , KC_P  ,
//|-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
   KC_ASFT, KC_S  , KC_D  ,KC_F_L3, KC_G  , KC_H  ,KC_J_L4, KC_K  , KC_L  ,KC_SPSH,
//|-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
   KC_ZCTL,KC_XALT,KC_CGUI,KC_V_L2, KC_B  , KC_N  ,KC_M_L1,KC_BSGU,KC_ESCT,KC_ENTS
//`-------+-------+-------+-------+-------+-------+-------+-------+-------+-------'
),

[_FN1] = LAYOUT_ortho_3x10(
//,-------+-------+-------+-------+-------+-------+-------+-------+-------+-------.
   KC_F1  , KC_F2 , KC_F3 , KC_F4 ,KC_PPLS,KC_PMNS, KC_0  , KC_1  , KC_2  , KC_3  ,
//|-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
   KC_F5  , KC_F6 , KC_F7 , KC_F8 ,KC_PAST,KC_PSLS,KC_PDOT, KC_4  , KC_5  , KC_6  ,
//|-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
   KC_F9  ,KC_F10 ,KC_F11 ,KC_F12 ,_______,KC_PEQL,_______, KC_7  , KC_8  , KC_9
//`-------+-------+-------+-------+-------+-------+-------+-------+-------+-------'
),

[_FN2] = LAYOUT_ortho_3x10(
//,-------+-------+-------+-------+-------+-------+-------+-------+-------+-------.
   KC_EXLM, KC_AT ,KC_HASH,KC_DLR ,KC_PERC,KC_CIRC,KC_AMPR,KC_ASTR,KC_LPRN,KC_RPRN,
//|-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
   _______,_______,_______,_______,_______,_______,_______,_______,KC_SCLN,KC_DQUO,
//|-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
   _______,_______,KC_GUIC,_______,_______,_______,_______,KC_DEL ,_______,_______
//`-------+-------+-------+-------+-------+-------+-------+-------+-------+-------'
),

[_FN3] = LAYOUT_ortho_3x10(
//,-------+-------+-------+-------+-------+-------+-------+-------+-------+-------.
   KC_GRV ,_______,_______,_______,_______,_______,_______,KC_LBRC,KC_RBRC,KC_BSLS,
//|-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
   KC_TAB ,_______,_______,_______,_______,KC_COMM,KC_DOT ,KC_QUES, KC_UP ,KC_QUOT,
//|-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
   _______,_______,KC_LGUI,_______,_______,_______,KC_SLSH,KC_LEFT,KC_DOWN,KC_RGHT
//`-------+-------+-------+-------+-------+-------+-------+-------+-------+-------'
),

[_FN4] = LAYOUT_ortho_3x10(
//,-------+-------+-------+-------+-------+-------+-------+-------+-------+-------.
   KC_TILD,_______,_______,_______,KC_EQL ,KC_UNDS,_______,KC_LCBR,KC_RCBR,KC_PIPE,
//|-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
   KC_TAB ,_______,_______,_______, KC_LT , KC_GT ,_______,_______,KC_COLN,KC_ELLP,
//|-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
   _______,_______,KC_GUIC,_______,_______,_______,KC_HOME,KC_PGDN,KC_PGUP,KC_END
//`-------+-------+-------+-------+-------+-------+-------+-------+-------+-------'
),

[_FN5] = LAYOUT_ortho_3x10(
//,-------+-------+-------+-------+-------+-------+-------+-------+-------+-------.
   _______,KC_RHUI,KC_RHUD,_______,_______,_______,_______,_______,_______,KC_BL_S,
//|-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
   KC_RMOD,KC_RSAI,KC_RSAD,_______,_______,_______,_______,_______,_______,KC_BL_I,
//|-------+-------+-------+-------+-------+-------+-------+-------+-------+-------|
   KC_RTOG,KC_RVAI,KC_RVAD,_______,_______,_______,_______,KC_RST ,KC_BL_B,KC_BL_D
//`-------+-------+-------+-------+-------+-------+-------+-------+-------+-------'
)
};


/*
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
  keyevent_t event = record->event;
    (void)event;

  switch (id) {

  }
  return MACRO_NONE;
}

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  return true;
}

void led_set_user(uint8_t usb_led) {

  if (usb_led & (1 << USB_LED_NUM_LOCK)) {
    DDRD |= (1 << 5); PORTD &= ~(1 << 5);
  } else {
    DDRD &= ~(1 << 5); PORTD &= ~(1 << 5);
  }

  if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
    DDRB |= (1 << 0); PORTB &= ~(1 << 0);
  } else {
    DDRB &= ~(1 << 0); PORTB &= ~(1 << 0);
  }

  if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {

  } else {

  }

  if (usb_led & (1 << USB_LED_COMPOSE)) {

  } else {

  }

  if (usb_led & (1 << USB_LED_KANA)) {

  } else {

  }

}
*/
