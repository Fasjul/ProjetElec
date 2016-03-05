#include <stdlib.h>
#include "elec.h"

uint32_t IEEE_mult(uint32_t measure1, uint32_t measure2){
    int signe1 = measure1>>31;
    int signe2 = measure2>>31;
    int signe_glob;
    signe_glob = (signe1 == signe2) ? 0 : 1; //bit de signe déterminé

    uint32_t mantisse1 = (measure1<<9) >>9;
    uint32_t mantisse2 = (measure2<<9) >>9;
    int64_t mantmult = shiftandadd(mantisse1, mantisse2) >> 23;

    return 0;

}
