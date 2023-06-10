#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index- A function
 *
 * @head: The linked list
 * @index: The index to be deleted
 *
 * Description: A function that deletes the node at index of a linked list
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *new, *temp;
	unsigned int i;

	new = *head;


	if (new == NULL)
		return (-1);
	if (index == 0)
	{
		*head = new->next;
		free(new);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		new = new->next;
	}
	temp = new->next;
	new->next = new->next->next;
	new = temp;
	free(new);

	return (1);
}