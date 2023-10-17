#include "main.h"

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
	int a;/* Declaring of variables*/
	unsigned int num;

	num = 0;
	if (!b)
		return (0);
	for (a = 0; b[a] != '\0'; a++)/*
					* Check each character in the string to ensure it's '0' or '1'.
					*
					* Return 0 if any character doesn't meet these requirements.
					*/
	{
		if (b[a] != '0' && b[a] != '1')
			return (0);
	}
	for (a = 0; b[a] != '\0'; a++)/*
					* This loop builds the integer representation from the binary string.
					* It shifts the existing bits in 'num' to the left by 1 and adds 1 if 'b[a]' is '1'.
					*/
	{
		num <<= 1;
		if (b[a] == '1')
			num += 1;
	}
	return (num);
}
