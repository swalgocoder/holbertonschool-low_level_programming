#include "holberton.h"

/**
 * more_numbers - print numbers 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int c;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c >= 10)
			{
				_putchar(c / 10 + '0');
			}
			_putchar(c % 10 + '0');
		}
		_putchar('\n');
		c = 0;
	}
}
