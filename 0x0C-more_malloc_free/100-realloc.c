#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - Reallocates a memory block using malloc and free.
 * @ptr: Pointer to the memory previously allocated by malloc.
 * @old_size: Size of the allocated memory for ptr.
 * @new_size: New size of the memory block.
 *
 * Return: Pointer to the newly allocated memory block.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	char *old_ptr;
	unsigned int i;

	/* If the new size is the same as the old size, no reallocation needed. */
	if (new_size == old_size)
		return (ptr);

	/* If new_size is 0, free the memory and return NULL. */
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	/* If ptr is NULL, treat it like a malloc. */
	if (!ptr)
		return (malloc(new_size));

	new_ptr = malloc(new_size);
	if (!new_ptr)
		return (NULL);

	old_ptr = ptr;

	/* Copy the contents from old_ptr to new_ptr. */
	for (i = 0; i < (old_size < new_size ? old_size : new_size); i++)
		new_ptr[i] = old_ptr[i];

	free(ptr);
	return (new_ptr);
}
