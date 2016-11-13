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
	int count1, count2, w_count, w_len, array_row, count3;

	w_count = array_row = 0;
	if (str == NULL || str[0] == '\0')
		return (NULL);
	count1 = 0;
	while (str[count1] != '\0')
	{
		if (str[count1] != ' ' && (str[count1 + 1] == ' ' || str[count1 + 1] == '\0'))
		w_count++;
	count1++;
	}
	if (w_count == 0)
		return (NULL);
	myarray = malloc(((w_count + 1) * sizeof(char *)));
	if (myarray == NULL)
		return (NULL);
	count1 = 0;
	while (str[count1] != '\0' && array_row < w_count)
	{
		if (str[count1] != ' ')
		{
			w_len = 0;
			count2 = count1;
			while (str[count2] != ' ' && str[count2] != '\0')
				count2++, w_len++;
			myarray[array_row] = malloc((w_len + 1) * sizeof(char));
			if (myarray[array_row] == NULL)
			{
				while (--array_row >= 0)
					free(myarray[--array_row]);
				free(myarray);
				return (NULL);
			}
			for (count3 = 0; count3 < w_len; count3++, count1++)
				myarray[array_row][count3] = str[count1];
			myarray[array_row++][count3] = '\0';
		}
	count1++;
	}
	myarray[array_row] = NULL;
	return (myarray);
}
