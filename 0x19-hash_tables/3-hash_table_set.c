#include "hash_tables.h"

/**
* hash_table_set - append element to the hash table
* with chaining resolving collision
* @ht: hash table
* @key: hash key
* @value: the value 
* Return: 1 on success, else 0
**/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *tmp_node = malloc(sizeof(hash_node_t)), *cur_node;

	if (tmp_node == NULL)
		return (0);

	if (!ht || !key || *key == '\0' || !value)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (ht->array[index])
	{
		cur_node = ht->array[index];
		while (cur_node)
		{
			if (strcmp(cur_node->key, (char *)key) == 0)
			{
				free(cur_node->value);
				cur_node->value = (char *)strdup(value);
				return (1);
			}
			cur_node = cur_node->next;
		}
	}

	tmp_node->key = (char *)strdup(key);
	if (tmp_node->key == NULL)
	{
		free(tmp_node);
		return (0);
	}
	tmp_node->value = (char *)strdup(value);
	if (tmp_node->value == NULL)
	{
		free(tmp_node->key);
		free(tmp_node);
		return (0);
	}
	tmp_node->next = ht->array[index];
	ht->array[index] = tmp_node;
	return (1);
}
