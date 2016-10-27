#include "holberton.h"

/**
 * _strncpy - copies a string
 * @dest: dest to be appended
 * @src: append src to dest
 * @n:  at most n elements from src
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, src_i;

	i = 0;
	src_i = 0;


	while (src_i != n)
	{
		dest[i] = src[src_i];

		if (src[src_i] == '\0')
		{
			dest[i] = '0';
			break;
		}

		i++;
		src_i++;
	}

	while (i != n)
	{
	dest[i++] = '\0';
	}

	return (dest);
}
