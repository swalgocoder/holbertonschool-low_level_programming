#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
* find_listint_loop - finds the loop in list
* @head: pointer to elements of type listint_t
* Return: address of the node where the loop starts, NULL if no loop
**/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow_p = head, *fast_p = head;


	if (head == NULL)
		return (NULL);

	while (slow_p && fast_p && fast_p->next)
	{
		slow_p = slow_p->next;
		fast_p = fast_p->next->next;
		if (slow_p == fast_p)
		{

			slow_p = head;
			while (slow_p != fast_p)
			{
				slow_p = slow_p->next;
				fast_p = fast_p->next;
			}
			return (slow_p);
		}
	}

	return (NULL);
}
