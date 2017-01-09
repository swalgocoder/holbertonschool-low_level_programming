#include "lists.h"
/**
 *free_dlistint -  adds a new node at the beginning of a dlistint_t list
 *@head: pointer to head pointer of dlistint_t
 *Return: void
 */



void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}

	free(head);
}
