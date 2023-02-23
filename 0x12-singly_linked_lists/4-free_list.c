#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Frees a singly linked list
 *
 * @head: The singly linked list
 */

void free_list(list_t *head)
{
	list_t *temp;

	if (head == NULL)
	{
		free(head->str);
		free(head->next);
		free(head);
	}
	else
	{
		while(head->next)
		{
			temp = head->next;
			free(head->str);
			free(head->next);
			free(head);
			head = temp;
		}
	}
}
