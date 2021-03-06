#include "lists.h"
/**
 * free_listint2 - free list, set head to NULL
 * @head: pointer to a pointer of the head of list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *loop;

	while (head != NULL && *head != NULL)
	{
		loop = *head;
		*head = (*head)->next;
		free(loop);
	}
}
