#include <stdio.h>
/**
 * main - program starts, evaluates and prints all numbers from 0 to 99
 *
 * Return: Void
 */
	int main(void)
	{
	int n = 48;
	int i;

	while (n < 58)
	{
	i = 48;
	while (i < 58)
	{
	putchar(n);
	putchar(i);
	if (!(n == 57 && i == 57))
	{
	putchar(',');
	putchar(' ');
	}
	i++;
	}
	n++;
	}
	putchar('\n');

	return (0);
	}
