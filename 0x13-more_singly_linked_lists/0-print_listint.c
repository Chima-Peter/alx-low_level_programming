#include <stdio.h>
#include "lists.h"

/**
 * print_listint- A function
 *
 * @h: A variable of the listint list
 *
 * Description: A function that prints all the elements of a listint_t list.
 * Return: Returns the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		i += 1;
		h = h->next;
	}
	return (i);
}
