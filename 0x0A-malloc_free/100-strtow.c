#include <stdlib.h>
#include <stdio.h>

/**
 * num_words - helper function to find number of words
 * @temp_val: string
 * Return: value
 */
int num_words(char *temp_val)
{
	int i;

	i = 0;
	while (*temp_val != '\0')
	{
		if (*temp_val == ' ')
			temp_val++;
		else
		{
			while (*temp_val != ' ' && *temp_val != '\0')
				temp_val++;
			i++;
		}
	}
	return (i);
}

/**
 * strtow - convert string to array of words
 * @str: string input
 * Return: array of words
 */
char **strtow(char *str)
{
	int i, j, word_num, word_len;
	char *temp_word, **word_array;

	i = j = word_num = word_len = 0;
	if (str == NULL || *str == '\0')
		return (NULL);
	word_num = num_words(str);
	if (word_num == 0)
		return (NULL);
	word_array = malloc((word_num + 1) * sizeof(char *));
	if (word_array == NULL)
		return (NULL);
	while (*str != '\0' && i < word_num)
	{
		if (*str == ' ')
			str++;
		else
		{
			temp_word = str;
			while (*str != ' ' && *str != '\0')
				word_len++, str++;
			word_array[i] = malloc((word_len + 1) * sizeof(char));
			if (word_array[i] == NULL)
			{
				for (i = i - 1; i >= 0; i++)
					free(word_array[i]);
				free(word_array);
				return (NULL);
			}
			while (*temp_word != ' ' && *temp_word != '\0')
			{
				word_array[i][j] = *temp_word;
				temp_word++; j++;
			}
			word_array[i][j] = '\0';
			i++; j = 0; word_len = 0; str++;
		}
	}
	word_array[word_num] = NULL;
	return (word_array);
