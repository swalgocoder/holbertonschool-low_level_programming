#include "sort.h"
/**
 * insertion_sort_list - insertion sort
 * @list: linked list of listint_t list
 */
void insertion_sort_list(listint_t **list)
{
  listint_t *query, *tmp_head, *tmp, *prev_query;

	tmp_head = *list; /**@head represents a linked list **/ 
	query = (*list)->next;

	/**if tmp_head-> == NULL: there is only one element in list**/
		
	while (query && tmp_head->next)
	{
	  if (query->n < query->prev->n) /**comparison starts**/
		{
			tmp = query->next;

			while (query->prev)
			  {
			    prev_query = query->prev;
			    if (query->n < prev_query->n)
			      {
			      swap_left(prev_query, query);
			      while ((*list)->prev != NULL)
				*list = (*list)->prev;
			      print_list(*list);
			      }
			    else
			      break;
			  }
			
			query = tmp;
		}
		else
			query = query->next;
	}
}


/**
 * swap_left - swap the identified nodes
 * @left_node: the node to the left( before) of  node
 * @right_node: the node to be checked, somewhere in sorted list
 * @list: the head representing the linked list
 */
void swap_left(listint_t *left_node, listint_t* right_node)
{
	if (left_node->prev)
	  (left_node->prev)->next =right_node;
	if (right_node->next)
	  (right_node->next)->prev = left_node;
	right_node->prev = left_node->prev;
	left_node->next = right_node->next;
	right_node->next = left_node;
	left_node->prev =right_node;

}
