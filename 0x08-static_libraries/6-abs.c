#include "holberton.h"

/**
 * _abs - prints the absolute value of a number
 * Description: checks value mutiples -1 to negative numbers.
 * @n: n is the number being checked.
 * Return: returns none.
 */
int _abs(int n)
{

	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else
	{
		return (n);
	}
}
