#include <stdio.h>

/**
 * print_diagsums - the sum of the two diagonals of a square matrix
 * @a: array
 * @size: size of square
 * Return: none
 */

void print_diagsums(int *a, int size)
{
	int i, value, sum, sum2;


	value = 0;
	sum = sum2 = 0;
	for (i = 0; i < (size * size); i = i + size + 1)
	{
		value = a[i];
		sum = sum + value;
	}
	i = size - 1;

	while (i < ((size * size) - 1))
	{
		value = a[i];
		sum2 = sum2 + value;
		i = i + (size - 1);
	}
	printf("%d, %d\n", sum, sum2);
}
