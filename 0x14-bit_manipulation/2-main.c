#include <stdio.h>
#include "main.h"

/**
 * main - analizes the code
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
	printf("%d\n", n);
	return (0);
}
