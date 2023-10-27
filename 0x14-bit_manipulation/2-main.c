#include <stdio.h>
#include "main.h"

/**
 * This is the main function.
 *
 * Return: 0 to indicate successful execution.
 */
int main(void)
{
		int n;
		/* Get the 10th bit of 1024 and assign it to 'n'*/
		n = get_bit(1024, 10);
		printf("%d\n", n);
		n = get_bit(98, 1);
		printf("%d\n", n);
		n = get_bit(1024, 0);
		printf("%d\n", n); /* Print the value of 'n'*/
		return (0);
}
