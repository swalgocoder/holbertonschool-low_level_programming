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
	unsigned int i;

	va_start(va_args, n);

	for (i = 0; i < n; i++)
	{

		if (va_arg(va_args, char *) == NULL)
		printf("nil");
		else
		printf("%s", va_arg(va_args, char *));
		if (separator != NULL && i < n - 1)
		printf("%s", separator);
	}

	printf("\n");

	va_end(va_args);
}
