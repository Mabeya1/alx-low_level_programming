#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers.
 * @n: The number of integers passed to the function.
 * @...: A variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;/* Declare a va_list variable to work with variadic arguments */
	unsigned int index;

	va_start(nums, n);/* Initialize the va_list with the number of parameters */

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(nums, int));
		/* Access and print each number using va_arg */

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);/* Print the separator between numbers */
	}

	printf("\n");/* Print a newline character */

	va_end(nums);/* Clean up the va_list */
}
