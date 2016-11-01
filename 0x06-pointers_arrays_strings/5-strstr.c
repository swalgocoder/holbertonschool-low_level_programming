#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - the first occurence of the substring needle
 * in the string haystack
 * @haystack: string 4 searching
 * @needle: string 4 finding
 * Return: pointer to the beginning of the located substring
 */


char *_strstr(char *haystack, char *needle)
{

	while (*haystack != '\0')
	{
		char *initial_located = haystack;
		char *str_pattern_2find = needle;

		while (*str_pattern_2find == *haystack && *str_pattern_2find != '\0'
		       && *haystack != '\0')
		{
			haystack++;
			str_pattern_2find++;
		}
		if (*str_pattern_2find == '\0')
			return (initial_located);
		haystack = initial_located + 1;
	}
	return ('\0');
}
