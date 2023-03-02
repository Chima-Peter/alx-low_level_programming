#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_listint_ A function
 *
 * @head: The linked list
 *
 * Description:A function that outputs the sum of all the data of a linked list
 * Return: The sum of data
 */
int sum_listint(listint_t *head)
{
	int i = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		i += head->n;
		head = head->next;
	}
	return (i);
}
