#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
reverse_listint - The main function

@head: The list to be reversed

Description: A function that reverses a linked list
Return: Returns the reversed list
*/
listint_t *reverse_listint(listint_t **head)
{
    listint_t *prev, *current;

    prev = *head;
    prev->next = NULL;
    *head = (*head)->next;
    current = (*head)->next;

    if (*head == NULL)
        return (NULL);

    while (*head != NULL)
    {
        *head = (*head)->next;
        current->next = prev;
        prev = current;
        current = (*head)->next;
    }
    *head = current;
    return (*head);
}
