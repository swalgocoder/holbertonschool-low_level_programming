#include "holberton.h"
/**
 *_isalpha - checks if character is s a letter, lowercase or uppercase
 *@c: -  The character to check
 *Return: 1 if c is a letter, lowercase or uppercase, 0 otherwise
 */

	int _isalpha(int c)
	{
		if (c > 96 && c < 123)
		{
		return (1);
		}
		else if (c > 65 && c < 90)
		{
		return (1);
		}
		else
		{
		return (0);
		}
	}
