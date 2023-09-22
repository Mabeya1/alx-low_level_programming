#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a linked list.
 * @head: The list_t list to be freed.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str); /* Free the string in the current node */
		free(head); /* Free the current node */
		head = temp; /* Move to the next node */
	}
}
