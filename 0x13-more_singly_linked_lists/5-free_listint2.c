#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
    /* Check if the head pointer is NULL */
	if (head == NULL)
		return;
    /* Iterate through the linked list and free each node */
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
    /* Set the head pointer to NULL to indicate an empty list */
	*head = NULL;
}
