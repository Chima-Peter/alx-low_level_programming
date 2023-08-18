#include "lists.h"
/**
 * free_dlistint - frees a dlistint list
 *
 * @head: the dlistint list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		free(head);

	while (head->next != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(head);
}
