#include "holberton.h"
#include <stdio.h>
/**
 * _strstr - searches a string for a substring
 * Description: searches for any matching segments.
 * @haystack: string 1 to be looked through.
 * @needle: string 2 to compare to string 1
 * Return: returns pointer when matching, otherwise null.
 */
char *_strstr(char *haystack, char *needle)
{
	char *a, *b;

	a = needle;
	b = haystack;

	while (*haystack != '\0')
	{
		a = needle;
		b = haystack;
		while (*haystack == *a && *haystack != '\0'
			&& *a != '0')
		{
			haystack++;
			a++;
		}
		if (*a == '\0')
		{
			return (b);
		}
		haystack = b + 1;
	}
	return ('NULL');
}
