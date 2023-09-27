#include "lists.h"  /* Include the header file */

/**
 * free_listint - frees a linked list
 * @head: listint_t list to be freed
 *
 * Description: This function frees a singly linked list by iterating
 * through the nodes and freeing the memory allocated for each node.
 */
void free_listint(listint_t*head)
{
	listint_t *temp;  /* Declare a temporary pointer */

	while (head)
	{
		free(head);        /* Free the memory of the current node */
		head = temp;       
	}
}
