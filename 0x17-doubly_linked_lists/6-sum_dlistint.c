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
int sum_dlistint(dlistint_t *head)
{
	unsigned int i;
	
	i = 0;

	while (head != NULL)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
