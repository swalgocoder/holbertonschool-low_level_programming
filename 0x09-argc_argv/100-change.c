#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - the minimum number of coins 4 change
 * @argc: number of arguement
 * @argv: value of argument
 * Return: 0
 */

int main(int argc, char **argv)
{
	int sum, count;

	count = 0;
	while (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	sum = atoi(*(argv + 1));
	while (sum < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	if (sum % 25 >= 0)
	{
		count += sum / 25;
		sum %= 25;
	}
	if (sum % 10 >= 0)
	{
		count += sum / 10;
		sum %= 10;
	}
	if (sum % 5 >= 0)
	{
		count += sum / 5;
		sum %= 5;
	}
	if (sum % 2 >= 0)
	{
		count += sum / 2;
		sum %= 2;
	}
	if (sum % 1 >= 0)
	{
		count += sum / 1;
	}
	printf("%d\n", count);
	return (0);
}
