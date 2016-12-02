#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - adds a node to tail end of list
 * @head: pointer to the head of list
 * @n: data in node
 * Return: the adress of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *loop_ref, *new_node_2add;

	new_node_2add = malloc(sizeof(listint_t));
	if (new_node_2add == NULL)
		return (NULL);
	new_node_2add->n = n;
	new_node_2add->next = NULL;

	if (*head == NULL)
	{
		*head = new_node_2add;
		return (*head);
	}
	for (loop_ref = *head; loop_ref->next != NULL; loop_ref = loop_ref->next)
	{
	}
	loop_ref->next = new_node_2add;
	return (loop_ref->next);
}
