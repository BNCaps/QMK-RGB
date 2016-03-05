#include "keymap_common.h"

const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* 0: qwerty
     * ,-----------------------------------------------------------.  ,---.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|Yen| BS|  |PgU|
     * |-----------------------------------------------------------|  |---|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|    \|  |PgD|
     * |-----------------------------------------------------------|  `---'
     * |Caps  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '| # | Ent|
     * |--------------------------------------------------------------.
     * |Shift|Fn|  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /| Fn|Shift| Up|
     * |------------------------------------------------------------------.
     * |Ctrl|Alt|Gui |MHen| Space| Space|Henk|Gui |Ctrl|  Fn|Left|Down|Rgt|
     * `------------------------------------------------------------------'
     */
    KEYMAP(
        ESC, 1,   2,   3,   4,   5,   6,   7,   8,   9,   0,   MINS,EQL, JYEN,BSPC, PGUP, \
        TAB, Q,   W,   E,   R,   T,   Y,   U,   I,   O,   P,   LBRC,RBRC,BSLS,      PGDN, \
        LCTL,A,   S,   D,   F,   G,   H,   J,   K,   L,   SCLN,QUOT,NUHS,ENT,  \
        LSFT, FN0,Z,   X,   C,   V,   B,   N,   M,   COMM,DOT, SLSH, FN0,RSFT,  UP, \
        LCTL,LALT,LGUI,MHEN,     SPC, SPC,      HENK,RGUI,RCTL,FN0,      LEFT,DOWN,RGHT),
    /* 1: Fn Layer
     * ,-----------------------------------------------------------.   ,---.
     * |  `| F1| F2| F3| F4| F5| F6| F7| F8| F9|F10|F11|F12|   |Del|   |   |
     * |-----------------------------------------------------------|   |---|
     * |     |   |   |   |   |   |   |   |Psc|Slk|Pau|   |   |     |   |   |
     * |-----------------------------------------------------------|   `---'
     * |      |   |   |   |   |   |   |   | Hm|PgU|   |   |   |    |
     * |--------------------------------------------------------------.
     * |    |Fn0|   |   |   |   |   |   |   |End|PgD|   |Fn0|    |PgUp|
     * |-------------------------------------------------------------------.
     * |    |   |    |    |      |      |    |    |    | Fn0|Home|PgDn|End |
     * `-------------------------------------------------------------------'
     */
    KEYMAP(
        GRV, F1,  F2,  F3,  F4,  F5,  F6,  F7,  F8,  F9,  F10, F11, F12, TRNS, DEL,TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,PSCR,SLCK,PAUS,TRNS,TRNS,TRNS,     TRNS, \
        TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,HOME,PGUP,TRNS,TRNS,TRNS,TRNS, \
        TRNS, FN0,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS,TRNS, END,PGDN, FN0,TRNS,PGUP, \
        TRNS,TRNS,TRNS,TRNS,     TRNS,TRNS,     TRNS,TRNS,TRNS, FN0,     HOME,PGDN, END)
};
const uint16_t PROGMEM fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),  // to Fn overlay
    [1] = ACTION_MODS_KEY(MOD_RCTL|MOD_RSFT, KC_ESC) // Task(RControl,RShift+Esc)
};
