// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define HYPER LGUI(LCTRL(LALT(LSHFT)))
#define U_HML(LAYER, TAP) &hml LAYER TAP
#define U_HMR(LAYER, TAP) &hmr LAYER TAP

#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
U_HML(LGUI, A),    U_HML(LALT, R),    U_HML(LCTRL, S),   U_HML(LSHFT, T),   U_HML(HYPER, G),   U_HMR(HYPER, M),   U_HMR(LSHFT, N),   U_HMR(LCTRL, E),   U_HMR(LALT, I),    U_HMR(LGUI, O),    \
U_LT(U_BUTTON, Z), U_MT(RALT, X),     &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              U_LT(U_MEDIA, ESC),U_LT(U_NAV, SPACE),U_LT(U_MOUSE, TAB),U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

