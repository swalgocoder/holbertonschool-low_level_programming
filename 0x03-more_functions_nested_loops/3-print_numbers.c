#include "holberton.h"
/**
 * print_numbers - prints the numbers, from 0 to 9, followed by a new line.
 *
 * Return: none
 */
void print_numbers(void)
	{
	int start = '0';

	while (start <= '9')
		{
		_putchar(start);
		start++;
		}
	_putchar('\n');
	}
