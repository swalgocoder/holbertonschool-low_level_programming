#include "holberton.h"

/**
 * cap_string - capitalizes 1st char of a word in a string
 * @s: pointer to char
 *
 * Return: char pointer
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if ((s[i] >= 'a' && s[i] <= 'z')
		    && (s[i - 1] == ',' || s[i - 1] == ';' || s[i - 1] == '.'
			|| s[i - 1] == '!' || s[i - 1] == '?' || s[i - 1] == '"'
			|| s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{'
			|| s[i - 1] == '}' || s[i - 1] == ' ' || s[i - 1] == '\n'
			|| s[i - 1] == '\t' || s[i - 1] == '\0'))
			s[i] = s[i] - 32;
		i++;
	}
	return (s);
}
