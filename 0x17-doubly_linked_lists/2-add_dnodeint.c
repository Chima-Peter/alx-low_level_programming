#include "lists.h"
/**
 * add_dnodeint - adds a new note at the beginning of a dlistint list
 *
 * @head: the dlistint list
 *
 * @n: the data to be filled in
 *
 * Return: the address of the new element, or NULL if failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (*head);
}
