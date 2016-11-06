#include "holberton.h"
#include <stdio.h>
/**
 * _atoi - coppies string and makes it an int.
 * Descritpion: coppies the string into an int
 * @s: string to copy
 * Return: returns string as an int.
 */
int _atoi(char *s)
{
	int count, sign, num;

	count = 0;
	sign = 1;
	num = 0;

	while ((s[count] < '0' || s[count] > '9') && (s[count] != '\0'))
	{
		if (s[count] == '-')
		{
			sign = sign * -1;
		}
		count++;
	}
	while (s[count] != '\0' && s[count] >= '0' && s[count] <= '9')
	{
		num = num * 10 - (s[count] - '0');
		count++;
	}
	sign = sign * -1;
	return (num * sign);
}
