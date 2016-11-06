#include "holberton.h"
#include <stdio.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * Description: searches for any matching segments.
 * @s: string 1 to be looked through.
 * @accept: string 2 to compare to string 1
 * Return: returns pointer when matching, otherwise null.
 */
char *_strpbrk(char *s, char *accept)
{
	char *a;

	a = accept;

	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
			{
				return (s);
			}
			accept++;
		}
		accept = a;
		s++;
	}
	if (*s == '\0')
	{
		return ('\0');
	}
	return (s);
}
