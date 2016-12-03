#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 *insert_nodeint_at_index - inserts a new node via index
 *@head: pointer to pointer to head
 *@index: index position of the list where new node to be added
 *@n: data of the new node
 *Return: new node data
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *new_node, *swap;
	unsigned int i;

	if (*head == NULL && index != 0)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	if (index == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	swap = *head;
	for (i = 0; i < (index - 1) && swap != NULL; swap = swap->next)
	{
		i++;
	}

	if (i != (index - 1))
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = swap->next;
	swap->next = new_node;
	return (new_node);
}
