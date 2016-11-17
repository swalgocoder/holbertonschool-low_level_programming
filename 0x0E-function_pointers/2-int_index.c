#include <stdlib.h>

/**
 * int_index - indexing
 * @array: array 2 search
 * @size: array size
 * @cmp: cmp function
 * Return: array[i] or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int count;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	count = 0;
	while (count < size)
	{
	while (cmp(array[count]))
	return (count);
	count++;
	}
	return (-1);
}
