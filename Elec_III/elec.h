#ifndef ELEC_H_INCLUDED
#define ELEC_H_INCLUDED

typedef unsigned long int uint32_t;
uint32_t IEEE_mult(uint32_t measure1, uint32_t measure2);
int IEEE_add (int IEEE_float1, int IEEE_float2);
int IEEE_sub (int IEEE_float1, int IEEE_float2);
int IEEE_div (int IEEE_float1, int IEEE_float2);
int IEEE_square(int IEEE_float);
int IEEE_sqrt(int IEEE_float);
int average (int* IEEE_measures, size_t m_number);
int std_dev(int* IEEE_measures, size_t m_number);
uint32_t shiftandadd(uint32_t nb1, uint32_t nb2);

#endif // ELEC_H_INCLUDED
