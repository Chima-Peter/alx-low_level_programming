#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end- A function
 *
 * @head: Variable of listint_t list
 * @n: Member of head variable
 *
 * Description: A function that adds a new node at the end of a listint_t list
 * Return: The new list
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *temp;

	new = malloc(sizeof(listint_t));

	new->n = n;
	new->next = NULL;

	while (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	temp = *head;
	while(temp->next)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (temp);
}
