#include <stdio.h>
#include "lists.h"

/**
 * size_t list_len- Counts all the elements in a singly linked list
 *
 * @h: The singly linked list
 *
 * Return: Returns the number of nodes
 */
size_t list_len(const list_t *h)
{
	int count ;
	count = 0;

	while (h != 0)
	{
		count += 1;
		h = h->next;
	}
	return (count);
}
