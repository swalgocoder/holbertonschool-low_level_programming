#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees the memory of list_t
 * @head: a pointer to the head of the linked list
 */
void free_list(list_t *head)
{
	list_t *temp;
/* checks if head is NULL, if the list is empty, it returns */
	while (head == NULL)
	{
/* save the head in a temp variable */
		temp = head;
/* make head point to the next node on the list */
		head = head->next;
/* safely free(temp->str) and free(temp) variable - head points to rest of the list */
		free(temp->str);
		free(temp);
	}
}
