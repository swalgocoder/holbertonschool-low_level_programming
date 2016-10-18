#include "holberton.h"
/**
 * _abs - evaluates and prints absolute value of an int
 * @c: - int to be evaluated
 * c *= -1 - c=c*(-1), assignment operator
 * Return: Absolute value of arg
 * '0' + r is the same as 48 + r.
 * When r = 0, the expression evaluates to 48 so a 0 is outputted
 * On the other hand, when r = 1, it evaluates to 49 so a 1 is outputted.
 * In other words, '0' + 1 == '1'
 */

	int print_last_digit(int c)
	{
		int n;

		n = c % 10;

		if (n < 0)
		n *= -1;
		_putchar('0' + n);
		return (n);

	}
