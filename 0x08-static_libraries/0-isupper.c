#include "holberton.h"

/**
 * _isupper - checks for to see if a capital letter.
 * Description: checks to see if a capital letter.
 * @c: letter to be checked
 * Return: returns 1 if capital, otherwise 0.
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
