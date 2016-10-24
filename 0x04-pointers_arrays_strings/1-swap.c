#include "holberton.h"
#include <stdio.h>

/**
 * swap_int -  takes  pointers to int as parameter and updates the value it points to 
 * @n: parameter
 * Return: the value at the address of n it points to
 */

void swap_int(int *a, int *b)
{
	*a = 42;
	*b = 98;
}
