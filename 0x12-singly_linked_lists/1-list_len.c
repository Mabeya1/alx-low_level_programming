#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the elements in a linked list
 * @h: pointer to the list_t list
 *
 * Return: number of h elements
 */
size_t list_len(const list_t *h)
{
	/* Initialize a variable to keep track of the number of elements */
	size_t n = 0;

	while (h)
	{
		n++; /* Increment the count for each element */
		h = h->next; /* Move to the next element */
	}
	return (n); /* Return the total number of elements */
}
