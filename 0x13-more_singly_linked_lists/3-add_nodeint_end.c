#include "lists.h"  /* Include the header file */

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Description: This function creates a new node with the given integer
 * data 'n' and adds it to the end of a singly linked list.
 *
 * Return: pointer to the new node, or NULL if it fails (e.g., if malloc fails)
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;   /* Declare a pointer to a new node */
	listint_t *temp = *head;  /* Declare a temporary pointer to traverse the list */

	new = malloc(sizeof(listint_t));  /* Allocate memory for the new node */
	if (!new)  /* Check if malloc fails (out of memory) */
		return (NULL);

	new->n = n;        /* Set the integer value of the new node */
	new->next = NULL;  /* Initialize the next pointer of the new node to NULL */

	if (*head == NULL)  /* Check if the list is initially empty */
	{
		*head = new; /* If empty, set the head pointer to the new node */
		return (new); /* Return a pointer to the newly created node */
	}

	while (temp->next) /* Traverse the list to find the last node */
		temp = temp->next;

	temp->next = new; /* Set the next pointer of the last node to the new node */

	return (new); /* Return a pointer to the newly created node at the end */
}
