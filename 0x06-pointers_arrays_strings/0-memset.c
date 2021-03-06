#include "holberton.h"

/**
 * _memset - fills the first n bytes of the memory the constant byte b
 * @s: pointer to s
 * @b: the constant
 * @n: the first n bytes of the memory
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
	{
	int i;

	i = 0;

	while (i < (int)n)
		{
		s[i] = b;
		i++;
		}

	return (s);

	}
