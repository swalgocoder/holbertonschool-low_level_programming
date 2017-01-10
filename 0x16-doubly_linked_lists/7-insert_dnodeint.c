#include "lists.h"
/**
 * insert_dnodeint_at_idx - inserts node at an indexed position
 * @head: ptr to head
 * @idx: indexed position to insert node
 * @n: int data of the node to be inserted
 * Return: ptr to new node
 */
dlistint_t *insert_dnodeint_at_idx(dlistint_t **head, unsigned int idx, int n)
{
	dlistint_t *new, *current;
	unsigned int i;

	if (!head)
		return (NULL);
	if (*head == NULL && idx != 0)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL, new->prev = NULL;
	if (idx == 0)
	{
		new->next = *head;
		new->prev = NULL;
		*head = new;
		return (new);
	}
	current = *head;
	i = 0;
	while (i < idx - 1)
	{
		if (current->next == NULL)
		{
			free(new);
			return (NULL);
		}
		current = current->next;
		i++;
	}
	if (i != (idx - 1))
	{
		free(new);
		return (NULL);
	}
	new->next = current->next;
	current->next = new;
	new->prev = current;
	if (new->next)
		(new->next)->prev = new;
	return (new);
}
