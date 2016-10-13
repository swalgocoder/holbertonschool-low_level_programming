#include <stdio.h>
/**
 *main - program starts, evaluates and prints
 *lower case, upper case alphabet, putchar
 *Return: 0
 */
	int main(void)
	{
	char l = 'a';

	while (l <= 'z')
	{
	putchar(l);
	l++;
	}
	l = 'A';
	while (l <= 'Z')
	{
	putchar(l);
	l++;
	}
	putchar('\n');

	return (0);
	}
