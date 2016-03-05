#include <stdlib.h>
#include "elec.h"

int std_dev(int* IEEE_measures, size_t m_number){
    int i =0;
    int avg = average(IEEE_measures, m_number);
    int sum = 0;
    int subst = 0;
    int squared = 0;
    int var = 0;

    while (i < m_number){

    subst = IEEE_sub(IEEE_measures[i], avg);
    squared = IEEE_square(subst);
    sum = IEEE_add(sum, squared);
    i++;
    }
    var = IEEE_div(sum, m_number);

    return IEEE_sqrt(var);
}
