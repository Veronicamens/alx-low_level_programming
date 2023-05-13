#include "main.h"

/**
 * _islower - checks if a character is lowercase
 * @ch: the character to check
 *
 * Return: 1 if the character is lowercase, 0 otherwise
 */
int _islower(int ch)
{
	/* lowercase characters have ASCII codes between 97 and 122 */
	return (ch >= 'a' && ch <= 'z');
}
