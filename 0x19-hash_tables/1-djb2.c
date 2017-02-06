#include "hash_tables.h"
/**
 * hash_djb - 5381 hasing with fewer collisions & better balancing
 * @str: pointer to a string
 * Return: hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned int hash = 5381;
	unsigned int i = 0;

	while ((i = *str++))
		hash = ((hash << 5) + hash) + i;
	return (hash);
}
  
