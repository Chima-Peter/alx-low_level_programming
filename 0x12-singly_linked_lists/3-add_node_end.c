#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end- Adds a new node at the end of the linked list.
 * @head: Linked list
 *
 * @str: String character to be filled
 *
 * Return : Returns new head or NULL
 */
list_t *add_node_end(list_t **head, char *str)
{
	list_t *new_node;
	list_t *last_node;
	unsigned int len;

	new_node = malloc(sizeof(list_t));

	new_node->str = strdup(str);
	len = strlen(str);
	new_node->len = len;
	new_node->next = NULL;
	last_node = (*head);

	while (last_node->next != NULL)
		last_node = last_node->next;
	last_node->next = new_node;
	if (last_node != NULL)
		return (*head);
	else
		return (NULL);
	return (0);
}
