#include "holberton.h"
#include <stdio.h>

/**
 * print_array - input a pointer to int
 * @a: pointer pointed to integer
 * @n: integer
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;

	while (i < n)
	{
	printf("%d", a[i]);
	if (i != n - 1)
		{
		printf(", ");
		}
	i++;
	}
	printf("\n");
}
