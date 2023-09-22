#include <stdlib.h>
#include "main.h"

/**
 * array_range - Creates an array of integers within a specified range.
 * @min: The minimum value to start the range.
 * @max: The maximum value to end range (inclusive) and number of elements.
 *
 * Return: A pointer to the new integer array, or NULL on failure.
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	/* Check if the minimum value is greater than the maximum value. */
	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	/* Check if memory allocation failed. */
	if (ptr == NULL)
		return (NULL);

	/* Fill the array with values in the specified range. */
	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}
