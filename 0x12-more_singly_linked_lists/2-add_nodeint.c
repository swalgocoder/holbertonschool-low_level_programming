#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - add a new node to the start of the list.
 * @head: pointer to the list.
 * @n: data in node.
 * Return: adress of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *swap;

	swap = malloc(sizeof(listint_t));
	if (swap == NULL)
		return (NULL);

	(*swap).n = n;
	swap->next = *head;
	*head = swap;

	return (swap);
}
