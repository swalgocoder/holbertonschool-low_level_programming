#include "holberton.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: first parameter
 * Return: reversed
 */

void print_rev(char *s)
{
	int i;
	char array[150];

	i = 0;


	while (*s != 0)
	{
	array[i] = *s;
	i++;
        s++;
	}

	while (i >= 0)
	{
	  _putchar(array[i]);
	  i--;

	}
	_putchar('\n');
}	
