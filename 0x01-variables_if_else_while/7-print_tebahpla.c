#include <stdio.h>
/**
 *main - program starts, evaluates and prints
 *lower case, alphabet, in reverse order, putchar
 *Return: 0
 */
	int main(void)
	{
	char l = 'z';

	while (l >= 'a')
	{
	putchar(l);
	l--;
	}
	putchar('\n');

	return (0);
	}
