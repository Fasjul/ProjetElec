#include <stdlib.h>
#include "elec.h"

uint32_t average (uint32_t* IEEE_measures, size_t m_number){
    int i =0;
    uint32_t avg = 0;
    while (i < m_number){

    avg = IEEE_add(IEEE_measures[i], avg);
    i++;

    }
    return IEEE_div(avg, m_number);
}
