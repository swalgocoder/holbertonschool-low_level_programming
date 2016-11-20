#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - print numbers
 * @separator: pointer to delimiter
 * @n: first argument
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{

	va_list va_args;
	unsigned int i, j;
	char *str;

	va_start(va_args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(va_args, int);

		j = 0;
		while (str[j] != '\0' && separator != NULL)
		{
		printf("%c", str[j];
		j++;
		};

	}

	printf("\n");

	va_end(va_args);
}
