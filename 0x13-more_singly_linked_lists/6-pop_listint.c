#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint- A fucntion
 * @head: A variable of the listint_t list
 * Description: Deletes the head node of a linked list, and returns the head node’s data (n).
 * Return: The head node or 0
 */

int pop_listint(listint_t **head)
{
	unsigned int i, n;
	listint_t *temp;
	if (*head == NULL)
		return (0);
	else
	{
		for (i = 0; i < 1; i++)
		{
			n = (*head)->n;
			temp = (*head)->next;
			free(*head);
		}
		*head = temp;
	}
	return (n);
}
