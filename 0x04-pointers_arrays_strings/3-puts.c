#include "holberton.h"
/**
 * _puts - argument: pointer to string to be printed
 * @str: first parameter
 * Return: string
 */


void _puts(char *str)
{
	while (*str != '\0')
	{
	  _putchar(*str);
	  str++;
	}
	_putchar('\n');
}
