#include "lists.h"
/**
 *get_dnodeint_at_index -  get the indexed node of a dlistint_t list
 *@head: pointer to head pointer of dlistint_t
 *@index: integer
 *Return: poiner to indexed node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count;

	count = 0;
	if (head == NULL)
		return (0);
	current = head;

	while (current->next != NULL && count < index)
	{
		current = current->next;
		count += 1;
	}
	if (count != index)
		return (NULL);
return (current);
}
