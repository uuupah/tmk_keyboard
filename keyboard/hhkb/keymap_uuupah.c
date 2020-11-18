#include "keymap_common.h"

#ifdef KEYMAP_SECTION_ENABLE
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] __attribute__ ((section (".keymap.keymaps"))) = {
#else
const uint8_t keymaps[][MATRIX_ROWS][MATRIX_COLS] PROGMEM = {
#endif
	[0] = KEYMAP ( \
		ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSLS,DEL,  \
		TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,/**/ BSPC, \
		LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,/**/ /**/ FN1,  \
		LSFT,/**/ Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,/**/ RSFT,FN0,  \
		/**/ LGUI,LALT,/**/ /**/ SPC, /**/ /**/ /**/ /**/ /**/ RALT,RGUI /**/ /**/  ),
		
	[1] = KEYMAP ( \
		GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, INS, DEL,  \
    CAPS,MPLY,VOLU,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,UP,  PSCR,/**/ TRNS, \
    TRNS,MPRV,MNXT,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,LEFT,RGHT,/**/ /**/ TRNS, \
    TRNS,/**/ TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,DOWN,/**/ TRNS,TRNS, \
    /**/ TRNS,TRNS,/**/ /**/ TRNS,/**/ /**/ /**/ /**/ /**/ TRNS,TRNS /**/ /**/  ),
    
  [2] = KEYMAP ( \
		TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PGUP,TRNS,/**/ TRNS, \
    TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,HOME,END ,/**/ /**/ TRNS, \
    TRNS,/**/ TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PGDN,/**/ TRNS,TRNS, \
    /**/ TRNS,TRNS,/**/ /**/ TRNS,/**/ /**/ /**/ /**/ /**/ TRNS,TRNS /**/ /**/  ),
};

// Fn action definition
const action_t PROGMEM fn_actions[] = {
    ACTION_LAYER_MOMENTARY(1),
    ACTION_LAYER_TAP_KEY(2, KC_ENT),
};
