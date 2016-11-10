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

	for (count = 0; *(s + count); count++)
	{
	}
	return (count);
}
/**
 * string_nconcat - concatenates s1 s2
 * @s1: string 1
 * @s2: string 2
 * @n: number of bites of s2
 * Return: address of mystr otherwise null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *mystr;
	unsigned int count_l, count2_l, count, count2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	count_l = str_len(s1);
	count2_l = str_len(s2);

	count2_l++;

	if (n >= count2_l)
		mystr = malloc((count_l + count2_l) * sizeof(mystr));
	else
		mystr = malloc((count_l + n + 1) * sizeof(mystr));
	if (mystr == NULL)
		return (NULL);

	count = 0;
	while (count < count_l)
	{
	*(mystr + count) = *(s1 + count);
	count++;
	}

	count2 = 0;
	while (count2 < count2_l && count2 < n)
	{
	*(mystr + count) = *(s2 + count2);
	count++;
	count2++;
	}
*(mystr + count) = '\0';
return (mystr);
}
