#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint- A function
 *
 * @head: Varibale of listint list
 *
 * Description: A function that frees a listint_t list.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
	{
		free(head->next);
		free(head);
	}
	else
	{
		while (head != NULL)
		{
			temp = head->next;
			free(head);
			head = temp;
		}
	}
}
