#include "holberton.h"
/**
 * _strncat - concatenates two strings.
 * Description: overrights the firsts string's \n, add a new one.
 * @src: string to add to the end of dest.
 * @dest: string to be amended to.
 * @n: number of bytes to copy.
 * Return: returns the string dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int count;
	int count2;

	count = 0;
	count2 = 0;

	while (dest[count] != '\0')
	{
		count++;
	}
	while (count2 < n && src[count2] != '\0')
	{
		dest[count] = src[count2];
		count++;
		count2++;
	}
	dest[count] = '\0';

	return (dest);
}
