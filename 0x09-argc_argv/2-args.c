#include <stdio.h>

/**
 * main - arguments passed from command line
 * @argc: number of arguments
 * @argv: values of arguments
 * Return: 0 
 */
int main(int argc, char *argv[])
{
	int i;


		for (i = 0; i < argc; i++)
		{
		printf("%s\n", argv[i]);
		}

	return (0);
}
