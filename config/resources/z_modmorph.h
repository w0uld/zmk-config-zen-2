#include <behaviors.dtsi>
#include <dt-bindings/zmk/keys.h>

/* mod-morph, idea from caksoylar: https://github.com/caksoylar */

#define Z_ACCENT(name, regular_binding, morph_binding, morph_mods, keep_mods) \
    / { \
        behaviors { \
            name: name { \
                compatible = "zmk,behavior-mod-morph"; \
                label = ZMK_MACRO_STRINGIFY(accent_ ## name); \
                #binding-cells = <0>; \
                bindings = <&kp regular_binding>, <&kp morph_binding>; \
                mods = <(MOD_RALT)>; \
                keep-mods = <keep_mods>; \
            }; \
        }; \
    };
