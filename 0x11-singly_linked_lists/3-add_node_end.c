#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add node at end
 * @head: linked list to add to
 * @str: str to cpy
 * Return: new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;
	int i;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	new_node->str = strdup(str);
	new_node->len = i;
	new_node->next = NULL;
	temp = *head;
	if (*head == NULL)
	{
		*head = new_node;
		return (*head);
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}
	temp = temp->next;
	return (temp);
}
