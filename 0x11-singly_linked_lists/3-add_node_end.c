#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add node at end of list
 * @head: linked list from caller to be add to
 * @str: str from caller to cpy
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node_2add, *swap;
	int i;

	new_node_2add = malloc(sizeof(list_t));
	if (new_node_2add == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	new_node_2add->str = strdup(str);
	new_node_2add->len = i;
	new_node_2add->next = NULL;
	swap = *head;
	if (*head == NULL)
	{
		*head = new_node_2add;
		return (*head);
	}
	else
	{
	for (swap = *head; swap->next != NULL; swap = swap->next)
	;
	swap->next = new_node_2add;
	}
	swap = swap->next;
	return (new_node_2add);
}
