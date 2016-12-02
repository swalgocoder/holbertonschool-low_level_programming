#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * listint_len - prints all elements of a list.
 *
 * @h: pointer to the start of the list.
 * Return: returns number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	int count;

	count = 0;
	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
