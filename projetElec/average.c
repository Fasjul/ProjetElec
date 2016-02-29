#include <stdlib.h>

float average (int* IEEE_measures, size_t m_number){
    int i =0;
    float avg = 0;
    while (i < m_number){

    avg += IEEE_measures[i];

    }
    return avg/m_number;
}
