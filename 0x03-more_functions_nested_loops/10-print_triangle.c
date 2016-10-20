#include "holberton.h"

/**
 * print_triangle - print out a triangle
 * @size: first operand
 * Return: unknwon
 */

void print_triangle(int size)
{
	int i, j, k;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			k = size - j;
			if (k >= i)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		j = 0;
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
