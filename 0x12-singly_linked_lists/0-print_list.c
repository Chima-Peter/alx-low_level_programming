#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a singly linked list
 *
 * @h: The singly linked list
 *
 * Return: Returns the number of nodes
 */
size_t print_list(const list_t *h)
{
	int count;

	count = 0;

	while (h != 0)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		count += 1;
		h = h->next;
	}
	return (count);
}
