#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_list - prints all elements of the linked list.
 * @h: pointer.
 * Return: returns the count.
 */
size_t print_list(const list_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}
