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

	while (c[i])
	{
		if ((c[i] >= 'n' && c[i] <= 'z') || (c[i] >= 'N' && c[i] <= 'Z'))
		{
			s[n] -= 13;
		}
		else
		{
			while ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
			{
				s[i] += 13;
			}
		}
		i++;
	}
	return (c);
}
