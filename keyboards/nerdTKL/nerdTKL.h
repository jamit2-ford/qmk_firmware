#ifndef NERDTKL_H
#define NERDTKL_H

#include "quantum.h"

// This a shortcut to help you visually see your layout.
// The following is an example using the Planck MIT layout
// The first section contains all of the arguements
// The second converts the arguments into a two-dimensional array

#define KEYMAP( \
               k08,      k09, k18, k19, k28, k29, k38, k39, k48, k49, k58, k59, k68,    k69, k88, k89, \
               k00, k01, k10, k11, k20, k21, k30, k31, k40, k41, k50, k51, k60, k61,    k80, k81, k84, \
               k02, k03, k12, k13, k22, k23, k32, k33, k42, k43, k52, k53, k62, k63,    k82, k83, k85, \
               k04, k14, k15, k24, k25, k34, k35, k44, k45, k54, k55, k64,      k65, \
               k07, k16, k17, k26, k27, k36, k37, k46, k47, k56, k57,           k66,         k86, \
               k06, k05, k78,                k70,                k72, k73, k74, k75,    k76, k77, k87 ) { \
    { k00, k10, k20, k30, k40, k50, k60, k70, k80     }, \
    { k01, k11, k21, k31, k41, k51, k61, KC_NO, k81   }, \
    { k02, k12, k22, k32, k42, k52, k62, k72, k82     }, \
    { k03, k13, k23, k33, k43, k53, k63, k73, k83     }, \
    { k04, k14, k24, k34, k44, k54, k64, k74, k84     }, \
    { k05, k15, k25, k35, k45, k55, k65, k75, k85     }, \
    { k06, k16, k26, k36, k46, k56, k66, k76, k86     }, \
    { k07, k17, k27, k37, k47, k57, KC_NO, k77, k87   }, \
    { k08, k18, k28, k38, k48, k58, k68, k78, k88     }, \
    { k09, k19, k29, k39, k49, k59, k69, KC_NO, k89   } \
}
#endif
