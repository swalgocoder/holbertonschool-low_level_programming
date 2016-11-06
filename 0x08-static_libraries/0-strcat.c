#include "holberton.h"
/**
 * _strcat - concatenates two strings.
 * Description: overrights the firsts string's \n, add a new one.
 * @src: string to add to the end of dest.
 * @dest: string to be amended to.
 * Return: returns the string dest.
 */
char *_strcat(char *dest, char *src)
{
	int count;
	int count2;

	count = 0;
	count2 = 0;

	while (dest[count] != '\0')
	{
		count++;
	}
	while (src[count2] != '\0')
	{
		dest[count] = src[count2];
		count++;
		count2++;
	}
	dest[count] = '\0';

	return (dest);
}
