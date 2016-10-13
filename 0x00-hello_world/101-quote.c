#include <stdio.h>
#include <unistd.h>
/*
 *prints to the standard error with write () functions.
 */

/**
 *main - entry point
 *prints a string to the standard error
 *Return: 1
 */
int main(void)
{
	write(2, "and that piece of art is useful - Dora Korpar, 2015-10-19\n"
	, 58);
	return (1);
}
