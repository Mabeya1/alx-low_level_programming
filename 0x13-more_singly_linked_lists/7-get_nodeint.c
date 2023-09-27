#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @index: index of the node to return
 * @head: first node in the linked list
 *
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;
    /* Traverse the linked list until the desired index or end of list is reached */
	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
    /* Return the pointer to the node at the specified index, or NULL if not found*/
	return (temp ? temp : NULL);
}
