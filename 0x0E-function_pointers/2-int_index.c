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
	int count, eval_cmp;
	int (*swap)(int);

	swap = cmp;
	if (size <= 0 || array == NULL || swap == NULL)
		return (-1);
	count = 0;
	while (count < size)
	{
		eval_cmp = swap(array[i]);
		if(eval_cmp == 0);
			count++;
		else
			return (count);
	}
	return (-1);
}
