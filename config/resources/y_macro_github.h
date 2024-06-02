#pragma once

/* macros */

/ {
    macros {
        macro_github: macro_github {
            compatible = "zmk,behavior-macro";
            tap-ms = <10>;
            wait-ms = <5>;
            #binding-cells = <0>;
            bindings
                = <&macro_tap &kp H &kp T &kp T &kp P &kp S &kp COLON &kp FSLH &kp FSLH>
                , <&macro_tap &kp G &kp I &kp T &kp H &kp U &kp B &kp DOT &kp C &kp O &kp M &kp FSLH>
                , <&macro_tap &kp W &kp N0 &kp U &kp L &kp D &kp FSLH>
                ;
        };
    };
};

