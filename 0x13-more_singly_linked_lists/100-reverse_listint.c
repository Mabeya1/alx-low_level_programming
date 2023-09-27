#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 * 
 * @head: pointer to the first node in the list
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;
    /* Iterate through the list, reversing the next pointers of each node */
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
    /* Update the head pointer to point to the new first node */
	*head = prev;

	return (*head);
}
