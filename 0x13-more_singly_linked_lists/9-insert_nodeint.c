#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index- A fucntion
 * 
 * @head: The linked list
 * @idx: The index
 * @n: The data
 *
 * Description: A function that inserts a new node at a given position
 * Return: Address of new node or 0
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *temp;
	unsigned int i;
	i = 0;

	new = malloc(sizeof(listint_t));
	new->n = n;

	if (*head == NULL)
		return (NULL);
	if (idx > 0)
		idx = idx - 1;
	while (*head)
	{
		*head = (*head)->next;
		i += 1;
		if (i == idx)
			break;
	}
	temp = (*head)->next;
	(*head)->next = new;
	new->next = temp;
	return (*head);
}
