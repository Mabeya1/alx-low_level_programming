#include "lists.h"  /* Include the header file */

/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Description: This function prints all the elements of a singly
 * linked list of type listint_t, one element per line.
 *
 * Return: number of nodes in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;  /* Initialize a counter to keep track of nodes */

	while (h)
	{
		num++; /* Increment the counter for each node */
		h = h->next; /* Move to the next node in the list */
	}

	return (num); /* Return the total number of nodes in the list */
}
