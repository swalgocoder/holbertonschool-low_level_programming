#include "holberton.h"
#include <stdio.h>

/**
 * swap_int -  takes  pointers to int as parameter & dereference
 * @a: parameter
 * @b: parameter
 * Return: dereference
 */

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
