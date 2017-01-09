#include "lists.h"
/**
 *sum_dlistint -  sums up the data of a dlistint_t list
 *@head: pointer to head pointer of dlistint_t
 *Return: sum
 */


int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum;

	if (head == NULL)
		return (0);
	current = head;
	while (current->next != NULL)
	{
		current = current->next;
		sum += current->n;
	}

	return (sum);
}
