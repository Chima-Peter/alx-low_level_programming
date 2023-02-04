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

	temp = malloc(sizeof(list_t));
	if (head == 0)
		free(head);
	else
	{
		while (head != 0)
		{
			temp = head;
			head = head->next;
			free(temp);
		}
	}
}
