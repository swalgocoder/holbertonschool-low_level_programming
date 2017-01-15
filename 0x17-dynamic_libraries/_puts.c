#include "holberton.h"

void _puts(char *s)
{
	int c;

	c = 0;
	while (s[c] != '\0')
	{
		_putchar(s[c]);
		c++;
	}
	_putchar('\n');
}
