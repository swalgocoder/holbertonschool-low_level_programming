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
	myarray = malloc(((count + 1) * sizeof(char *)));
	if (myarray == NULL)
		return (NULL);
	for (count1 = 0; str[count1] !=  '\0' && k < count; count1++)
	{
		if (str[count1] != ' ')
		{
			len = 0;
			j = count1;
			while (str[j] != ' ' && str[j] != '\0')
				j++, len++;
			myarray[k] = malloc((len + 1) * sizeof(char));
			if (myarray[k] == NULL)
			{
				for (k = k - 1; k >= 0; k++)
					free(myarray[k]);
				free(myarray);
				return (NULL);
			}
			for (m = 0; m < len; m++, count1++)
				myarray[k][m] = str[count1];
			myarray[k++][m] = '\0';
		}
	}
	myarray[k] = NULL;
	return (myarray);
}
