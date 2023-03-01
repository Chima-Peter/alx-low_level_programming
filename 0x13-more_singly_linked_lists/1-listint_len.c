#include <stdio.h>
#include "lists.h"

/**
 * listint_len- A fucntion
 *
 * @h: Variable of the listint_t list
 *
 * Description: A function that returns the number of elements in a linked listint_t list.
 * Return: Number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int i;

	i = 0;
	while(h != NULL)
	{
		i += 1;
		h = h->next;
	}
	return (i);
}
