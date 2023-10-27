#include "main.h"

/**
 * print_binary - Print the binary representation of a number.
 * @n: The number to convert and print.
 *
 * This function prints the binary representation of an unsigned long integer 'n'.
 * It uses bitwise operations to check each bit of 'n' and prints '1' or '0' accordingly.
 * Leading '0's are omitted to print the binary representation.
 */
void print_binary(unsigned long int n)
{
		int bit, count = 0;
		unsigned long int mask;

		for (bit = 63; bit >= 0; bit--)
		{
				mask = n >> bit;
				if (mask & 1)
				{
						_putchar('1');
						count++; /*advances if conditions are favourable*/
				}
				else if (mask)
						_putchar('0');
		}
		if (!mask)
				_putchar('0');
}
