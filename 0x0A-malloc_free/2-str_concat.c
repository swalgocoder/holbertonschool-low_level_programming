#include <stdlib.h>

/**
 * str_len - length of string
 * @s: string
 * Return: length
 */
int str_len(char *s)
{
	int count;

	for (count = 0; *s != '\0'; count++)
	{
		s++;
	}
	return (count);
}
/**
 * str_concat - concatenates s1 s2
 * @s1: first string
 * @s2: second string
 * Return: address of mystr otherwise null
 */
char *str_concat(char *s1, char *s2)
{
	char *mystr, *swap;
	int count, count2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	count = str_len(s1);
	count2 = str_len(s2);
	count2++;
	if (count != 0 || count2 != 0)
		mystr = malloc(count * sizeof(*s1) + count2 * sizeof(*s2));
	else
		return (NULL);
	if (mystr == NULL)
		return (NULL);
	swap = mystr;
	while (*s1)
	{
		*mystr = *s1;
		mystr++;
		s1++;
	}
	while (*s2 != '\0')
	{
		*mystr = *s2;
		mystr++;
		s2++;
	}
	*mystr = '\0';
	return (swap);
}
