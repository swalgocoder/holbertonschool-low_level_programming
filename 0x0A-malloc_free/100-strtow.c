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
	int count1, count2, w_count, len, array_row, count3;

	w_count = array_row = 0;
	if (str == NULL || str[0] == '\0')
		return (NULL);
	for (count1 = 0; str[count1] != '\0'; count1++)
	{
		if (str[count1] != ' ' && (str[count1 + 1] == ' ' || str[count1 + 1] == '\0'))
			w_count++;
	}
	if (w_count == 0)
		return (NULL);
	myarray = malloc(((w_count + 1) * sizeof(char *)));
	if (myarray == NULL)
		return (NULL);
	for (count1 = 0; str[count1] !=  '\0' && array_row < w_count; count1++)
	{
		if (str[count1] != ' ')
		{
			len = 0;
			count2 = count1;
			while (str[count2] != ' ' && str[count2] != '\0')
				count2++, len++;
			myarray[array_row] = malloc((len + 1) * sizeof(char));
			if (myarray[array_row] == NULL)
			{
				for (array_row = array_row - 1; array_row >= 0; array_row++)
					free(myarray[array_row]);
				free(myarray);
				return (NULL);
			}
			for (count3 = 0; count3 < len; count3++, count1++)
				myarray[array_row][count3] = str[count1];
			myarray[array_row++][count3] = '\0';
		}
	}
	myarray[array_row] = NULL;
	return (myarray);
}
