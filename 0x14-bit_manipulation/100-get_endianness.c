#include "main.h"

/**
* get_endianness - check endianness
* Return: 0 if little endian, or 1 if big endian
*/
int get_endianness(void)
{

int num;
num = 256;
if (*(char *)&num == 1)
return (1);
else
return (0);

}
