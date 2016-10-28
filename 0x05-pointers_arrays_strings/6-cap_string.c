#include "holberton.h"

/**
 * cap_string - capitalizes 1st char of a word in a string
 * @s: pointer to char
 *
 * Return: char pointer
 */

char *cap_string(char *s)
{
	int i, j;
	char special_char[] = " \t\n,;.!?\"(){}";

	
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (i == 0)
			{
				s[0] -= ' ';
			}
    }
      for (j = 0; spec_array[j] != '\0'; j++)
			{
				if (s[i - 1] == spec_array[j])
				{
					s[i] -= ' ';
				}
			}
	}

  return (s);
}
