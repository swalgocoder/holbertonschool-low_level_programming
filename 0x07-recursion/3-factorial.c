#include "holberton.h"

/**
 * factorial - factorial
 * @n: number integer
 * Return: 1 if n=1 or 0,   -1 if n < 0 or indicate an error
 */
int factorial(int n)
{

	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	else if (n > 1)
		return (n * factorial(n - 1));

	else
		return (n);
}
