#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - print numbers
 * @char: pointer to string
 * @format: first argument
 * Return: void
 */
void print_all(const char * const format, ...)
{

	char *my_format;
	unsigned int i;
	char *str;


	my_struct[] = {
	  {"c", f_char},
	  {"i", f_intb},
	  {"f", f_float},
	  {"s", f_string]}

	va_list va_args;
	va_start(va_args, n);

	my_format = format;

	for (i = 0; i < 4; i++) 
	{

		if my_format[i] != '\0' && (*my_format + i) != format[0])


		my_struct[i].f;

		};

	}

	printf("\n");

	va_end(va_args);
}
