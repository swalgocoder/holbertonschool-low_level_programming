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

	va_list addr_arg1;
	unsigned int i;

	va_start(addr_arg1, n);

	for (i = 0; i < n; i++)
	{

		if (addr_arg1 == NULL)
		printf("nil");
		else
		printf("%s", va_arg(addr_arg1, char *));
		if (separator != NULL && i < n - 1)
		printf("%s", separator);
	}

	printf("\n");

	va_end(addr_arg1);
}
