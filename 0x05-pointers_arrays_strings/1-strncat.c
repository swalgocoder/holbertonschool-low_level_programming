#include "holberton.h"

/**
 * _strncat - appends src to dest strings
 * @dest: dest to be appended
 * @src: append src to des
 * @n:  at most n bytes from src
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, src_i;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	src_i = 0;

	while (src_i < n && src[src_i] != '\0')
	{
		dest[i] = src[src_i];
		i++;
		src_i++;
	}

	return (dest);
}
