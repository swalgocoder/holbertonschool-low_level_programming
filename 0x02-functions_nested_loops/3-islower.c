#include "holberton.h"
/**
 *_islower - checks if character is lowercase
 *@c: -  The character to check
 *Return: 0
 */

	int _islower(int c)
	{
	if (c > 96 && c < 123)
	return (1);
	else
	return (0);
	}
