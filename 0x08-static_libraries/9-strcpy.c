#include "holberton.h"
#include <stdio.h>
/**
 * _strcpy - coppies the array to another array.
 * Descritpion: coppies the array src to the buffer pointed to dest.
 * @dest: destination to copy the array to.
 * @src: source to be coppied from.
 * Return: returns none.
 */
char *_strcpy(char *dest, char *src)
{
	int count, count2;

	count = 0;
	count2 = 0;

	while (src[count] != '\0')
	{
		count++;
	}
	count = count + 1;

	while (count2 < count)
	{
		dest[count2] = src[count2];
		count2++;
	}
	return (dest);
}
