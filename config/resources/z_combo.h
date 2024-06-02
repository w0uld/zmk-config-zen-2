#pragma once

/* combos, idea from urob: https://github.com/urob/zmk-nodefree-config */

#define Z_ALL 0xff
#define Z_COMBO(name, combo_bindings, keypos, combo_timeout, combo_prioridle, combo_layers) \
    / { \
        combos { \
            compatible = "zmk,combos"; \
            combo_ ## name { \
                bindings = <combo_bindings>; \
                key-positions = <keypos>; \
                timeout-ms = <combo_timeout>; \
                require-prior-idle-ms = <combo_prioridle>; \
                layers = <combo_layers>; \
            }; \
        }; \
    };




/* 
// Example Usage in Keymap: 

// syntax: Z_COMBO(name, combo_bindings, keypos, combo_timeout, combo_prioridle, combo_layers)
Z_COMBO(      combo_esc,        &kp ESC,    0 1,            50,               0,        Z_ALL)

*/