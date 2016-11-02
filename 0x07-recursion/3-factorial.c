#include "holberton.h"

/**
 * factorial - factorial
 * @n: number integer
 * Return: 0 normal,   -1 if n < 0 or indicate an error
 */
int factorial(int n)
{

	if (n == 1)
		return (1);

	else if (n < 0)
		return (-1);

	else if (n > 1)
		return (n * factorial(n-1));
	else
	  	return (0);

}
