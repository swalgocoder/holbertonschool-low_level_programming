#include "holberton.h"

unsigned int _strspn(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (accept[j] == s[i])
			{
				break;
			}
			j++;
		}
		if (!accept[j])
		{
			break;
		}
		i++;
	}
	return (i);
}
