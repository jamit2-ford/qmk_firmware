#ifndef PHANTOM_H
#define PHANTOM_H

#include "quantum.h"

/* Phantom matrix layout
   * ,-----------------------------------------------------------------------------.
   * |00   |02| 03| 04| 05|  | 06| 07| 08| 09|   | 0a|0b |0c |0d |  |0e  |0f  |0g  |
   * |-----------------------------------------------------------|  |--------------|
   * | 01| 10| 11| 12| 13| 14| 15| 16| 17| 18| 19| 1a| 1b|  1d   |  |1e  |1f  |1g  |
   * |-----------------------------------------------------------|  |--------------|
   * |20   | 21| 22| 23| 24| 25| 26| 27| 28| 29| 2a| 2b| 2c|   2d|  | 2e | 2f | 2g |
   * |-----------------------------------------------------------|  `--------------'
   * |30     | 31| 32| 33| 34| 35| 36| 37| 38| 39| 3a| 3b| 3d    |
   * |-----------------------------------------------------------|       ,----.
   * | 40     | 42| 43| 44| 45| 46| 47| 48| 49| 4a| 4b| 4d       |       | 4f |
   * |-----------------------------------------------------------|   ,-------------.
   * | 50 | 51 | 52 |      57               |5a  | 5b | 5c | 5d  |   | 5e| 5f | 5g |
   * `-----------------------------------------------------------'   `-------------'
 */
// The first section contains all of the arguments
// The second converts the arguments into a two-dimensional array
#define KEYMAP( \
  k00, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, k0e, k0f, k0g, \
  k01, k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1d, k1e, k1f, k1g, \
  k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c, k2d, k2e, k2f, k2g, \
  k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3d, \
  k40, k42, k43, k44, k45, k46, k47, k48, k49, k4a, k4b, k4d, k4f, \
  k50, k51, k52, k57, k5a, k5b, k5c, k5d, k5e, k5f, k5g  \
) \
{ \
    {k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, k0e, k0f, k0g}, \
    {k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1d, k1d, k1e, k1f, k1g}, \
    {k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c, k2d, k2e, k2f, k2g}, \
    {k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, k3d, k3d, k3d, k3d, k3d}, \
    {k40, k40, k42, k43, k44, k45, k46, k47, k48, k49, k4a, k4b, k4d, k4d, k4f, k4f, k4f},  \
    {k50, k51, k52, k57, k57, k57, k57, k57, k57, k57, k5a, k5b, k5c, k5d, k5e, k5f, k5g} \
}

#endif
