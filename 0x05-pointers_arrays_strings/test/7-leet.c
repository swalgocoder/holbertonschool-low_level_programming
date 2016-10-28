#include "holberton.h"

/**
 * leet -encodes a string into 1337
 * @s: string
 * Return: string
 */

char *leet(char *s)
{
	int i, j, k;
	char alpha[] = "oOlLeEaAtT";
	char replace[] = "0011334477";

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		k = 0;
		while (alpha[j] != '\0')
		{
			if (s[i] == alpha[j])
			{
				k = j;
				s[i] = replace[k];
			}
			j++;
		}
		i++;
	}
	return (s);
}
