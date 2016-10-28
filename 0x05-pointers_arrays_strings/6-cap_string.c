#include "holberton.h"

/**
 * cap_string - capitalizes 1st char of a word in a string
 * @c: pointer to char
 *
 * Return: char pointer
 */
char *cap_string(char *c)
{
	int i = 0;

	while (c[i])
	{
		if ((c[i] >= 'a' && c[i] <= 'z')
		    && (c[i - 1] == ',' || c[i - 1] == ';' || c[i - 1] == '.'
			|| c[i - 1] == '!' || c[i - 1] == '?' || c[i - 1] == '"'
			|| c[i - 1] == '(' || c[i - 1] == ')' || c[i - 1] == '{'
			|| c[i - 1] == '}' || c[i - 1] == ' ' || c[i - 1] == '\n'
			|| c[i - 1] == '\t' || c[i - 1] == '\0'))
			c[i] = c[i] - 32;
		i++;
	}
	return (c);
}
