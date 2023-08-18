#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 *
 * @h: the dlistint list
 *
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int n;

	n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
