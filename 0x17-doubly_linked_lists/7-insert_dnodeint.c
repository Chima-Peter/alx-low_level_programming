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
	dlistint_t *new, *head;

	unsigned int match;

	match = 0;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	head = *h;

	/*if (*h == NULL && idx == 0)
	{
		*h = new;
		return (*h);
	}
	if (head == NULL && idx != 0)
		return (NULL);

	head = *h;

	while (head)
	{
		head = head->next;
		count++;
	}
	if (head != NULL && idx == count)
	{
		add_dnodeint_end(&head, idx);
		*h = head;
		return (*h);
	}*/

	while (head && match < idx - 1)
	{
		head = head->next;
		match++;
	}
	new->next = head->next;
	new->prev = head;
	head->next->prev = new;
	head->next = new;
	*h = head;

	return (head);
}
