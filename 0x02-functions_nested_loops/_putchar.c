#include "main.h"
#include <unistd.>
/**
* _putchar - write the character c  to stdout
* @c: The character to print
*
* Return: on success 1
* On error, -1 is rturned, and errno is set appropriate  ly
*/
int _putchar(char c)
{
	return(write(1,&c,1));
}
