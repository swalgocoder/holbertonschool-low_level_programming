#include "holberton.h"

/**
 * _strstr - the 1st occurrence of the substr needle
 * @haystak: pointer to string
 * @needel: pointer string
 *
 * Return: a pointer to the begining  that matches
 */

char *_strstr(char *haystack, char *needle)
	{


	char *str_2_find = needle; 
	char *where_2_find = haystack;

	int i;
	int j;
	int c;

	for (i  = 0; *str_2_find  != '\0'; i++)
	{
		c = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
			c = 1;
			}
		}
		j = 0;
		if (c == 1)
		return (s + i);

	}

	return (0);
	}
