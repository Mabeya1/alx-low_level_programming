#include "main.h"

/**
 * _isupper - Checks the uppercase of a character
 * @c: Character to check
 * Return: 1 if c is in uppercase and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
