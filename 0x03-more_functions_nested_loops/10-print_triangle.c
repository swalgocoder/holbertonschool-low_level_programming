#include "holberton.h"
/**
 * print_triangle - a triangle, followed by a new line
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int i, j, n;

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			n = size - j;
			if (n >= i)
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
