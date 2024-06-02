#pragma once

/* autoshift, idea from 'nickcoutsos': https://github.com/nickcoutsos/keymap-editor/wiki/Autoshift-using-ZMK-behaviors */

/ {
  behaviors {
    as_ht: autoshift_hold_tap {
      compatible = "zmk,behavior-hold-tap";
      flavor = "tap-preferred";
      quick-tap-ms = <250>;
      tapping-term-ms = <200>;
      #binding-cells = <2>;
      bindings = <&shifted>, <&kp>;
    };
  };

  macros {
    shifted: macro_shifted_kp {
      #binding-cells = <1>;
      compatible = "zmk,behavior-macro-one-param";
      tap-ms = <10>;
      wait-ms = <5>;
      bindings =
        <&macro_press &kp LSHFT>,
        <&macro_param_1to1 &macro_tap &kp MACRO_PLACEHOLDER>,
        <&macro_release &kp LSHFT>;
    };

    as: autoshift {
      compatible = "zmk,behavior-macro-one-param";
      #binding-cells = <1>;
      bindings =
        <&macro_press>,
        <&macro_param_1to1>,
        <&macro_param_1to2>,
        <&as_ht MACRO_PLACEHOLDER MACRO_PLACEHOLDER>,
        <&macro_pause_for_release>,
        <&macro_release>,
        <&macro_param_1to1>,
        <&macro_param_1to2>,
        <&as_ht MACRO_PLACEHOLDER MACRO_PLACEHOLDER>;
    };
  };
};