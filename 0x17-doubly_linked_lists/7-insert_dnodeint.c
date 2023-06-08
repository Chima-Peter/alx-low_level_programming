#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 *
 * @h: the list to add node to
 *
 * @idx: position
 *
 * @n: integer data of node
 *
 * Return: the address of the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *head, *prev;

	unsigned int match, count;

	match = 0;
	count = 0;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	head = *h;

	while (head)
	{
		head = head->next;
		count++;
	}
	if (head == NULL && idx == 0)
	{
		add_dnodeint(&head, idx);
		*h = head;
		return (*h);
	}
	if (head == NULL && idx != 0)
		return (NULL);
	if (head != NULL && idx == count)
	{
		add_dnodeint_end(&head, idx);
		*h = head;
		return (*h);
	}

	new->n = n;

	while (head->next)
	{
		if (match == (idx - 1))
		{
			new->next = (*h)->next;
			(*h)->next = new;
			prev = (*h)->next;
		}
		if (match == idx)
		{
			new->prev = (*h)->prev;
			(*h)->prev = prev;
		}
		head = head->next;
		match++;
	}
	return (*h);
}
