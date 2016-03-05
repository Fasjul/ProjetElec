#include <stdlib.h>

int average (int* IEEE_measures, size_t m_number){
    int i =0;
    int avg = 0;
    while (i < m_number){

    avg = IEEE_add(IEEE_measures[i], avg);
    i++;

    }
    return IEEE_div(avg, m_number);
}
