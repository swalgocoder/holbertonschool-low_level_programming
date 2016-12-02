#include "lists.h"
/**
 * print_listint - all elements of a list
 * @h: pointer to the the list
 * Return: # of elements in the list
 */
size_t print_listint(const listint_t *h)
{
	int i;


	for (i = 0; h != NULL; h = h->next)
	{
		printf("%d\n", h->n);
		i++;
	}
	return (i);
}
