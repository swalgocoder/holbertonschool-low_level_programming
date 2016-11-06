#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "holberton.h"
/**
 * _mydigit - checks if input starts with a number
 * @argc: argument count
 * @i: number of arguments
 * @j: number of element in each argument
 * @argv: argument matrix
 * Return: 0
 */
int _mydigit(int argc, int i, unsigned int j, char *argv[])
{
	for (i = 1; i <= argc; i++)
		for (j = 0; argv[i] != '\0' && j < strlen(argv[i]); j++)
			if (isdigit(argv[i][j]) == 0)
				return (1);
	return (0);
}
/**
 * main - adds all arguments together if they are digits.
 * @argc: argument count only accepts ints separated by spaces.
 * @argv: argument matrix
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int result, i;

	result = 0;
	if (_mydigit(argc, 1, 0, argv) == 1)
	{
		printf("Error\n");
		return (1);
	}
	
	for (i = 1; i < argc; i++)
		result += atoi(argv[i]);
	printf("%d\n", result);
	return (0);
}
