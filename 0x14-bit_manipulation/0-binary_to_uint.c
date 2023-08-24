#include "main.h"

/**
* power - raises base to exponent
* @base: base
* @exponent: exponent
* Return: base raised to the power of exponent
*/
int power(int base, int exponent)
{
int result = 1;

while (exponent > 0)
{
result *= base;
exponent--;
}
return (result);
}

/**
* string_length - length of a string
* @str: string
* Return: length of str
*/
int string_length(const char *str)
{
int len = 0;

while (*str)
{
len++;
str++;
}
return (len);
}

/**
* binary_to_uint - converts a binary number to an unsigned int
* @binary: input string
* Return: unsigned decimal conversion, 0 if input is NULL
*/
unsigned int binary_to_uint(const char *binary)
{
int exponent;
int decimal = 0;

if (!binary)
return (0);

exponent = string_length(binary) - 1;
while (*binary)
{
if (*binary != '0' && *binary != '1')
return (0);

if (*binary == '1')
decimal += power(2, exponent);
binary++;
exponent--;
}
return (decimal);
}
