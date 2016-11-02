#include "holberton.h"

/**
 * _puts_recursion -  print string recursively
 * @s: string
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else if (*s == '\0')
	{
		_putchar('\n');
	}
}
