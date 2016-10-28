#include "holberton.h"

/**
 * cap_string - capitalize first char of each word
 * @input: input string
 * Return: lol
 */

char *cap_string(char *input)
{
	char *lol;
	char wat;
	int j;

	j = 0;
	lol = input;
	input = lol;
	if (input[j] >= 'a' && input[j] <= 'z')
	{
		input[j] = input[j] - 32;
	}
	j++;
	while (input[j] != '\0')
	{
		wat = input[j - 1];
		if ((input[j] >= 'a' && input[j] <= 'z') &&
		    (wat == ' ' || wat == '\t' || wat == '\n' || wat == ',' ||
		     wat == ';' || wat == '.' || wat == '!' || wat == '?' ||
		     wat == '"' || wat == '(' || wat == ')' || wat == '{' ||
		     wat == '}'))
		{
			input[j] = input[j] - 32;
		}
		j++;
	}
	return (lol);
}
