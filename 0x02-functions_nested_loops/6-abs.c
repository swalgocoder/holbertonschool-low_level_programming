#include "holberton.h"
/**
 * _abs - evaluates and prints absolute value of an int
 * @c: - int to be evaluated
 * c *= -1 - c=c*(-1), assignment operator
 * Return: Absolute value of arg
 */

	int _abs(int c)
	{
		if (c < 0)
		c *= -1;
		return (c);
	}
