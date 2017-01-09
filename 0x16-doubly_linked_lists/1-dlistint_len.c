#include "lists.h"
/**
 *dlistint_len - prints all the elements of a dlistint_t list
 *@h: A constant pointer pointing to head
 *Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		h = h->next;
	}
	return (i);
}
