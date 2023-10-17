#include "main.h"

/**
 * set_bit - Sets a bit at a specific index in a long integer.
 * @index: The position of the bit to set (0 for the least significant bit).
 * @n: A pointer to the long integer to modify.
 *
 * Return: 1 if the operation is successful, or -1 if the index is out of range.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setbit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	setbit = 1 << index;
	*n = *n | setbit;
	return (1);
}
