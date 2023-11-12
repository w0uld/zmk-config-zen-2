#pragma once

#include <behaviors.dtsi>
#include <dt-bindings/zmk/keys.h>

/* num_word: https://github.com/zmkfirmware/zmk/pull/1451 */

/ {
    behaviors {
        num_word: behavior_num_word {
            compatible = "zmk,behavior-caps-word";
            label = "NUM_WORD";
            #binding-cells = <0>;
            layers = <NUM>;                                // insert location of numbers layer here
//          continue-list = <BACKSPACE DELETE DOT COMMA>;  // adjust as desired
//          ignore-numbers;                                // numbers don't deactivate the layer; needs PR1451 to be merged
        };
    };
};
