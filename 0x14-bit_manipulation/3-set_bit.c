#include "main.h"

/**
* set_bit - sets the value of a bit to 1 at a given index.
* @num: number to set
* @idx: index at which to set bit
*
* Return: 1 if it worked, or -1 if an error occurred
*/
int set_bit(unsigned long int *num, unsigned int idx)
{
unsigned long int set;

if (idx > (sizeof(unsigned long int) * 8 - 1))
return (-1);
set = 1 << idx;
*num = *num | set;
return (1);
}

