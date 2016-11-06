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
	for (i = 1; i <= argc; i++)
	{
		for (j = 0; argv[i] != '\0' && j < strlen(argv[i]); j++)
			if (isdigit(argv[i][j]) == 0)
				return (1);
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
	int sum, i;

	sum = 0;
	if (ck_input(argc, 1, 0, argv) == 1)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
		sum += atoi(argv[i]);
	printf("%d\n", sum);
	return (0);
}
