#include "holberton.h"

char *_strchr(char *s, char c)
{
	while (s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		if (*s == '\0')
		{
			return (0);
		}
		s++;
	}
	return (s);
}
