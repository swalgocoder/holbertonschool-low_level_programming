#include "holberton.h"

/**
 *_sqrt_recursion - sqrt root
 * @n: number
 * Return: -1 if not root found
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	else
		return (rooter(n, 1));
}

/**
 * rooter - root
 * @n: number
 * @i: counter
 * Return: -1;
 */

int rooter(int n, int i)
{
	if (n == (i * i))
		return (i);
	else if (n > (i * i))
		return (rooter(n, i + 1));
	else
		return (-1);
}
