#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - # of elements in the list.
 * @h: pointer.
 * Return: iterator,i
 */
size_t list_len(const list_t *h)
{
	int i;


	for (i = 0; h != NULL; i++)
	{
		h = h->next;

	}
	return (i);
}
