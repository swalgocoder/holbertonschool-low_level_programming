#include "holberton.h"

/**
 * reverse_array - reverse array
 * @a: pointer
 * @n: number of elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i;
	int swap;

	i = 0;
	swap = 0;
	n= n - 1;

	
	while (i < n)
	{
	swap = a[i];

	a[i] = a[n];

	a[n] = swap;

	i++;
	n--;
	}

}
