#include <stdio.h>
#include <string.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_node- Affs a new node at the beginning of the singly linked list
 *
 * @head: The singly ;inked list
 *
 * @str: String to be added
 *
 * Return: Returns either the new address or NULL
 */
list_t *add_node(list_t **head, char *str)
{
	list_t *new_node = malloc(sizeof(list_t));

	unsigned int len;

	len = strlen(str);
	new_node->len = len;
	new_node->str = strdup(str);
	new_node->next = (*head);
	(*head) = new_node;

	if (*head != 0)
		return (*head);
	else
		return (NULL);
	return (0);
}
