#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2- A function
 *
 * @head: A variable of the listint_t linked list
 *
 * Description: A function that frees a listint_t list.
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
	{
		free((*head)->next);
		free(*head);
	}
	else
	{
		while(*head)
		{
			temp = (*head)->next;
			free((*head)->next);
			free(*head);
			*head = temp;
		}
	}
}
