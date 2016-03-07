#include <stdio.h>
#include "elec.h"


 void showbits(uint32_t x)
    {
        int i;
        for(i=(sizeof(uint32_t)*4)-1; i>=0; i--)
            (x&(1u<<i))?putchar('1'):putchar('0');

    	printf("\n");
    }
