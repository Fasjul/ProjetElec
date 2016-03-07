#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "elec.h"


int main(){

    char *tmp;
    char *bin = "10000000000000000000000000000000";
    uint32_t res = (uint32_t) strtol(bin, &tmp, 2);

    printf("%d\n", res);

    uint32_t A = (3 << 30) + (3 << 23) + (1<<20);
    uint32_t B = (1<<30) + (1<<24) + (3<<19);
    uint32_t C = (3<<30) + (3<<24) + (5<<19) +(3<<16);
    uint32_t D= IEEE_mult(A, B);
    if (D == C){
        printf("Hourra");

    }
    printf("%u, %u, %u\n", A, B, C);
    return 0;
}
