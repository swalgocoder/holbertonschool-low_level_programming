#include "holberton.h"

/**
 * _strcat - appends src to dest strings
 * @dest: dest to be appended 
 * @src: append src to des
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i, src_i;

	i = 0;

	while ( dest[i] != '\0')
	{
		i++;
	}

	src_i = 0;

	while (src[src_i] != '\0')
	{
		dest[i] = src[src_i];
		src_i++;
		i++;
	}

	i++;
	dest[i] = '\0';
	return (dest);
}
