#include <stddef.h>
#include "lists.h"
/**
 * sum_listint - summing of all data (n) of list
 * @head: a pointer to the list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum;


	for (sum = 0; head != NULL; head = head->next)
	{
		sum += head->n;
	}
	return (sum);
}
