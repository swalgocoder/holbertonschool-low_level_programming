#include "holberton.h"

/**
 * _islower - check for lowercase letters
 * Description: checks for lowercase by using cusom _islower
 * @c: c is checking the charater to see if its a letter
 * Return: returns 1 if c is lowercase, 0 otherwise
 */
int _islower(int c)
{

	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}

}
