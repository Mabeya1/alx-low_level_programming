#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Adds a new node at the beginning of a linked list.
 * @head: Double pointer to the list_t list.
 * @str: New string to add in the node.
 *
 * Return: The address of the new element, or NULL if it fails.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len]) /* Calculate the length of the string */
		len++;

	/* Allocate memory for the new node */
	new = malloc(sizeof(list_t));
	if (!new) /* Check if malloc fails */
		return (NULL);

	/* Copy the string to the new node */
	new->str = strdup(str);
	if (!new->str) /* Check if strdup fails */
	{
		free(new);
		return (NULL);
	}

	new->len = len; /* Set the length of the string */
	new->next = (*head); /* Update the next pointer of the new node */
	(*head) = new; /* Update the head to point to the new node */

	return (*head); /* Return the updated head */
}
