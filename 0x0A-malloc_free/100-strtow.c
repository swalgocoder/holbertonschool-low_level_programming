#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * strtow - break strings to words
 * @str: string to break
 * Return: pointer to myarray of words
 */
char **strtow(char *str)
{
	char **myarray;
	int count1, j, count, len, k, m;

	count = k = 0;
	if (str == NULL || str[0] == '\0')
		return (NULL);
	for (count1 = 0; str[count1] != '\0'; count1++)
	{
		if (str[count1] != ' ' && (str[count1 + 1] == ' ' || str[count1 + 1] == '\0'))
			count++;
	}
	if (count == 0)
		return (NULL);
	array = malloc(((count + 1) * sizeof(char *)));
	if (array == NULL)
		return (NULL);
	for (count1 = 0; str[count1] !=  '\0' && k < count; count1++)
	{
		if (str[count1] != ' ')
		{
			len = 0;
			j = count1;
			while (str[j] != ' ' && str[j] != '\0')
				j++, len++;
			array[k] = malloc((len + 1) * sizeof(char));
			if (array[k] == NULL)
			{
				for (k = k - 1; k >= 0; k++)
					free(array[k]);
				free(array);
				return (NULL);
			}
			for (m = 0; m < len; m++, count1++)
				array[k][m] = str[count1];
			array[k++][m] = '\0';
		}
	}
	array[k] = NULL;
	return (array);
}
