#include "main.h"
#include <unistd.h>
/**
 * @c: The character to print
 * _putchar - writes the character c to stdout
 *
 * Return: On success 1.
 * If there is an error, -1 is diplayed, and errno is set in an appropriate manner.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
