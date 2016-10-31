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
	int j;


	for  (i  = 0; s[i] != '\0'; i++)
		{
		}

	for  (j = 0; j <= i; j++)
		{
		if (*(s + j) == c)
		return (s + j);
		}


	if (*s == '\0')
		{
		return (0);
		}
	else
		{
		return ('\0');
		}
	}
