#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
* reverse_listint - reverses a listint_t list
* @head: pointer to head pointer of the list
* Return: head of reversed list
**/
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL;
listint_t *current = *head;
listint_t *next;


	if (*head == NULL)
		return (NULL);

	if ((*(*head)).next == NULL)
		return (*head);


	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}
	*head = prev;
	return (*head);
}
