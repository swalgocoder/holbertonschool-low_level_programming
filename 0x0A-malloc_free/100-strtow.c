#include <stdlib.h>

/**
 * strtow - convert string to word array
 * @str: string to convert
 * Return: char array
 */
char **strtow(char *str)
{
	char **set, *temp;
	int n, i, j, l;

	i = j = l = n = 0;
	temp = str;
	while (*temp != '\0')
	{
		n++;
		temp++;
	}
	set = malloc((n + 1) * sizeof(char *));
	while (*str != '\0')
	{
		if (*str == ' ')
			str++;
		else
		{
			temp = str;
			while (*temp != '\0' && *temp != ' ')
			{
				temp++;
				l++;
			}
			if (*str != ' ')
				set[i] = malloc(sizeof(char) * l);
			while (*str != ' ' && *str != '\0')
			{
				set[i][j] = *str;
				str++;
				j++;
			}
			set[i][j] = '\0';
			i++;
			j = 0;
			str++;
		}
	}
	set[n] = malloc(sizeof(char));
	set[n] = '\0';
	return (set);
}
