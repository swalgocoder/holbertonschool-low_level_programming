#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node via index of list
 * @head: pointer to list
 * @index: the index position of the node to be deleted
 * Return: 1 if succeeded, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *loop, *prev_node;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	loop = *head;

	for (i = 0; loop != NULL; loop = loop->next, ++i)
		;

	if (index > i)
		return (-1);

	loop = *head;

	if (index != 0)
	{
		for (i = 0; i < index;
		     prev_node = loop, loop = loop->next, ++i)
			;

		prev_node->next = loop->next;
		free(loop);
	}
	else
	{
		*head = (*head)->next;
		free(loop);
	}
	return (1);
}
