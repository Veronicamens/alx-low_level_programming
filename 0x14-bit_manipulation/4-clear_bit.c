#include "main.h"
#define BIT_SIZE 8

/**
* powX - powers a number base to the exponent's power
* @base: base
* @exponent: exponent
* Return: return base to the power of the exponent
*/
unsigned long int powX(int base, int exponent)
{
unsigned long int result = 1;

while (exponent)
{
result *= base;
exponent--;
}
return (result);
}

/**
* clear_bit - sets bit to zero at given index
* @num: input integer
* @idx: index of the bit to be cleared
* Return: 1 for success, -1 for failure
*/
int clear_bit(unsigned long int *num, unsigned int idx)
{
unsigned long int test;

if (idx > sizeof(num) * BIT_SIZE - 1)
return (-1);

test = powX(2, idx);
*num = (*num & test) ? *num ^ test : *num;
return (1);
}

