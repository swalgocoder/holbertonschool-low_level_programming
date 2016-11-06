#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

/**
 * mydigit - checks input
 * @argc: number of argument
 * @i: number of arguments
 * @j: # of element of argument
 * @argv: pointer to argument matrix
 * Return: 1 for failure else 0
 */

int mydigit(int argc, int i, unsigned int j, char *argv[])
{
	for (i = 1; i <= argc; i++)
	{
		for (j = 0; argv[i] != '\0' && j < strlen(argv[i]); j++)
		{
		if (isdigit(argv[i][j]) == 0)
		return (1);
		}
	}
		return (0);
}

/**
 * main - adds all digits
 * @argc: number of argument
 * @argv: pointer argument matrix
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i;
	int sum;

	sum = 0;

	for (i = 1, sum = 0; i < argc; i++)
	{
		if (mydigit(argc, 1, 0, argv) == 1)
		{
		printf("Error\n");
		return (1);
		}
	
		sum += atoi(argv[i]);
	}
	
	printf("%d\n", sum);
	return (0);
}
