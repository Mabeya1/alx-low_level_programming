#include "function_pointers.h"

/**
 * int_index - Searches for an integer in an array using a function pointer.
 * @array: The array to search in.
 * @size: The number of elements in the array.
 * @cmp: A pointer to the function to compare elements.
 *
 * Return: The index of the first element for which cmp returns true.
 *         If no element matches, or if size <= 0, return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}

	return (-1);
}
