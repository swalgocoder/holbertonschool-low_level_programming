#include "holberton.h"
/**
 * print_most_numbers - prints from 0 to 9.
 * Return: none
 */
void print_most_numbers(void)
	{
	int start = '0';

	while (start <= '9')
		{
		if (start != '2' &&  start != '4')
			{
		_putchar(start);
			}
		start++;
		}
	_putchar('\n');
	}
