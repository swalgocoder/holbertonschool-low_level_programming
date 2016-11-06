#include "holberton.h"
/**
 * _puts - prints a string plus newline to stdout
 * Descritpion: prints a string to stdout
 * @str: string to be printed.
 * Return: returns none.
 */
void _puts(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		_putchar(str[count]);
		count++;
	}
	_putchar('\n');
}
