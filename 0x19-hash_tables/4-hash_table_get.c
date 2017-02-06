#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value via key
 * @ht: hash table to search
 * @key: key to use
 * Return: value retrieved or Null
 */



char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int indx_key;
	hash_node_t *tmp_node;

	if (ht)
	{
	  indx_key = key_index(( const unsigned char *)key, ht->size);
	  if (ht->array[indx_key])
	  {
	    tmp_node = ht->array[indx_key];
	    while (tmp_node)
	    {
	      if (strcmp(tmp_node->key, (char *)key) == 0)
		return (tmp_node->value);
	    }
          }
	}
	return (NULL);
}
