#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node in a linked list at a certain index
 * @index: index of the node to delete
 * @head: pointer to the first element in the list
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int i = 0;
    /* Check if the list is empty */
 	if (*head == NULL)
		return (-1);
    /* Delete the node at index 0 */
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
    /* Traverse the list to find the node before the one to be deleted */
	while (i < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		i++;
	}
 
    /* Delete the node at the specified index */
	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}
