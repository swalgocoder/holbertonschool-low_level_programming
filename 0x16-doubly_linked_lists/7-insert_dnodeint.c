#include "lists.h"
/**
  * insert_dnodeint_at_index - inserts a node at an index
  * @h: double pointer to a linked list
  * @idx: where to add the node
  * @n: value of the node
  * Return: pointer to the new node
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int idx_tmp;
	dlistint_t *current, *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	idx_tmp = idx;
	current = *h;
	if (!current)
	{
		new->prev = NULL;
		new->next = NULL;
		return (new);
	}
	if (idx == 0)
	{
		new->prev = NULL;
		new->next = current;
		current->prev = new;
		*h = new;
		return (new);
	}
	for ( ; idx > 1 && current->next; idx--)
		current = current->next;

	if (idx_tmp > idx && !current->next)
		return (NULL);

	new->prev = current;
	new->next = current->next ? current->next : NULL;
	current->next = current->next && idx > 1 ? NULL : new;
	return (new);
}
