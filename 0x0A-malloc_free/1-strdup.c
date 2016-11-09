#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 * Return: pointer to myarray or NULL
 */
char *_strdup(char *str)
{
	char *myarray;
	int counter;

	if (str == NULL)
		return (NULL);
	counter = 0;
	while (str[counter] != '\0')
		counter++;
	counter++;
	if (counter != 0)
		myarray = malloc(counter * sizeof(*str));
	else
		return (NULL);
	counter = 0;
	while (str[counter] != '\0')
	{
		myarray[counter] = str[counter];
		counter++;
	}
	return (myarray);
	free(str);
}
