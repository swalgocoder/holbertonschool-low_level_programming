#include "holberton.h"
#include <stdlib.h>
/**
 * _calloc - allocat mem for array
 * @nmemb: elements of the array
 * @size: size of each element
 * Return: Pointer to allocated mem, NULL 4 failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *pgrid;
	unsigned int count;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pgrid = malloc(nmemb * size);
	if (pgrid == NULL)
	return (NULL);

	for (count = 0; count <= nmemb; count++)
		{
			pgrid[count] = 0;
		}

	return (pgrid);
}
