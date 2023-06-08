#include "lists.h"
/**
 * sum_dlistint - sums all the data in a dlistint list
 *
 * @head: the list
 *
 * Return: the sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
