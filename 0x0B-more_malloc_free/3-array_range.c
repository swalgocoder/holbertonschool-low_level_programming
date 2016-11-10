#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - allocat mem for array
 * @min: min values
 * @max: max values
 * Return: Pointer to myarray, NULL 4 failure
 */
int *array_range(int min, int max)
{
	int *myarray;
	int count, num_elem;

	if (min > max)
		return (NULL);
	num_elem = max - min;

	myarray = malloc(num_elem * sizeof(int));
	if (myarray == NULL)
	return (NULL);

		for (count = 0; count <= num_elem; count++)
		{
			myarray[count] = min++;
		}

	return (myarray);
}
