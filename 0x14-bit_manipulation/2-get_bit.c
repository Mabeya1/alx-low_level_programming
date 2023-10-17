#include "main.h"

/**
 * get_bit - Gets the value of a bit at a specific index.
 * @index: The position of the bit to retrieve (0 for the least significant bit).
 * @n: The long integer to extract the bit from.
 *
 * Return: The value (0 or 1) of the bit at the specified index, or -1 if the index is out of range.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, check;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		/*Goes through the code and returns a bit to one index*/
		return (-1);
	divisor = 1 << index;
	check = n & divisor;
	if (check == divisor)
		return (1);
	return (0);
}
