#include <stdlib.h>
#include <stdio.h>
#include "elec.h"

uint32_t IEEE_mult(uint32_t measure1, uint32_t measure2){
    uint32_t signe1 = measure1>>31;
    uint32_t signe2 = measure2>>31;

    uint32_t signe_glob;
    int normal [1];
    uint32_t exponent_correction;
    uint32_t result;
    uint32_t norm = 1 << 23;
    uint32_t exposant, exposant1, exposant2;
    uint32_t norm_exp = (1 << 7) -1;

    signe_glob = (signe1 == signe2) ? 0 : 1; //bit de signe déterminé par xor
    signe_glob = signe_glob << 31;

    printf("%d\n", signe_glob);

    uint32_t mantisse1 = (measure1<<9) >>9;
    mantisse1 += norm; //on ajoute le 1 devant les mantisses
    uint32_t mantisse2 = (measure2<<9) >>9;
    mantisse2 += norm;
    //uint32_t mantmult = shiftandadd(mantisse1, mantisse2, normal); //on a la nouvelle mantisse ainsi que la position du 1 de poids fort


    uint32_t mantmult = (5<<28) + (1<<26) + (3<<23);
    mantmult = mantmult >>7;
    normal[0] = 23;


    exponent_correction = normal[0] - 23; //rang à ajouter à l'exposant
    result = (mantmult << (32 - normal[0])) >> 9; // neuf zéros puis la mantisse

    exposant1 = (measure1 << 1) >> 23;
    exposant2 = (measure2 << 1) >> 23;
    /*exposant = IEEE_sub(exposant1, norm_exp);
    exposant = IEEE_add(exposant, exposant2);
    exposant = IEEE_add(exposant, exponent_correction);*/
    exposant = exposant1 + exposant2 - norm_exp + exponent_correction;
    exposant = exposant << 22;

    /*result = IEEE_add(result, exposant);
    result = IEEE_add(result, signe_glob);*/

    result += exposant +signe_glob;

    return result;

}
