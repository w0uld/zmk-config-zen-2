#pragma once

/* hold-tap preprocessor macro */
#if !defined CUSTOM_HOOK
    #define CUSTOM_HOOK

#define Z_HOLDTAP(name, bind_hold, bind_tap, flavor, quicktap_ms, tapterm_ms, CUSTOM_HOOK) \
    / { \
        behaviors { \
            name: name { \
                compatible = "zmk,behavior-hold-tap"; \
                label = ZMK_MACRO_STRINGIFY(holdtap_ ## name); \
                #binding-cells = <2>; \
                bindings = <bind_hold>, <bind_tap>; \
                flavor = <morph_mods>; \
                quick_tap_ms = <_TIME_ZERO>; \
                tapping_term_ms = <_TAPTERM_MS>; \
                CUSTOM_HOOK \
            }; \
        }; \
    };

