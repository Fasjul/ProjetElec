#include <stdlib.h>
#include "elec.h"

uint32_t std_dev(uint32_t* IEEE_measures, size_t m_number){
    int i =0;
    uint32_t avg = average(IEEE_measures, m_number);
    uint32_t sum = 0;
    uint32_t subst = 0;
    uint32_t squared = 0;
    uint32_t var = 0;

    while (i < m_number){

    subst = IEEE_sub(IEEE_measures[i], avg);
    squared = IEEE_square(subst);
    sum = IEEE_add(sum, squared);
    i++;
    }
    var = IEEE_div(sum, m_number);

    return IEEE_sqrt(var);
}
