#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring.
 * Description: counts the bytes of string one that match string 2.
 * @s: string 1
 * @accept: string 2 to compare to string 1
 * Return: returns the amount of same chars.
 */
unsigned int _strspn(char *s, char *accept)
{
	int count, count2, count3, total;

	count = 0;
	count2 = 0;
	total = 0;

	while ((s[count] != '\0') && (s[count] != ' ') && (s[count] != ','))
	{
		count++;
	}
	while (count2 <= count)
	{
		count3 = 0;
		while (accept[count3] != '\0')
		{
			if (s[count2] == accept[count3])
			{
				total++;
			}
			count3++;
		}
		count2++;
	}
	return (total);
}
