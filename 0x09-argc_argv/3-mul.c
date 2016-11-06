#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - multiplication of  2 numbers
 * @argc: number of arguments
 * @argv: value of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{

	int mul1;
	int mul2;

	mul1 = 0;
	mul2 = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	if (*argv[1] != '\0')
	{
		mul1 = atoi(argv[1]);
	}

	if (*argv[2] != '\0')
	{
		mul2 = atoi(argv[2]);
	}

	printf("%d\n", mul1 * mul2);
	return (0);
}
