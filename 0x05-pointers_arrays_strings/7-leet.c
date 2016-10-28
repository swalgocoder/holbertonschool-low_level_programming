#include "holberton.h"

/**
 * leet - convert a string 
 * @c: string
 * Return: converted string `c`
 */

char *leet(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] == 'a' || c[i] == 'A')
			c[i] = '4';
		if (c[i] == 'e' || c[i] == 'E')
			c[i] = '3';
		if (c[i] == 'o' || c[i] == 'O')
			c[i] = '0';
		if (c[i] == 't' || c[i] == 'T')
			c[i] = '7';
		if (c[i] == 'l' || c[i] == 'L')
			c[i] = '1';
	}

	return (c);
}
