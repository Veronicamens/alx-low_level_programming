#include "main.h"

/**
 * _memset - fills a block of memory with a specific value
 * @s: pointer to the starting address of the memory to be filled
 * @b: the desired value to be set
 * @n: the number of bytes to be filled
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
