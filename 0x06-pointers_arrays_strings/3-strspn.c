#include "holberton.h"

/**
 *  _strspn - the number of bytes in the initial segment of s
 * @s: pointer to string
 * @accept: the character string
 *
 * Return: unsigned int
 */

unsigned int _strspn(char *s, char *accept)
	{

	int i;
	int j;
	unsigned int n;

	n = 0;

	for (i  = 0; s[i] != '\0' && s[i] != ' '; i++)
		{
		for (j = 0; accept[j] != '\0'; j++)
			{
			if (s[i] == accept[j])
				n++;
			}
		}

	if (*s == '\0')
		{
		return (0);
		}
	else
		{
		return (n);
		}
	}
