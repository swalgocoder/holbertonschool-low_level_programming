#include "holberton.h"

/**
 * print_chessboard - a chessboard
 * @a: chessboard values
 * Return: none
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;

	for (i = 0; i < 8; i++)
	{

		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
			if (j == 7)
				_putchar('\n');

		}

	}
}
