#include "holberton.h"

/**
 * _isalpha - check to see if letters.
 * Description: checks for lowercase and upercase by using _isalpha
 * @c: c is the charater being checked.
 * Return: returns 1 if c is lowercase or upper, 0 otherwise
 */
int _isalpha(int c)
{

	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
