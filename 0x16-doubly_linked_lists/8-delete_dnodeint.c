#include "lists.h"
/**
 *delete_dnodeint_at_index - deletes the node at index
 *@head: pointer to the beginning of the linked list
 *@index: The node 2 be deleted
 *Return: 1 on success, -1 on fail
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node_del, *head_tmp;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	node_del = *head;
	head_tmp = *head;

	i = 0;
	while (node_del != NULL && i < index)
	{
		head_tmp = node_del;
		node_del = node_del->next;
		i++;
	}
	if (i < index && node_del != NULL)
		return (-1);
	if (i == 0 && node_del->next != NULL)
	{
		*head = (*head)->next;
		(*head)->prev = NULL;
		head_tmp = *head;
		free(node_del);
	}
	else if (i > 0 && node_del->next != NULL)
	{
		head_tmp->next = node_del->next;
		node_del->next->prev = head_tmp;
		free(node_del);
	}
	else if (i > 0 && node_del->next == NULL)
	{
		head_tmp->next = NULL;
		free (node_del);
	}
	else
	{
		*head = node_del->next;
		free(node_del);
	}
	return (1);
}
