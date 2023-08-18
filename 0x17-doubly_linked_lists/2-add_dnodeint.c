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
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	temp = *head;
	if (new == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		temp->n = n;
		temp->next = NULL;
		temp->prev = NULL;
		*head = temp;
		return (*head);
	}
	new->n = n;
	temp->prev = new;
	new->prev = NULL;
	new->next = temp;
	temp = new;
	printf("kk");
	*head = temp;
	return (*head);
}
