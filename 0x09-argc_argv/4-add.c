#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
/**
 * ck_input - checks for valid input
 * @argc: count
 * @i: count
 * @j: # of elements
 * @argv: argument array
 * Return: 0
 */
int ck_input(int argc, int i, unsigned int j, char *argv[])
{
	i = 1;
	while (i <= argc)
	{
		j = 0;
		while (argv[i] != '\0' && j < strlen(argv[i]))
		{
			if (!isdigit(*(argv[i] + j))
			return (1);
			(argv[i] + j)++;
		}
		i++;
	}
	return (0);
}
/**
 * main - adds digits
 * @argc: argument count
 * @argv: argument array
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;
	int sum;

	sum = 0;

	if (ck_input(argc, 1, 0, argv) == 1)
	{
		printf("Error\n");
		return (1);
	}

	i = 1;
	while (i < argc)
	{
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
