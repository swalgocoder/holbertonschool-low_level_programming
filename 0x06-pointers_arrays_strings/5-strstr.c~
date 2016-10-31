#include "holberton.h"

/**
 * _strpbrk - the 1st occurrence of bytes in the s of accept
 * @s: pointer to string
 * @accept: the character string
 *
 * Return: a pointer to the byte in s that matches
 */

char *_strpbrk(char *s, char *accept)
	{

	int i;
	int j;
	int c;

	for (i  = 0; s[i] != '\0'; i++)
	{
		c = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
			c = 1;
			}
		}
		j = 0;
		if (c == 1)
		return (s + i);

	}

	return (0);
	}
