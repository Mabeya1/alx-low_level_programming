#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Convert a binary string to an unsigned integer.
 * @b: The input binary string.
 *
 * This function converts a binary string 'b' to an unsigned integer.
 * It iterates through each character in the string
 * If any character is not '0' or '1', the function returns 0.
 * The binary representation in 'b' is then converted to
 * an integer, and the result is returned.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	if (!b)
		return (0);/* Returns 0 if invalid input*/

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		result = 2 * result + (b[i] - '0');/*Binary digit addition*/
	}

	return (result);
}
