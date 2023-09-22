#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of size
 * and initializes it with char c.
 * @size: The size of the array to create.
 * @c: The character to initialize the array with.
 *
 * Description: This function dynamically allocates an array
 * of size 'size'and initializes all its elements
 * with the character 'c'.
 *
 * Return: If successful, returns a pointer to the newly created array.
 * If size is 0 or if memory allocation fails, returns NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
