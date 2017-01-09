#include "lists.h"
/**
 *insert_dnodeint_at_idx - adds a node to the doubly linked list
 *@h: reference to the beginning of the linked list
 *@idx: The indexed node 2 be added
 *@n: data 2 be added to the new node
 *Return: doubly linked list
 */
dlistint_t *insert_dnodeint_at_idx(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *head_b, *head_a, *node_ins; unsigned int i;

	node_ins = malloc(sizeof(dlistint_t));
	if (node_ins == NULL)
		return (NULL);
	node_ins->n = n;

	node_ins->prev = NULL; head_b = *h; head_a = *h;
	if (idx == 0)
	{
		head_b->prev = node_ins;
		node_ins->next = *h;
		*h = node_ins;
		return (node_ins);
	}
	if (idx != 0 && *h == NULL)
	{
		*h = node_ins;
		node_ins->next = NULL;
		node_ins->prev = NULL;
		return (node_ins);
	}
	node_ins->prev = NULL;
	head_b = *h;
	head_a = *h;

		for (i = 0; i <= idx && head_a != NULL; i++)
		{
			head_b = head_a->next;
			if (i == idx - 1)
			{
				head_a->next = node_ins; node_ins->prev = head_a;
				if (head_b == NULL)
					node_ins->next = NULL;
				else
				{
					node_ins->next = head_b; head_b->prev = node_ins;
				}
				return (node_ins);
			}
			head_a = head_a->next;
		}
	return (NULL);
}
