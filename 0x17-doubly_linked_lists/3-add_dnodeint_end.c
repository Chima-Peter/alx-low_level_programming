#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint list
 *
 * @head: the list
 *
 * @n: integer to be added
 *
 * Return: the address of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp, *last;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	temp = *head;

	while (temp->next)
	{
		last = temp->next;
		temp = temp->next;
	}
	temp->next = new;
	temp->prev = last;
	return (temp);
}
