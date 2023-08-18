#include "lists.h"
/**
 * get_dnodeint_at_index - gets the nth node of a dlistint list
 *
 * @head: the dlistint list
 *
 * @index: the nth index
 *
 * Return: the nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i;

	for (i = 0; (head != NULL) && (i <= index); i++)
	{
		if (i == index)
			temp = head;
		head = head->next;
	}
	return (temp);
}
