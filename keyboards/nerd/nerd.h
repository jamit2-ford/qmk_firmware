#ifndef NERD_H
#define NERD_H

#include "quantum.h"

/* GON NerD TKL/80% keymap definition macro */
#define KEYMAP( \
        k08,      k09, k18, k19, k28, k29, k38, k39, k48, k49, k58, k59, k68,    k69, k88, k89, \
        k00, k01, k10, k11, k20, k21, k30, k31, k40, k41, k50, k51, k60, k61,    k80, k81, k84, \
        k02, k03, k12, k13, k22, k23, k32, k33, k42, k43, k52, k53, k62, k63,    k82, k83, k85, \
        k04, k14, k15, k24, k25, k34, k35, k44, k45, k54, k55, k64,      k65,                   \
        k07,      k16, k17, k26, k27, k36, k37, k46, k47, k56, k57, k66,              k86,      \
        k06, k05, k78,                k70,                k72, k73, k74, k75,    k76, k77, k87  \
) \
  { \
    { k00, k01,   k02, k03, k04, k05, k06, k07,   k08, k09   }, \
    { k10, k11,   k12, k13, k14, k15, k16, k17,   k18, k19   }, \
    { k20, k21,   k22, k23, k24, k25, k26, k27,   k28, k29   }, \
    { k30, k31,   k32, k33, k34, k35, k36, k37,   k38, k39   }, \
    { k40, k41,   k42, k43, k44, k45, k46, k47,   k48, k49   }, \
    { k50, k51,   k52, k53, k54, k55, k56, k57,   k58, k59   }, \
    { k60, k61,   k62, k63, k64, k65, k66, KC_NO, k68, k69   }, \
    { k70, KC_NO, k72, k73, k74, k75, k76, k77,   k78, KC_NO }, \
    { k80, k81,   k82, k83, k84, k85, k86, k87,   k88, k89   }  \
}

#endif
