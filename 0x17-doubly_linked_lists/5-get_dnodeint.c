#include "lists.h"
/**
 * get_dnodeint_at_index - gets the nth node of a dlistint list
 *
 * @head: the dlistint list
 *
 * @index: the nth index
 *
 * Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	i = 0;

	while (head != NULL)
	{
		if (i == index)
			temp = head;
		head = head->next;
		i++;
	}
	if (temp == NULL)
		return (NULL);
	return (temp);
}
