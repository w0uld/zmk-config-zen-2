#pragma once

/* &kpt; keypress with tap-ms https://github.com/zmkfirmware/zmk/issues/1443 */

/ {
  behaviors {
    mtt: modtap_kpt {
      compatible = "zmk,behavior-hold-tap";
      label = "MODTAP_FOR_KPT";
      flavor = "hold-preferred";
      retro-tap;
      quick-tap-ms = <250>;
      tapping-term-ms = <200>;
      #binding-cells = <2>;
      bindings = <&kp>, <&kpt>;
    };

    ltt: layertap_kpt {
      compatible = "zmk,behavior-hold-tap";
      label = "LAYERTAP_KPT";
      flavor = "balanced";
      retro-tap;
      quick-tap-ms = <250>;
      tapping-term-ms = <200>;
      #binding-cells = <2>;
      bindings = <&mo>, <&kpt>;
    };
  };

  macros {
      kpt: kp_tap_time {
          compatible = "zmk,behavior-macro-one-param";
          label = "KPT";
          tap-ms = <10>;  // tweak as needed
          #binding-cells = <1>;
          bindings = <&macro_param_1to1>, <&kp MACRO_PLACEHOLDER>;
    };
  };

};
