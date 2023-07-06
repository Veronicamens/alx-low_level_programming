#include "main.h"
#define BIT_SIZE 8

/**
* powX - powers a number base to the exponent's power
* @base : base
* @exponent : exponent
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
* print_binary - prints the binary representation of a number
* @number: input integer
*/
void print_binary(unsigned long int number)
{
unsigned long int test = powX(2, sizeof(unsigned long int) * BIT_SIZE - 1);
int start = 0;

if (number == 0)
{
_putchar('0');
return;
}
while (test)
{
if (!(test & number) && start)
{
_putchar('0');
}
else if (test & number)
{
_putchar('1');
start = 1;
}
test = test >> 1;
}
}

