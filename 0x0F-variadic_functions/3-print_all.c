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

	typedef struct op
	{
	  char *op;
	  int (*f)(int a, int b);
	} op_t;

	int (*get_op_func(char *s))(int, int);

	int op_add(int, int);
	int op_sub(int, int);
	int op_mul(int, int);
	int op_div(int, int);
	int op_mod(int, int);



	opt my_struct[] = {
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
