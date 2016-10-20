#include "holberton.h"

/**
 * print_square - a square with #
 * @size: the size of the square, argument
 * Return: void
 */
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		j = 0;
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
