#include "keymap_common.h"

/*
 * SpaceFN
 * http://geekhack.org/index.php?topic=51069.0
 */
const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Keymap 0: Default Layer
      * ,-----------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  `|Bsp|
     * |-----------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \|
     * |-----------------------------------------------------------|
     * |CAPS  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Return  |
     * |-----------------------------------------------------------|
     * |Shift   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift| FN1|
     * |-----------------------------------------------------------|
     * |Ctrl|Alt |Cmd |      Space             |Alt |Gui |Caps|Ctrl|
     * `-----------------------------------------------------------'
     */
    KEYMAP_HHKB(
        ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, BSPC, BSPC, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS, \
        CAPS,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,     ENT,  \
        LSFT,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH,     RSFT,FN1,  \
        LCTL,LALT,LGUI,          FN0,                     RALT,RGUI,CAPS,RCTL),


    /* Overlay 1: SpaceFN
     * ,-----------------------------------------------------------.
     * |`  | F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|Del|Del|
     * |-----------------------------------------------------------|
     * |     |   |PgU|   |   |   |   |   |   |   |Psc|Slk|Pau|Ins  |
     * |-----------------------------------------------------------|
     * |      |Hom|PgD|End|   |   |Lef|Dow|Up |Rig|   |   |Enter   |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |Spc|   |`  |~  |   |   |     |    |
     * |-----------------------------------------------------------|
     * |    |    |    |                        |    |    |    |    |
     * `-----------------------------------------------------------'
     */
    KEYMAP_HHKB(
        GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, DEL, DEL, \
        TRNS,TRNS,PGUP,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PSCR,SLCK,PAUS,INS,  \
        TRNS,HOME,PGDN,END, TRNS,TRNS,LEFT,DOWN,UP,  RGHT,TRNS,TRNS,     PENT, \
        TRNS,TRNS,TRNS,TRNS,TRNS,SPC, TRNS,GRV, FN2, TRNS,TRNS,     TRNS,TRNS, \
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS),

    /* Overlay 2: MouseKey
     * ,-----------------------------------------------------------.
     * |   |F14|F15|FN3|FN4|   |   |PRV|PLY|NXT|Mut|VoD|VlU|   |   |
     * |-----------------------------------------------------------|
     * |     |Mb2|MUp|Mb1|WUp|   |   |   | Up|   |   |   |   |     |
     * |-----------------------------------------------------------|
     * |      |MLf|MDn|MDn|WDn|   |   |Lef|Dow|Rig|   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |   |     |    |
     * |-----------------------------------------------------------|
     * |    |    |    |         Mb1            |    |    |    |    |
     * `-----------------------------------------------------------'
     */
    KEYMAP_HHKB(
        TRNS,F14, F15, FN3, FN4, TRNS,TRNS,MPRV,MPLY,MNXT,MUTE,VOLD,VOLU,TRNS,TRNS, \
        TRNS,BTN2,MS_U,BTN1,WH_U,TRNS,TRNS,TRNS,UP,  TRNS,TRNS,TRNS,TRNS,TRNS,      \
        TRNS,MS_L,MS_D,MS_R,WH_D,TRNS,TRNS,LEFT,DOWN,RGHT,TRNS,TRNS,     TRNS,      \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,      \
        TRNS,TRNS,TRNS,          BTN1,                    TRNS,TRNS,TRNS,TRNS),

    /* Overlay X: xxxxxx
     * ,-----------------------------------------------------------.
     * |   |   |   |   |   |   |   |   |   |   |   |   |   |   |   |
     * |-----------------------------------------------------------|
     * |     |   |   |   |   |   |   |   |   |   |   |   |   |     |
     * |-----------------------------------------------------------|
     * |      |   |   |   |   |   |   |   |   |   |   |   |        |
     * |-----------------------------------------------------------|
     * |        |   |   |   |   |   |   |   |   |   |   |     |    |
     * |-----------------------------------------------------------|
     * |    |    |    |                        |    |    |    |    |
     * `-----------------------------------------------------------'
     */
/*
    KEYMAP_HHKB(
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,      \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,      \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,      \
        TRNS,TRNS,TRNS,          TRNS,                    TRNS,TRNS,TRNS,TRNS),
*/
};

/*
 * Fn action definition
 */
const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_TAP_KEY(1, KC_SPACE),                                // SPACE LAYER
    [1] = ACTION_LAYER_MOMENTARY(2),                                        // MOUSE LAYER
    [2] = ACTION_MODS_KEY(MOD_LSFT, KC_GRV),                                // tilde
    [3] = ACTION_MODS_KEY(MOD_LCTL, KC_UP),                                 // Mission Control
    [4] = ACTION_MODS_KEY(MOD_LALT|MOD_LGUI, KC_L),                         // LaunchCenter
};
