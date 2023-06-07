#include "lists.h"

/**
 * dlistint_len - counts the number of elements in a linked dlistint_t list.
 *
 * @h: list to be counted
 *
 * Return:  returns the number of elements in a linked dlistint_t list.
 *
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i;
	i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
