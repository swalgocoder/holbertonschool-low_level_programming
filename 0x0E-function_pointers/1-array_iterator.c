#include "function_pointers.h"

/**
 * array_iterator - array iterator
 * @array: array for print
 * @size: size_t
 * @action: function to call
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
