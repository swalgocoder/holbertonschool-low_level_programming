#include <stdio.h>
/**
 *main - programm starts
 *evaluates and prints numbers 0 to 9  putchar function
 *Return: 0
 */
	int main(void)
	{
	int n = 48;

	while (n < 58)
	{
	putchar(n);
	n++;
	}
	putchar('\n');

	return (0);
	}
