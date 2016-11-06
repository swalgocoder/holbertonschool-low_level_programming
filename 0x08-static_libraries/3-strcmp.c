#include "holberton.h"
/**
 * _strcmp - compares two strings.
 * Description: compares string 1 to string 2 by ascii subtraction.
 * @s1: string 1
 * @s2: string 2
 * Return: returns s1 - s2.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1 != '\0' && *s2 != '\0')
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
