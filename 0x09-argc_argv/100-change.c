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
	int sum;
	int count;

	count = 0;
	while (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	sum = atoi(argv[1]);
	while (sum < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	while (sum % 25 >= 0)
	{
		count += sum / 25;
		sum = sum % 25;
	}
	while (sum % 10 >= 0)
	{
		count += sum / 10;
		sum = sum % 10;
	}
	while (sum % 5 >= 0)
	{
		count += sum / 5;
		sum = sum % 5;
	}
	while (sum % 2 >= 0)
	{
		count += sum / 2;
		sum = sum % 2;
	}
	while (sum % 1 >= 0)
	{
		count += sum / 1;
	}
	printf("%d\n", count);
	return (0);
}
