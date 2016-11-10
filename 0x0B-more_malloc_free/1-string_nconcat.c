#include <stdlib.h>
#include <stdio.h>
/**
 * str_len - length of string
 * @s: string
 * Return: length
 */
int str_len(char *s)
{
	unsigned int count;

	for (count = 0; *s != '\0'; count++)
	{
		s++;
	}
	return (count);
}
/**
 * string_nconcat - concatenates s1 s2
 * @s1: string 1
 * @s2: string 2
 * Return: address of mystr otherwise null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *mystr;
	unsigned int count, count2, count3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	count = str_len(s1);
	count2 = str_len(s2);
	count2++;

	if (n >= count2 - 1)
	  n = count2;
	mystr = malloc((count + count2) * sizeof(*mystr));

	if (mystr == NULL)
		return (NULL);

	count = 0;
	while (s1[count] != '\0')
	{
		mystr[count] = s1[count];
		count++;
	}

	count3 = 0;	
	while (s2[count3] != '\0' && count3 <= n)
	{
		mystr[count] = s2[count3];
		count3++;
		count++;
	}
	mystr[count] = '\0';
	return (mystr);
}
