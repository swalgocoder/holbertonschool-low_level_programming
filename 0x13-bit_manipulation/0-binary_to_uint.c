#include <stdio.h>
#include "holberton.h"
/**
 * binary_to_uint - binary to unsigned int
 * @b: ptr to char str
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
unsigned int binary_to_uint(const char *b)
{
	int i, str_len;
	unsigned int uint, binary_multi;

	/* check if char * is valid */
	if (b == NULL)
		return (0);
	for (str_len = 0; b[str_len] != '\0'; str_len++)
	{
		if (b[str_len] != '0' && b[str_len] != '1')
			return (0);
	}

	/* convert char * to Binary */
	uint = 0;
	binary_multi = 1;
	i = str_len - 1;
	while (i >= 0)
	{
		if (b[i] == '1')
			uint += binary_multi;
		i--;
		binary_multi *= 2;
	}
	return (uint);
}
