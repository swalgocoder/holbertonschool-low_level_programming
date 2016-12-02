#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - free the memory of list
 * @head: a pointer to the linked list
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *loop;

	while (head != NULL)
	{

		loop = head;

		head = head->next;

		free(loop);
	}
}
