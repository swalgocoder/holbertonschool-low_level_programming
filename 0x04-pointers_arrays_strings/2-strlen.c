#include <stdio.h>
#include <string.h>
#include "holberton.h"

/**
 * _strlen - argument: pointer to string
 * @s: parameter
 * Return: returns length of string
 */

int _strlen(char *s)

{

	int c = 0;

	while (*(s + c) != 0)
		c++;
	return (c);
}
