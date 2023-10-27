#include "main.h"

/**
 * get_bit - Gets the value of a bit at a specific index.
 * @index: The position of the bit to retrieve
 * (0 for the least significant bit).
 * @n: The long integer to extract the bit from.
 *
 * Return: The value (0 or 1) of the bit at the specified
 * index, or -1 if the index is out of range.
 */
int get_bit(unsigned long int n, unsigned int index)
{
		int bit_value;

		if (index > 63)
				return (-1);
		bit_value = (n >> index) & 1;

		return (bit_value);
}
