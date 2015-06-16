static const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    // Layer 0 - Modified Programmer Dvorak
    //
    // Requires a custom xkb qwerty keymap with num keys remapped to symbols
    // ÅØÆÉ available with AltGr

    /*
    * ┌────────┬─────┬─────┬─────┬─────┬─────┬─────┐        ┌─────┬─────┬─────┬─────┬─────┬─────┬────────┐
    * │  $  ~  │  &  │  [  │  {  │  (  │  =  │ L4  │        │ # ` │  +  │  )  │  }  │  ]  │  *  │  !  %  │
    * ├────────┼─────┼─────┼─────┼─────┼─────┼─────┤        ├─────┼─────┼─────┼─────┼─────┼─────┼────────┤
    * │ Tab    │ ; : │ , < │ . > │  P  │  Y  │     │        │     │  F  │  G  │  C  │  R  │  L  │  /  ?  │
    * ├────────┼─────┼─────┼─────┼─────┼─────┤     │        │     ├─────┼─────┼─────┼─────┼─────┼────────┤
    * │ LCtrl  │ A Å │ O Ø │ E Æ │ U É │  I  ├─────┤        ├─────┤  D  │  H  │  T  │  N  │  S  │  -  _  │
    * ├────────┼─────┼─────┼─────┼─────┼─────┤     │        │     ├─────┼─────┼─────┼─────┼─────┼────────┤
    * │ LShift │ " ' │  Q  │  J  │  K  │  X  │     │        │     │  B  │  M  │  W  │  V  │  Z  │  \  |  │
    * └──┬─────┼─────┼─────┼─────┼─────┼─────┴─────┘        └─────┴─────┼─────┼─────┼─────┼─────┼─────┬──┘
    *    │ L1  │ L2  │ L3  │AltGr│Supr │ ┌─────┬─────┐    ┌─────┬─────┐ │BkSp │ Del │ @ ^ │     │ L1  │
    *    └─────┴─────┴─────┴─────┴─────┘ │PgUp │PgDn │    │Home │End  │ └─────┴─────┴─────┴─────┴─────┘
    *                              ┌─────┼─────┼─────┤    ├─────┼─────┼─────┐
    *                              │Space│Meta │     │    │     │Esc  │ Ret │
    *                              │     │     ├─────┤    ├─────┤     │     │
    *                              │     │     │     │    │     │     │     │
    *                              └─────┴─────┴─────┘    └─────┴─────┴─────┘
    */
    KEYMAP(
        // Left hand
        GRV , 1   , 2   , 3   , 4   , 5   , FN23,
        TAB , SCLN, COMM, DOT , P   , Y   , NO  ,
        LCTL, A   , O   , E   , U   , I   ,
        LSFT, QUOT, Q   , J   , K   , X   , NO  ,
        FN20, FN21, FN22, RALT, LGUI,

              PGUP, PGDN,
                    NO  ,
        SPC , LALT, NO  ,

        // Right hand
        EQL , 6   , 7   , 8   , 9   , 0   , LBRC,
        NO  , F   , G   , C   , R   , L   , SLSH,
              D   , H   , T   , N   , S   , MINS,
        NO  , B   , M   , W   , V   , Z   , BSLS,
                    BSPC, DEL , RBRC, NO  , FN20,

        HOME, END ,
        NO  ,
        NO  , ESC , ENT
    ),

    // Layer 1 - Numpad / F keys / Misc
    /*
    * ┌────────┬─────┬─────┬─────┬─────┬─────┬─────┐        ┌─────┬─────┬─────┬─────┬─────┬─────┬────────┐
    * │ Teensy │ F1  │ F2  │ F3  │ F4  │ F5  │ F11 │        │ F12 │ F6  │ F7  │ F8  │ F9  │ F10 │ NumLk  │
    * ├────────┼─────┼─────┼─────┼─────┼─────┼─────┤        ├─────┼─────┼─────┼─────┼─────┼─────┼────────┤
    * │        │Prev │Play │Next │     │     │     │        │     │  /  │  1  │  2  │  3  │  -  │        │
    * ├────────┼─────┼─────┼─────┼─────┼─────┤     │        │     ├─────┼─────┼─────┼─────┼─────┼────────┤
    * │        │  ←  │  ↓  │  ↑  │  →  │     ├─────┤        ├─────┤  *  │  4  │  5  │  6  │  +  │        │
    * ├────────┼─────┼─────┼─────┼─────┼─────┤     │        │     ├─────┼─────┼─────┼─────┼─────┼────────┤
    * │        │     │     │     │     │     │     │        │     │     │  7  │  8  │  9  │ Ret │        │
    * └──┬─────┼─────┼─────┼─────┼─────┼─────┴─────┘        └─────┴─────┼─────┼─────┼─────┼─────┼─────┬──┘
    *    │     │     │     │     │     │ ┌─────┬─────┐    ┌─────┬─────┐ │  0  │  ,  │  .  │     │     │
    *    └─────┴─────┴─────┴─────┴─────┘ │     │     │    │     │     │ └─────┴─────┴─────┴─────┴─────┘
    *                              ┌─────┼─────┼─────┤    ├─────┼─────┼─────┐
    *                              │     │     │     │    │     │ 000 │ 00  │
    *                              │     │     ├─────┤    ├─────┤     │     │
    *                              │     │     │     │    │     │     │     │
    *                              └─────┴─────┴─────┘    └─────┴─────┴─────┘
    */
    KEYMAP(
        // Left hand
        FN0 , F1  , F2  , F3  , F4  , F5  , F11 ,
        NO  , MPRV, MPLY, MNXT, NO  , NO  , NO  ,
        NO  , LEFT, DOWN, UP  , RGHT, NO  ,
        NO  , NO  , NO  , NO  , NO  , NO  , NO  ,
        TRNS, TRNS, TRNS, TRNS, TRNS,

              TRNS, TRNS,
                    TRNS,
        TRNS, TRNS, TRNS,

        // Right hand
        F12 , F6  , F7  , F8  , F9  , F10 , NLCK,
        NO  , PSLS, P7  , P8  , P9  , PMNS, NO  ,
              PAST, P4  , P5  , P6  , PPLS, NO  ,
        NO  , NO  , P1  , P2  , P3  , PENT, NO  ,
                    P0  , COMM, PDOT, TRNS, TRNS,

        NO  , NO  ,
        NO  ,
        NO  , FN0 , FN1
    ),

    // TODO Layer 2 - QWERTY/gaming
    /*
    * ┌────────┬─────┬─────┬─────┬─────┬─────┬─────┐        ┌─────┬─────┬─────┬─────┬─────┬─────┬────────┐
    * │        │  1  │  2  │  3  │  4  │  5  │     │        │     │  6  │  7  │  8  │  9  │  0  │        │
    * ├────────┼─────┼─────┼─────┼─────┼─────┼─────┤        ├─────┼─────┼─────┼─────┼─────┼─────┼────────┤
    * │        │  Q  │  W  │  E  │  R  │  T  │     │        │     │  Y  │  U  │  I  │  O  │  P  │        │
    * ├────────┼─────┼─────┼─────┼─────┼─────┤     │        │     ├─────┼─────┼─────┼─────┼─────┼────────┤
    * │        │  A  │  S  │  D  │  F  │  G  ├─────┤        ├─────┤  H  │  J  │  K  │  L  │     │        │
    * ├────────┼─────┼─────┼─────┼─────┼─────┤     │        │     ├─────┼─────┼─────┼─────┼─────┼────────┤
    * │        │  Z  │  X  │  C  │  V  │  B  │     │        │     │  N  │  M  │ , ; │ . : │ - _ │        │
    * └──┬─────┼─────┼─────┼─────┼─────┼─────┴─────┘        └─────┴─────┼─────┼─────┼─────┼─────┼─────┬──┘
    *    │     │     │     │     │     │ ┌─────┬─────┐    ┌─────┬─────┐ │     │     │     │     │     │
    *    └─────┴─────┴─────┴─────┴─────┘ │     │     │    │     │     │ └─────┴─────┴─────┴─────┴─────┘
    *                              ┌─────┼─────┼─────┤    ├─────┼─────┼─────┐
    *                              │ Spc │     │     │    │     │     │     │
    *                              │     │     ├─────┤    ├─────┤     │     │
    *                              │     │     │     │    │     │     │     │
    *                              └─────┴─────┴─────┘    └─────┴─────┴─────┘
    */
    KEYMAP(
        // Left hand
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
        TRNS, TRNS, TRNS, TRNS, TRNS,

              TRNS, TRNS,
                    TRNS,
        TRNS, TRNS, TRNS,

        // Right hand
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
              TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
                    TRNS, TRNS, TRNS, TRNS, TRNS,

        TRNS, TRNS,
        TRNS,
        TRNS, TRNS, TRNS
    ),

    // TODO Layer 3 - Macros
    /*
    * ┌────────┬─────┬─────┬─────┬─────┬─────┬─────┐        ┌─────┬─────┬─────┬─────┬─────┬─────┬────────┐
    * │        │     │     │     │     │     │     │        │     │     │     │     │     │     │        │
    * ├────────┼─────┼─────┼─────┼─────┼─────┼─────┤        ├─────┼─────┼─────┼─────┼─────┼─────┼────────┤
    * │        │     │     │     │     │     │     │        │     │     │     │     │     │     │        │
    * ├────────┼─────┼─────┼─────┼─────┼─────┤     │        │     ├─────┼─────┼─────┼─────┼─────┼────────┤
    * │        │     │     │     │     │     ├─────┤        ├─────┤     │     │     │     │     │        │
    * ├────────┼─────┼─────┼─────┼─────┼─────┤     │        │     ├─────┼─────┼─────┼─────┼─────┼────────┤
    * │        │     │     │     │     │     │     │        │     │     │     │     │     │     │        │
    * └──┬─────┼─────┼─────┼─────┼─────┼─────┴─────┘        └─────┴─────┼─────┼─────┼─────┼─────┼─────┬──┘
    *    │     │     │     │     │     │ ┌─────┬─────┐    ┌─────┬─────┐ │     │     │     │     │     │
    *    └─────┴─────┴─────┴─────┴─────┘ │     │     │    │     │     │ └─────┴─────┴─────┴─────┴─────┘
    *                              ┌─────┼─────┼─────┤    ├─────┼─────┼─────┐
    *                              │     │     │     │    │     │     │     │
    *                              │     │     ├─────┤    ├─────┤     │     │
    *                              │     │     │     │    │     │     │     │
    *                              └─────┴─────┴─────┘    └─────┴─────┴─────┘
    */
    KEYMAP(
        // Left hand
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
        TRNS, TRNS, TRNS, TRNS, TRNS,

              TRNS, TRNS,
                    TRNS,
        TRNS, TRNS, TRNS,

        // Right hand
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
              TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
                    TRNS, TRNS, TRNS, TRNS, TRNS,

        TRNS, TRNS,
        TRNS,
        TRNS, TRNS, TRNS
    ),

    // TODO Layer 4 - Symbols/misc
    /*
    * ┌────────┬─────┬─────┬─────┬─────┬─────┬─────┐        ┌─────┬─────┬─────┬─────┬─────┬─────┬────────┐
    * │        │     │     │     │     │     │     │        │     │     │     │     │     │     │        │
    * ├────────┼─────┼─────┼─────┼─────┼─────┼─────┤        ├─────┼─────┼─────┼─────┼─────┼─────┼────────┤
    * │        │     │     │     │     │     │     │        │     │     │     │     │     │     │        │
    * ├────────┼─────┼─────┼─────┼─────┼─────┤     │        │     ├─────┼─────┼─────┼─────┼─────┼────────┤
    * │        │     │     │     │     │     ├─────┤        ├─────┤     │     │     │     │     │        │
    * ├────────┼─────┼─────┼─────┼─────┼─────┤     │        │     ├─────┼─────┼─────┼─────┼─────┼────────┤
    * │        │     │     │     │     │     │     │        │     │     │     │     │     │     │        │
    * └──┬─────┼─────┼─────┼─────┼─────┼─────┴─────┘        └─────┴─────┼─────┼─────┼─────┼─────┼─────┬──┘
    *    │     │     │     │     │     │ ┌─────┬─────┐    ┌─────┬─────┐ │     │     │     │     │     │
    *    └─────┴─────┴─────┴─────┴─────┘ │     │     │    │     │     │ └─────┴─────┴─────┴─────┴─────┘
    *                              ┌─────┼─────┼─────┤    ├─────┼─────┼─────┐
    *                              │     │     │     │    │     │     │     │
    *                              │     │     ├─────┤    ├─────┤     │     │
    *                              │     │     │     │    │     │     │     │
    *                              └─────┴─────┴─────┘    └─────┴─────┴─────┘
    */
    KEYMAP(
        // Left hand
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
        TRNS, TRNS, TRNS, TRNS, TRNS,

              TRNS, TRNS,
                    TRNS,
        TRNS, TRNS, TRNS,

        // Right hand
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
              TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
        TRNS, TRNS, TRNS, TRNS, TRNS, TRNS, TRNS,
                    TRNS, TRNS, TRNS, TRNS, TRNS,

        TRNS, TRNS,
        TRNS,
        TRNS, TRNS, TRNS
    ),
};

enum function_id {
    F_TEENSY_KEY,
};

enum macro_id {
    M_DOUBLE_ZERO,
    M_TRIPLE_ZERO,
};

static const uint16_t PROGMEM fn_actions[] = {
    [0] =   ACTION_FUNCTION(F_TEENSY_KEY),                    // FN0  - Teensy key

    [20] =  ACTION_LAYER_MOMENTARY(1),
    [21] =  ACTION_LAYER_SET(2, ON_PRESS),
    [22] =  ACTION_LAYER_MOMENTARY(3),
    [23] =  ACTION_LAYER_MOMENTARY(4),
};

static const uint16_t PROGMEM fn_actions_1[] = {
    [0] = ACTION_MACRO(M_DOUBLE_ZERO),
    [1] = ACTION_MACRO(M_TRIPLE_ZERO),
};

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    // print("action_function called\n");
    // print("id  = "); phex(id); print("\n");
    // print("opt = "); phex(opt); print("\n");

    if (id == F_TEENSY_KEY) {
        clear_keyboard();
        print("\n\nJump to bootloader... ");
        _delay_ms(500);
        bootloader_jump(); // should not return
        print("not supported.\n");
    }
}

#define FN_ACTIONS_SIZE (sizeof(fn_actions) / sizeof(fn_actions[0]))
#define FN_ACTIONS_1_SIZE (sizeof(fn_actions_1) / sizeof(fn_actions_1[0]))

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {
    if (record->event.pressed) {
        switch (id) {
        case M_DOUBLE_ZERO: return MACRO(T(0), T(0), END);
        case M_TRIPLE_ZERO: return MACRO(T(0), T(0), T(0), END);
        }
    }
    return MACRO_NONE;
}

/*
* translates Fn keycode to action
* for some layers, use different translation table
*/
action_t keymap_fn_to_action(uint8_t keycode)
{
    uint8_t layer = biton32(layer_state);
    action_t action;
    action.code = ACTION_NO;

    if (layer == 1 && FN_INDEX(keycode) < FN_ACTIONS_1_SIZE) {
        action.code = pgm_read_word(&fn_actions_1[FN_INDEX(keycode)]);
    }

    // by default, use fn_actions from default layer 0
    // this is needed to get mapping for same key, that was used switch to some layer,
    // to have possibility to switch layers back
    if (action.code == ACTION_NO && FN_INDEX(keycode) < FN_ACTIONS_SIZE) {
         action.code = pgm_read_word(&fn_actions[FN_INDEX(keycode)]);
    }

    return action;
}
