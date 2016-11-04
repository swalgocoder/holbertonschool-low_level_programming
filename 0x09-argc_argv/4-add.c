#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argc: number of argument
 * @argv: values of argument, numbers to add
 * Return: 0
 */

int main(int argc, char **argv)
{
	int sum, val, i;

	sum = 0;
	if (argc < 1)
		printf("%d\n", 0);

	i = 0;

	while (argc-- && argc > 0)
	{
		while (argv[argc][i] != '\0')
		{

			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		i++;
		}

		val = atoi(argv[argc]);

		sum += val;
	}

	printf("%d\n", sum);
	return (0);
}
