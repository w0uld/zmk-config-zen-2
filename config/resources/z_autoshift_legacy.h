#pragma once

/* idea from ZMK documentation: https://zmk.dev/docs/behaviors/hold-tap */

#define AS(keycode) &as LS(keycode) keycode     // Autoshift Macro

/ {
    behaviors {
        as: auto_shift {
            compatible = "zmk,behavior-hold-tap";
            #binding-cells = <2>;
            tapping_term_ms = <250>;
            quick_tap_ms = <200>;
            flavor = "tap-preferred";
            bindings = <&kp>, <&kp>;
        };
    };
};