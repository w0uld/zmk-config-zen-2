#pragma once

#include <behaviors.dtsi>
#include <dt-bindings/zmk/keys.h>

/* mod-morph, idea from caksoylar: https://github.com/caksoylar */

#define Z_MODMORPH(name, regular_binding, morph_binding, morph_mods) \
    / { \
        behaviors { \
            name: name { \
                compatible = "zmk,behavior-mod-morph"; \
                label = ZMK_MACRO_STRINGIFY(accent_ ## name); \
                #binding-cells = <0>; \
                bindings = <&kp regular_binding>, <&kp morph_binding>; \
                mods = <morph_mods>; \
            }; \
        }; \
    };
