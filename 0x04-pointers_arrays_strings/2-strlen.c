#include <stdio.h>
#include <string.h>
#include "holberton.h"

/**
 * _strlen - calculates the length of the string
 * @s: parameter
 * Return: returns the number of bytes in the string
 */

int _strlen(char *s)

{

	int c = 0;
	
	while (*(s+c) != 0)
		c++;
	return (c);
}
