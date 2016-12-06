#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
* print_binary - binary representation of a num
* @n: number
* Return: void
**/



void print_binary(unsigned long int n)
{
    unsigned i;

    for (i = 1 << 31; i > 0; i = i / 2)
      (n & i) ? _putchar('1'): _putchar('0');
}
