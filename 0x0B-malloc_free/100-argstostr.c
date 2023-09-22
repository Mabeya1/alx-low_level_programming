#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates command line arguments into a single string.
 * @ac: The number of arguments.
 * @av: An array of pointers to strings containing the arguments.
 *
 * Return: A pointer to the concatenated string,
 * or NULL if ac is 0 or av is NULL,
 *         or if memory allocation fails.
 */
char *argstostr(int ac, char **av)
{
	int i, j, length = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length of the concatenated string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			length++;
	}

	/* Include space for newline characters and the null terminator */
	length += ac;

	str = malloc(sizeof(char) * (length + 1));
	if (str == NULL)
		return (NULL);

	length = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[length] = av[i][j];
			length++;
		}
		str[length] = '\n'; /* Add newline after each argument */
		length++;
	}
	str[length] = '\0'; /* Null-terminate the concatenated string */

	return (str);
}
