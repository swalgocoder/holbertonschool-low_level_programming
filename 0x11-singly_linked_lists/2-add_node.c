#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"
/**
 * add_node - add node to the start of the list.
 * @head: ptr 1st node.
 * @str: ptr the element to be added.
 * Return: adress of new node, NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *swap;
	int i;


	for (i = 0; str[i] != '\0'; i++)
	{
	}


	swap = malloc(sizeof(list_t));
	if (swap == NULL)
		return (NULL);

	swap->str = strdup(str);
	swap->len = i;
	swap->next = *head;
	*head = swap;

	return (swap);
}
