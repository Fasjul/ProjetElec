#include <stdio.h>
#include <stdlib.h>
#include "elec.h"

int main()
{
    uint32_t one = 1;
    uint32_t two = 2;
    uint32_t a = one<<two;
    uint32_t b =  a<< 2-one;
    if ((a >> 2) != 0){
    printf("%d ,  %d", (int)a, (int)b);
    }
    return 0;
}
