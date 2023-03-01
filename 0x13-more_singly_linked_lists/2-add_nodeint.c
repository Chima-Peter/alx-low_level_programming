#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint- A fucntion
 *
 * @head: A variable of listint_t list
 * @n: A member of head variable
 *
 * Description: A function that adds a new node at the beginning of a listint_t list
 * Return: The new variable
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	new = malloc(sizeof(listint_t));

	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
