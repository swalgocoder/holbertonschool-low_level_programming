#include "holberton.h"
/**
 *_isdigit - checks if character is lowercase
 *@c: -  The character to check
 *Return: 1 if c is a digit , 0 ohterwise
 */

	int _isdigit(int c)
	{
	
		if (c >= 48 && c <= 57)
		{
		return (1);
		}
		
		return (0);

	}
