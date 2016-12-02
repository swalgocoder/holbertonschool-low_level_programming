#include <stdlib.h>
#include "lists.h"
/**
 * free_list - free the memory of list
 * @head: a pointer to the head of caller's list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *swap;

	while (head != NULL)
	{
	swap = head;
	head = head->next;
	free(swap->str);
	free(swap);
	}
}
