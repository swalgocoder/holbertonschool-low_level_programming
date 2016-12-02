#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - all elements of the linked list.
 * @h: pointer.
 * Return: iterator,i
 */
size_t print_list(const list_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
