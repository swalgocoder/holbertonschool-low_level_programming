#include<stdio.h>
#include<string.h>
/**
 *main - program starting point
 *evaluates and prints combinations of signle digit
 *Return: 0
 */
	int main(void)
	{
	int n = 48;

	while (n < 58)
	{
	putchar(n);
	if (n != 57)
	{
	putchar(',');
	putchar(' ');
	}
	n++;
	}
	putchar('\n');

	return (0);
	}
