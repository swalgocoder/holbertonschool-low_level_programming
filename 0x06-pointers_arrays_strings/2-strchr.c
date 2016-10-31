#include "holberton.h"

/**
 *  _strchr - 1st occurrence of the character c in the string s
 * @s: pointer to string
 * @c: the character c
 *
 * Return:  a pointer to 1st occurrence of the character c in the string
 */

char *_strchr(char *s, char c)
	{

	int i;

	i = 0;

	while (s[i] != '\0')
		{

		if (s[i] == c)
		return (s + i);

		else if (s[i] == '\0')
		return (s + i);

		i++;
		}

	return (0);

	}
