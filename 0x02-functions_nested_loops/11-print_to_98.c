#include <stdio.h>
/**
 * print_to_98 - prints natural numbers to 98
 * @n: the starting int
 *
 * Return: none
 */
void print_to_98(int n)
{
	int start;

	if (n < 98)
	{
		for (start = n; start < 98; start++)
		{
			printf("%d, ", start);
		}
	}
	else if (n > 98)
	{
		for (start = n; start > 98; start--)
		{
			printf("%d, ", start);
		}
	}
	printf("98\n");
}
