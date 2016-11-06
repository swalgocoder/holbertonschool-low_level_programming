#include <stdio.h>
/**
 * main - number of arguments passed from command line
 * @argc: number of arguments
 * @argv: values of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	if (argc >= 1)
	printf("%d\n", argc - 1);
	return (0);
}
