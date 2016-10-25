#include "holberton.h"
#include <stdio.h>

/**
 * reset_to_98 -  takes a pointer to an int as parameter & dereference
 * @n: parameter
 * Return: the value at the address of n it points to
 */

void reset_to_98(int *n)
{
	*n = 98;
}
