#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a list
 * @head: pointer to pointer to head node
 * Return: head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *swap;
	int node_data;


	if (*head == NULL)
		return (0);


	swap = *head;


	node_data = (*head)->n;


	*head = (*head)->next;


	free(swap);

	return (node_data);
}
