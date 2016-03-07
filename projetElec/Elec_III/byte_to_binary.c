#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "elec.h"

const char *_to_binary(int x)
{
    static char b[33];
    b[0] = '\0';

    uint32_t z;
    for (z = 1 <<31; z > 0; z >>= 1)
    {
        strcat(b, ((x & z) == z) ? "1" : "0");
    }

    return b;
}
