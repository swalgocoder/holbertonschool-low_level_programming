#include "holberton.h"

/**
 * puts2 - input a pointer to string & prints selectively
 * @str: string
 * Return: void
 */

void puts2(char *str)
{

	while (*str != 0)
	{
	_putchar(*str);
	str  = str + 2;
	}
	_putchar('\n');
}
