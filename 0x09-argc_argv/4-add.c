#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
/**
 * mydigit - checks if input starts with a number
 * @argc: argument count
 * @i: number of arguments
 * @j: number of element in each argument
 * @argv: pointer to argument matrix
 * Return: 0 on success
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
 * main - adds all arguments together if they are digits.
 * @argc: argument count only accepts ints separated by spaces.
 * @argv: pointer argument matrix
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int result;
	int i;

	result = 0;

	if (mydigit(argc, 1, 0, argv) == 1)
	{
		printf("Error\n");
		return (1);
	}
	
	for (i = 1; i < argc; i++)
	{
	result += atoi(argv[i]);
	}
	
	printf("%d\n", result);
	return (0);
}
