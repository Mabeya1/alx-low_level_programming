#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the contents of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: printed nodes
 */
size_t print_list(const list_t *h)
{
	/* Initialize a variable to keep track of the number of nodes printed */
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n"); /* Print the case when the string is NULL */
		else
			printf("[%u] %s\n", h->len, h->str); /* Print the length and string */
		h = h->next; /* Move to the next node */
		s++; /* Increment the count of nodes printed */
	}

	return (s); /* Return the total number of nodes printed */
}
