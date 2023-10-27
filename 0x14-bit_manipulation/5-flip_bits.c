#include "main.h"

/**
 * flip_bits - Counts the number of differing bits
 * between two long integers.
 * @m: The second long integer.
 * @n: The first long integer.
 * Return: The count of differing bits between n and m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
		int bit, count = 0;
		unsigned long int xor_result = n ^ m;

		for (bit = 63; bit >= 0; bit--)
		{
				if (xor_result & (1UL << bit))
				{
						count++;
				}
		}

		return (count);
}
