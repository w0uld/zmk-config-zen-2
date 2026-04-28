#pragma once

/* idea from ZMK documentation: https://zmk.dev/docs/behaviors/hold-tap */

#define AST(keycode) &ast LS(keycode) keycode     // Autoshift Macro

/ {
    behaviors {
        ast: auto_shift_trans {
            compatible = "zmk,behavior-hold-tap";
            #binding-cells = <2>;
            tapping-term-ms = <250>;
            quick-tap-ms = <200>;
            flavor = "tap-preferred";
            bindings = <&trans>, <&trans>;
        };
    };
};