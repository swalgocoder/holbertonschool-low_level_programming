#include "holberton.h"

/**
 * _strcat - appends src to dest strings
 * @dest: dest to be appended 
 * @src: append src to des
 * @n:  at most n bytes from src
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, src_i;

	i = 0;

	while ( dest[i] != '\0')
	{
		i++;
	}

	src_i = 0;

	while (src_i < n)
	{
		dest[i] = src[src_i];
		src_i++;
		i++;
	}

	i++;

	if (src_i < n)
	{
	dest[i] = '\0';
	}

	return (dest);
}
