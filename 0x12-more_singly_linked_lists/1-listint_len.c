#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * listint_len - all elements of the list
 * @h: pointer to the list
 * Return: number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	int i;

	for (i = 0; h != NULL; h = h->next)
	i++;
	return (i);
}
