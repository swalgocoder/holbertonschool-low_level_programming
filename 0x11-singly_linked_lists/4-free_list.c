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

	for (swap = head; head == NULL; head = head->next)
	{
/* store the head in a swap variable */
/* make head point to the next node on the list */
/* free(swap->str), free(swap)*/
		free(swap->str);
		free(swap);
	}
}
