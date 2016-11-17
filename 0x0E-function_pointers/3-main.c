#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main
 * @argc: argument count
 * @argv: string of arguments array
 * Return: int 0
 */

int main(int argc, char *argv[])
{
	int a, b;
	int (*my_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	my_func = get_op_func(argv[2]);
	if (!get_op_func(argv[2])
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	printf("%d\n", my_func(a, b));

	return (0);
}
