#include "main.h"

/**
 * _pow - Calculate the power of a number.
 * @base: The base number.
 * @power: The exponent.
 *
 * This function calculates 'base' raised to the power of 'power' and returns the result.
 * It uses a loop to perform the calculation by multiplying 'base' 'power' times.
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int a;

	num = 1;
	for (a = 1; a <= power; a++)
		num *= base;
	return (num);
}

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
	unsigned long int divisor, check;
	char flag;

	flag = 0;
	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}
