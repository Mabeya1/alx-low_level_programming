#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a linked list.
 * @head: Double pointer to the list_t list.
 * @str: String to put in the new node.
 *
 * Return: Address of the new element, or NULL if it fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	/* Calculate the length of the string */
	while (str[len])
		len++;

	/* Allocate memory for the new node */
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	/* Copy the string to the new node */
	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	/* If the list is empty, set the new node as the head */
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	/* Traverse the list to find the last node */
	while (temp->next)
		temp = temp->next;

	/* Set the new node as the next of the last node */
	temp->next = new;

	return (new);
}
