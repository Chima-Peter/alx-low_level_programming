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
	listint_t *new;
	unsigned int i;

	i = 0;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	if (*head == NULL && idx != 0)
		return (NULL);


	if (idx == 0)
	{
		new->next = *head;
		(*head) = new;
		return (*head);
	}

	for (i = 0; i < idx - 1; i++)
	{
		(*head) = (*head)->next;
	}
	new->next = (*head)->next;
	(*head)->next = new;

	return (new);
}
