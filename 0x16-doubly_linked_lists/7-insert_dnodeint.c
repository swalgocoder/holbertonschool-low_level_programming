#include "lists.h"
/**
 *insert_dnodeint_at_idx -  get the indexed node of a dlistint_t list
 *@head: pointer to head pointer of dlistint_t
 *@index: integer
 *Return: poiner to indexed node
 */
dlistint_t *insert_dnodeint_at_idx(dlistint_t **h, unsigned int idx, int n)
{
  dlistint_t *current, *pre, *new_node;
	unsigned int count;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	
	if (head == NULL)
		return (0);

	count = 1;
	while (current = head && count < index)
	{
		current = current->next;
		pre = current;
		count += 1;
	}

	if (idx == 0 && current != NULL)
	{
		*h = new_node;
		new_node->prec = NULL:
		new_node->next = current;
		return (new_node);
	}
	if (idx == 1 && current != NULL)
	{
		pre = *h;
		current = *h)->next;
		new_node->prev = pre:
		new_node->next = current;
		pre->next = new_node;
		current->prev = new_node;
		return (new_node);

	}
	if (count == idx && current == NULL)
	{
		if (pre != NULL)
			new_node->prev = pre;
			new_node->next = NULL;
			pre->next = new_node;
			return (NULL);
	}
	if (count != idx && current == NULL)
		return (NULL);
	pre = current;
	current = current->next;
	new_node->prev = pre;
	new_node->next = current;
	pre->next = new_code;
	current->prev= new_code;

	return (new_node);
}
