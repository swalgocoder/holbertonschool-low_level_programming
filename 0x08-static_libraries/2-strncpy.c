#include "holberton.h"
/**
 * _strncpy - copies a string.
 * Description: copies source to destination
 * @src: string to copy to  dest.
 * @dest: string to be copied to.
 * @n: number of bytes to copy.
 * Return: returns the string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int count, count2;

	count = 0;
	count2 = 0;

	while (count < n)
	{
		dest[count2] = src[count];
		if (src[count] == '\0')
		{
			break;
		}
		count++;
		count2++;
	}
	while (count2 != n)
	{
		dest[count2] = '\0';
		count2++;
	}

	return (dest);
}
