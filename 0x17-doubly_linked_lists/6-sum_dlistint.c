#include "lists.h"
/**
 * sum_dlistint - sums up the n elements of a dlistint list
 *
 * @head: the dlistint list
 *
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
