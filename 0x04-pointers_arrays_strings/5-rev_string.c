#include <stdio.h>

/**
 * rev_string - input a pointer to string & reverse it
 * @s: string to reverse
 * Return: void
 */

void rev_string(char *s)
{
	int i, j;
	char stringletter;

	for (i = 0; s[i] != 0; i++)
	{
	}

	j = 0;
	i = i - 1;
	while (j < i)
	{
		stringletter = s[i];
		s[i] = s[j];
		s[j] = stringletter;
		j++;
		i--;
	}

}
