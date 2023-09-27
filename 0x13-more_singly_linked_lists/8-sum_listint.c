#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 *
 * @head: first node in the linked list
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;
    /* Traverse the linked list and add the data from each node to the sum */
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
    /* Return the resulting sum */
	return (sum);
}
