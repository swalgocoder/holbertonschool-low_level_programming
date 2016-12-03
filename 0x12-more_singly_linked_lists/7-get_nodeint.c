#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth or indexed node of a list
 * @head: pointer head node
 * @index: node index
 * Return: head node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int current;


	if (head == NULL)
		return (NULL);
	for (current = 0; current < index; head = head->next)
	{
		if (head == NULL)
			return (NULL);
		current++;
	}

	return (head);
}
