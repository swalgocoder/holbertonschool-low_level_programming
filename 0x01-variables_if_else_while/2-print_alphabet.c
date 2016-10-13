#include <stdio.h>
#include <stdlib.h>
/**
 * main - programm starts
 * evaluates and prints letters,lowercase  putchar function
 * Return: 0
 */
	int main(void)
	{
	char i = 'a';

	while (i <= 'z')
	{
	putchar(i);
	i++;
	}
	putchar('\n');

	return (0);
	}
