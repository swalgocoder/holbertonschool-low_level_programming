#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of a linked list listint_t
 * @head: head node
 * @index: node index
 * Return: head node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
/* creating a current counter to keep track */
	unsigned int current;

	current = 0;
/* edge case */
	if (head == NULL)
		return (NULL);
	while (current < index)
	{
		current++;
/* edge case */
		if (head == NULL)
			return (NULL);
/* moves to the next node */
		head = head->next;
	}
/* returns nth node */
	return (head);
}
