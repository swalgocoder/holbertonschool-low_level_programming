#include <stdlib.h>

/**
 * int_index - find index
 * @array: array to search
 * @size: size of array
 * @cmp: function
 * Return: index or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, cmp_val;
	int (*lol)(int);

	lol = cmp;
	i = 0;
	if (size <= 0 || array == NULL || lol == NULL)
		return (-1);
	while (i < size)
	{
		cmp_val = lol(array[i]);
		if (cmp_val == 0)
			i++;
		else
			return (i);
	}
	return (-1);
}
