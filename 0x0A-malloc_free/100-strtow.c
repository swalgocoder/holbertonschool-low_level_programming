#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"
/**
 * str_len - length of string
 * @s: string
 * Return: length
 */
int str_len(char *s)
{
  unsigned int count;

  for (count = 0; s[count] != '\0'; count++)
	{
	}
 return (count);
}

#include <stdlib.h>
#include "holberton.h"
/**
 * strtow - array of strings
 * @str: strings inside of array
 * Return: pointer to array
 */

char **strtow(char *str)
{
  int **mygrid, swap;
	int count, count2;
	int length;

	if (str == NULL || str =="")
		return (NULL);
	mygrid = malloc(sizeof(char *str));


	if (mygrid == NULL)
		return (NULL);

	length = str_len(str);
	

	count = 0;
	while (count < length) 
	{
		if (str[count] !=' ')

		  count2 = count;
		while (str[count2] !=' ')  
		{			
			mygrid[count2] = str[count2];
			count2++;
		}

	   count = count2;
	   mygrid(count) ='';

	count++;
	}
	
	return (mygrid);
}
