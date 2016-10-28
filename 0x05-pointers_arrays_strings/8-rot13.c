#include "holberton.h"

/**
 * rot13 - convert each letter by its partner 13
 *
 * @c: char string
 *
 * Return: pointer to converted string
 */
char *rot13(char *c)
{
	int i = 0;

	while (c[i] != 0)
	{
		if ((c[i] >= 'n' && c[i] <= 'z') || (c[i] >= 'N' && c[i] <= 'Z'))
		{
			c[i] -= 13;
		}
		else
		{
			while ((c[i] >= 'a' && c[i] <= 'm') || (c[i] >= 'A' && c[i] <= 'M'))
			{
				c[i] += 13;
			}
		}
		i++;
	}
	return (c);
}
