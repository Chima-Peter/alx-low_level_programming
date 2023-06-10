#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at an index
 *
 * @head: list to delete node from
 *
 * @index: index where node to be deleted is at
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int i;

	i = 0;

	if (*head == NULL)
		return (1);

	temp = *head;

	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		free(current);

		return (1);
	}

/*	if (i == (index - 1))
	{
		i = 0;
		while (temp && (i < (index - 1)))
		{
			temp = temp->next;
			i++;
		}
		current = temp->next;
		temp->next = NULL;
		free(current);
		return (1);
	}

	if (i <= index)
		return (-1);*/

	i = 0;

	while (temp && (i < (index - 1)))
	{
		temp = temp->next;
		i++;
	}
	current = temp->next;
	temp->next = temp->next->next;
	temp->next->next->prev = temp->prev;
	free(current);
	return (1);
}
