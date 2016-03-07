#ifndef ELEC_H_INCLUDED
#define ELEC_H_INCLUDED

typedef unsigned long int uint32_t;
uint32_t IEEE_mult(uint32_t measure1, uint32_t measure2);
uint32_t IEEE_add (uint32_t IEEE_float1, uint32_t IEEE_float2);
uint32_t IEEE_sub (uint32_t IEEE_float1, uint32_t IEEE_float2);
uint32_t IEEE_div (uint32_t IEEE_float1, uint32_t IEEE_float2);
uint32_t IEEE_square(uint32_t IEEE_float);
uint32_t IEEE_sqrt(uint32_t IEEE_float);
uint32_t average (uint32_t* IEEE_measures, size_t m_number);
uint32_t std_dev(uint32_t* IEEE_measures, size_t m_number);
uint32_t shiftandadd(uint32_t nb1, uint32_t nb2, int* normal);

#endif // ELEC_H_INCLUDED
