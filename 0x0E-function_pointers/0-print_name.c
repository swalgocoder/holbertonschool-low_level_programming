#include "function_pointers.h"

/**
 * print_name - print namne;
 * @name: name
 * @f: function to call
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
f(name);
}
