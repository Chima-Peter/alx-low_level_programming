#include "lists.h"

/**
 * add_dnodeint  -  adds a new node at the beginning of a dlistint_t list
 *
 * @head: the dlisiint list
 *
 * @n: the integer to be added
 *
 * Return:the address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	new->prev = NULL;

	if (*head != NULL)
		(*head)->prev = *head;
	*head = new;

	return (*head);
}
