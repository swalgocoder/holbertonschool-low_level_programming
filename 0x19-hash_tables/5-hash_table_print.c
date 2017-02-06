#include "hash_tables.h"

/**
 * hash_table_print - printout the hash table
 * @ht: struct
 * Return: nothing
 * credit to jayjay823 https://github.com/jayjay823/holbertonschool-low_level_programming/blob/master/0x19-hash_tables/5-hash_table_print.c
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp_node;
	unsigned long int i;
	int item_count;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0, item_count = 0; i < ht->size; i++)
	{
		tmp_node = ht->array[i];
		item_count = print_list(tmp_node, item_count);
	}
	printf("}\n");
}

/**
 * print_list - print out list
 * @head: beginning of node
 * @count: make sure node already printed
 * Return: count
 * credit to jayjay823 https://github.com/jayjay823/holbertonschool-low_level_programming/blob/master/0x19-hash_tables/5-hash_table_print.c
 */
int print_list(hash_node_t *head, int item_count)
{
	if (head == NULL)
		return (item_count);
	while (head != NULL)
	{
		if (item_count > 0)
			printf(", ");
		printf("\'%s\': \'%s\'", head->key, head->value);
		item_count++;
		head = head->next;
	}
	return (item_count);
}
