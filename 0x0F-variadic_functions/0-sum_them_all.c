#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sum
 * @n: first argument
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{

	va_list va_args;
	unsigned sum;
	unsigned int i;

	if (n == 0)
	return (0);

	va_start(va_args, n);

	for (i = 0; i < n; i++)
	{
	sum += va_arg(va_args, int);
	}
	va_end(va_args);
	return (sum);
}
