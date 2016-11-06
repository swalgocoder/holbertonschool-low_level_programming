#include "holberton.h"
/**
 * _memset - fills memory with a constant byte.
 * Description: fills the first n bytes with the constant b.
 * @s: the pointer to the location.
 * @b: The char to fill each space.
 * @n: The first number of spaces to be fill by b.
 * Return: returns s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	count = 0;

	while (count < n)
	{
		s[count] = b;
		count++;
	}
	return (s);
}
