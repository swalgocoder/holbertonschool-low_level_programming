#include "lists.h"
/**
 *add_dnodeint -  adds a new node at the beginning of a dlistint_t list
 *@head: pointer to head pointer of dlistint_t
 *@n: integer, data
 *Return: the head of dlistint_t
 */



dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp_node;

	temp_node = *head;
	temp_node = malloc(sizeof(dlistint_t));

	if (temp_node == NULL)
		return (NULL);

	temp_node->n = n;
	temp_node->prev = NULL;
	temp_node->next = *head;
	*head = temp_node;
	return (temp_node);
}
