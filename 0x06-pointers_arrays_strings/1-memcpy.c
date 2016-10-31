#include "holberton.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: pointer to dest
 * @src: pointer to src
 * @n: n bytes of the memory area src
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
	{

	int i;

	i = 0;

	while (i < (int)n)
		{
		dest[i] = src[i];
		i++;
		}

	return (dest);

	}
