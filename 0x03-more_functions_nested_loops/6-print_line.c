#include "holberton.h"

/**
 * print_line - print _
 * @n: first operand
 * Return: unknown
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
