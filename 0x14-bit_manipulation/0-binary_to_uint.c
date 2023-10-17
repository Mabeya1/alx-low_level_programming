#include "main.h"

/**
 * @b: string that has the binary number
 * binary_to_uint - switches a binary number to unsigned int
 *
 * Result shows the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[i] - '0');
	}
    /* Return the decimal value converted from the binary string. */
	return (dec_val);
}
