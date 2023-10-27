#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Convert a binary string to an unsigned integer.
 * @b: The input binary string.
 *
 * This function converts a binary string 'b' to an unsigned integer.
 * It iterates through each character in the string, checking if it's a '0' or '1'.
 * If any character is not '0' or '1', the function returns 0.
 * The binary representation in 'b' is then converted to an integer, and the result is returned.
 */
unsigned int binary_to_uint(const char *b)
{
		unsigned int result = 0;
		int g;

		if (!b)
				return (0);

		for (g = 0; b[g]; g++)
		{
				if (b[g] < '0' || b[g] > '1')
						return (0);

				result = 2 * result + (b[i] - '0');/*Addition of Binary digit*/
		}

		return (result);
}
