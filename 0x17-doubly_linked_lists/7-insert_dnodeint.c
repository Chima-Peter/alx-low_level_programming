#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new nide at a given position
 *
 * @h: the dlistint list
 *
 * @idx: the index
 *
 * @n: data to be filled
 *
 * Return: the address of the new node at index idx, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new;
	unsigned int i;

	temp = *h;
	i = 0;


	while (temp != NULL)
	{
		temp = temp->next;
		i++;
	}
	i -= 1;
	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	if (idx == 0)
	{
		add_dnodeint(&temp, n);
		return (*h);
	}
	else if (idx == i)
	{
		add_dnodeint_end(&temp, n);
		return (*h);
	}
	else if (idx > i)
		return (NULL);
	/*for (j = 0; j <= idx; j++)
	{
		temp = temp->next;
	}
	new->n = n;
	new->prev = temp;
	new->next = temp->next;
	temp->next = new;
	if (new->next != NULL)
		temp->next->prev = new;*/
	return (*h);
}
