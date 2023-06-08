#include "lists.h"
/**
 * get_dnodeint_at_index - finds the nth node of a dlistint list
 *
 * @head: the list
 *
 * @index: the index to check
 *
 * Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	i = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
