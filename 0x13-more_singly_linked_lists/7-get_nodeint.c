#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index- A function
 *
 * @head: The linked list
 * @index: Index of node to be returned
 *
 * Description: A function that returns the nth node of a listint_t linked list
 * Return: The nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *node;

	node = malloc(sizeof(listint_t));

	i = 0;

	if (head == NULL)
		return (NULL);
	while (head != NULL)
	{
		if (i == index)
		{
			node->next = NULL;
			node->n = head->n;
		}
		head = head->next;
		i++;
	}
	return (node);
}
