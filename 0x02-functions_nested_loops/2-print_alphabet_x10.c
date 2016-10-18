#include "holberton.h"
#include <stdio.h>
/**
 * print_alphabet_x10 -  program starts, evaluates and prints a string
 * main - program entry point
 * _putchar(int char) writes a character.
 * Return: Returns 0
 */

	void print_alphabet_x10(void)
	{
	int i = 1;
	char c;

	while (i <= 10)
	{
	c = 'a';

	while (c <= 'z')
	{
	_putchar(c);
	c++;
	}

	_putchar('\n');
	i++;
	}
	}
