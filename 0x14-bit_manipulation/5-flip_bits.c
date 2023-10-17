#include "main.h"

/**
 * flip_bits - Counts the number of differing bits between two long integers.
 * 
 * @m: The second long integer.
 * @n: The first long integer.
 * Return: The count of differing bits between n and m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclusive >> i;
		if (current & 1)
			count++;
	}

	return (count);
}
