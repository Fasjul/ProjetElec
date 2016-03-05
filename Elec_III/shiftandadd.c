#include <stdlib.h>
#include <stdio.h>
#include "elec.h"

uint32_t shiftandadd(uint32_t nb1, uint32_t nb2, int* normal){ //stocker dans normal [0] la position du 1 de poids fort
int i = 0;
int j =0;
int carryout;
uint32_t shifted[32];
uint32_t sum = 0;
uint32_t tmp1;
    while (i < 32){
        if (((nb2 << (31-i)) >> 31) != 0){
            shifted[i] = nb1 << i;

        }
        for (j=0; j<=i; j++){ // a la fin du for, carryout est le nombre de 1 sur la colonne
            if (((shifted[j] << (31-j)) >> 31) !=0){
                carryout++;
            }
        }
        carryout = carryout%2;//


    }
return 0; //sortir les 32 bits de poids fort du résultat

}
