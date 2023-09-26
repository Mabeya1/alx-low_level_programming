#include "lists.h"  /* Include the header file */

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 *
 * Description: This function creates a new node with the given integer
 * data 'n' and adds it to the beginning of a singly linked list.
 *
 * Return: pointer to the new node, or NULL if it fails (e.g., if malloc fails)
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;  /* Declare a pointer to a new node */

	new = malloc(sizeof(listint_t));  /* Allocate memory for the new node */
	if (!new)  /* Check if malloc fails (out of memory) */
		return (NULL);

	new->n = n;        /* Set the integer value of the new node */
	new->next = *head; /* Set the next pointer of the new node to the current head */
	*head = new;       /* Update the head pointer to point to the new node */

	return (new); /* Return a pointer to the newly created node */
}
