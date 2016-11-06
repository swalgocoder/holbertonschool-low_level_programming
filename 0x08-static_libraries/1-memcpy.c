#include "holberton.h"
/**
 * _memcpy - coppies memory area
 * Description: coppies n bytes from src to dest
 * @src: source to be coppied from
 * @dest: destination to coppy to.
 * @n: The number of bytes to coppy.
 * Return: returns dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	count = 0;

	while (count < n)
	{
		dest[count] = src[count];
		count++;
	}
	return (dest);
}
