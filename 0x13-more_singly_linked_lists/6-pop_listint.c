#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element in the linked list
 *
 * Return: the data inside the elements that was deleted,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;
    /* Check if the head pointer is NULL or points to an empty list */
	if (!head || !*head)
		return (0);
    /* Store the data from the head node and update the head pointer */
	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
    /* Return the data from the deleted node */
	return (num);
}
