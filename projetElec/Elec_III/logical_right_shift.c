#include <stdlib.h>
#include "elec.h"


uint32_t logical_right_shift(uint32_t x, int n)
{
    int size = sizeof(uint32_t); // size of int

    // arithmetic shifts to create logical shift, return 1 for true
    return (x >> n) & ~(((x >> (size << 3) - 1) << (size << 3) -1)) >> (n-1);
}
