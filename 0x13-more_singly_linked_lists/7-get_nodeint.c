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
	unsigned int i, n;
	listint_t *node;

	if (head == NULL)
		return (NULL);
	if (index > 0)
		n = index - 1;

	for (i = 0; i <= n; i++)
	{
		head = head->next;
		if (i == n)
			node = head;
	}
	return (node);
}
