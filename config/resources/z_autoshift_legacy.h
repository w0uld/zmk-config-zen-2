#pragma once

/* idea from ZMK documentation: https://zmk.dev/docs/behaviors/hold-tap */

/* autoshift */
#define AS(keycode) &z_autoshift LS(keycode) keycode

ZMK_BEHAVIOR(z_autoshift, hold_tap,
    flavor = "tap-preferred";
    quick-tap-ms = <_QUIKTAP_MS>;
    tapping-term-ms = <_TAPTERM_MS>;
    bindings = <&kp>, <&kp>;
)

