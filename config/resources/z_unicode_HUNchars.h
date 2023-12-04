/* unicode, uses z_unicode.h, requires WinCompose */
// syntax for regular case:  #define ZMK_UNICODE_SINGLE(name, L0, L1, L2, L3) 
// syntax for low/uppercase: #define   ZMK_UNICODE_PAIR(name, L0, L1, L2, L3, U0, U1, U2, U3)
ZMK_UNICODE_PAIR(hu_a_a,        N0, N0,  E, N1,         N0, N0,  C, N1) // á/Á
ZMK_UNICODE_PAIR(hu_e_a,        N0, N0,  E, N9,         N0, N0,  C, N9) // é/É
ZMK_UNICODE_PAIR(hu_i_a,        N0, N0,  E,  D,         N0, N0,  C,  D) // í/Í
ZMK_UNICODE_PAIR(hu_o_a,        N0, N0,  F, N3,         N0, N0,  D, N3) // ó/Ó
ZMK_UNICODE_PAIR(hu_u_a,        N0, N0,  F,  A,         N0, N0,  D,  A) // ú/Ú
ZMK_UNICODE_PAIR(hu_o_di,       N0, N0,  F, N6,         N0, N0,  D, N6) // ö/Ö
ZMK_UNICODE_PAIR(hu_o_da,       N0, N1, N5, N1,         N0, N1, N5, N0) // ő/Ő
ZMK_UNICODE_PAIR(hu_u_di,       N0, N0,  F,  C,         N0, N0,  D,  C) // ü/Ü
ZMK_UNICODE_PAIR(hu_u_da,       N0, N1, N7, N1,         N0, N1, N7, N0) // ű/Ű



