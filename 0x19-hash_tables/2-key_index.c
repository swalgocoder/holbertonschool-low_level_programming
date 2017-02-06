#include "hash_tables.h"

/**
 * key_inde - find key 
 * @key: key in the hash
 * @size: size of hash
 * Return: the hash value
 */




unsigned long int key_index(const unsigned char *key, unsigned long int size)

{

/* size = keys % hash*/
/* size will contain the number of keys in hash*/
/* the size of hash is also the total number of key/valuie pairs in the hash*/

	unsigned long int value;

	value = hash_djb2(key);
	value = value % size;
	return (value);
}
