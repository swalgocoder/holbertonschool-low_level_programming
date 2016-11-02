#include "holberton.h"

/**
 * rooter - function recursion
 * @n: number
 * @i: root value
 * Return: value
 */
int rooter(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i < n)
		return (rooter(n, i + 1));
	return (-1);
}

/**
 * _sqrt_recursion - sqrt of number
 * @n: number
 * Return: root or  -1 if none
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	if (n < 0)
		return (-1);
	return (rooter(n, 1));
}
