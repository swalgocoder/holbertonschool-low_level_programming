#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
* print_binary - prints the binary representation of a number
* @n: number to be represented
* Return: nothing
**/
void print_binary(unsigned long int n)
{
	char num;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n == 1)
	{
		_putchar('1');
		return;
	}
	if (n > 1)
	print_binary(n/2);
	num = (n % 2);
	_putchar(num);
}
