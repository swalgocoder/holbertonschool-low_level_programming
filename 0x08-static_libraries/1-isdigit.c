#include "holberton.h"

/**
 * _isdigit- checks for to see if _char is a digit.
 * Description: checks to see if 1 though 9.
 * @c: _char to be checked
 * Return: returns 1 if capital, otherwise 0.
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
