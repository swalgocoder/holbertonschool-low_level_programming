#include "hash_tables.h"

/**
 * hash_table_t - create a hash table
 * @size: size of table
 * Return head pointer to hastable struct
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *table_ptr = malloc(sizeof(hash_table_t));

	if (size < 1)
		return (NULL);
	
	if (table_ptr == NULL)
	  return (NULL);
	table_ptr->size = size;
	table_ptr->array = malloc(sizeof(hash_node_t *) * size);
	if (table_ptr->array == NULL)
	    return (NULL);
	for (i = 0; i <size; i++)
	    table_ptr->array[i] = NULL;
	return (table_ptr);
}
