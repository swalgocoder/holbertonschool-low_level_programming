#include <stdlib.h>

/**
 * str_concat - concatenate
 * @s1: string 1
 * @s2: string 2
 *
 * Return: Pointer to new space in memory, NULL if it fails
 */
char *str_concat(char *s1, char *s2)
{
	char *mys;
	int count, l1, l2, count2;

	count = l1 = l2 = 0;
	while (s1[count] != '\0')
	{
		l1++;
		count++;
	}
	count = 0;
	while (s2[count] != '\0')
	{
		l2++;
		count++;
	}
	mys = malloc((l1 + l2) * sizeof(*s1));
	if (mys == NULL)
		return (NULL);
	count = 0;
	while (count < l1)
	{
		mys[count] = s1[count];
		count++;
	}
	count2 = 0;
	while (count2 < l2)
	{
		mys[count] = s2[count2];
		count++;
		count2++;
	}
	return (mys);
}
