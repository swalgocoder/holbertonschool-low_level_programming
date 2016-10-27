#include "holberton.h"

/**
 * string_toupper - lower to uppercase
 * @c_str: char string pointer
 * Return: uppercase
 */

char *string_toupper(char *c_str)
{
	char *output;
	int i;

	output = c_str;


	for (i = 0; c_str[i] != '\0'; i++)
		{

		if (c_str[i] >= 'a' && c_str[i] <= 'z')
		c_str[i] = c_str[i] - 32;

		}

	return (output);
}
