#pragma once

/* unicode, copied & modified from urob: https://github.com/urob/zmk-nodefree-config */

/* define the following variables BEFORE loading the module: 
 * HOST_OS (will default to "else if undefined")
 * Z_UNICODE_LEAD  for custom binds (assuming HOST_OS == 9)
 * Z_UNICODE_TRAIL for custom binds (assuming HOST_OS == 9)
 */

/* ZMK_UNICODE */

#if !defined OS_UNICODE_LEAD
    #if HOST_OS == 2
        #define OS_UNICODE_LEAD &macro_press &kp LALT      // macOS/Windows-Alt-Codes
    #elif HOST_OS == 1
        #define OS_UNICODE_LEAD &macro_tap &kp LS(LC(U))   // Linux
    #elif HOST_OS == 9
        #define OS_UNICODE_LEAD &macro_tap Z_UNICODE_LEAD  // Configurable approach; define before including this module
    #else
        #define OS_UNICODE_LEAD &macro_tap &kp RALT &kp U  // Windows + WinCompose (default)
    #endif
#endif
#if !defined OS_UNICODE_TRAIL
    #if HOST_OS == 2
        #define OS_UNICODE_TRAIL &macro_release &kp LALT    // macOS/Windows-Alt-Codes
    #elif HOST_OS == 1
        #define OS_UNICODE_TRAIL &macro_tap &kp SPACE       // Linux
    #elif HOST_OS == 9
        #define OS_UNICODE_TRAIL &macro_tap Z_UNICODE_TRAIL // Configurable approach; define before including this module
    #else
        #define OS_UNICODE_TRAIL &macro_tap &kp RET         // Windows + WinCompose (default)
    #endif
#endif

#define UC_MACRO(name, unicode_bindings) \
    / { \
        macros { \
            name: name { \
                compatible = "zmk,behavior-macro"; \
                label = ZMK_MACRO_STRINGIFY(UC_MACRO_ ## name); \
                wait-ms = <0>; \
                tap-ms = <0>; \
                #binding-cells = <0>; \
                bindings = <OS_UNICODE_LEAD>, <&macro_tap unicode_bindings>, <OS_UNICODE_TRAIL>; \
            }; \
        }; \
    };

#define UC_MODMORPH(name, uc_binding, shifted_uc_binding) \
    / { \
        behaviors { \
            name: name { \
                compatible = "zmk,behavior-mod-morph"; \
                label = ZMK_MACRO_STRINGIFY(UC_MORPH_ ## name); \
                #binding-cells = <0>; \
                bindings = <uc_binding>, <shifted_uc_binding>; \
                mods = <(MOD_LSFT|MOD_RSFT)>; \
            }; \
        }; \
    };

#define ZMK_UNICODE_SINGLE(name, L0, L1, L2, L3) \
    UC_MACRO(name ## _lower, &kp L0 &kp L1 &kp L2 &kp L3) \
    UC_MODMORPH(name, &name ## _lower, &none)

#define ZMK_UNICODE_PAIR(name, L0, L1, L2, L3, U0, U1, U2, U3) \
    UC_MACRO(name ## _lower, &kp L0 &kp L1 &kp L2 &kp L3) \
    UC_MACRO(name ## _upper, &kp U0 &kp U1 &kp U2 &kp U3) \
    UC_MODMORPH(name, &name ## _lower, &name ## _upper)
