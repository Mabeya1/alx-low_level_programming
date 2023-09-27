#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list,
 * at a given position
 * @idx: index where the new node is added
 * @n: data to insert in the new node
 * @head: pointer to the first node in the list
 * 
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);
    /* Initialize the new node with data and a NULL next pointer */
	new->n = n;
	new->next = NULL;
    /* Insert at the beginning if idx is 0 */
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
    /* Traverse the list to find the insertion point */
	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}
    /* Return NULL if the index is out of bounds */
	return (NULL);
}
