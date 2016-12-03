#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *delete_nodeint_at_index - deletes the node via index
 *@head: pointer to pointer to head
 *@index: index position of the list where new node to be deleted
 *Return: 1 if it succeeded, -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp_node, *current;
	unsigned int i;


	current = *head;

	if (*head == NULL)
		return (-1);


	if (index == 0)
	{
		temp_node = current->next;
		current = current->next;
		*head = current;
		free(temp_node);
		return (1);
	}


	for (i = 0; i < (index - 1) && current != NULL; current = current->next)
	{
		i++;
	}

	if (i == (index - 1))
	{
		temp_node = current->next;
		current->next = temp_node->next;
		free(temp_node);
		return (1);
	}
	return (-1);
}
