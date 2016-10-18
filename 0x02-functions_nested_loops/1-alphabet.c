#include "holberton.h"
#include <stdio.h>
/**
 * print_alphabet -  program starts, evaluates and prints a string
 * main - program entry point
 * Description: You are not allowed to include standard libraries.
 * _putchar(int char) writes a character.
 * separated by a comma and space
 * Return: Returns 0
 */
	void print_alphabet(void)
	{
	char c = 'a';

	while (c <= 'z')
	{
	_putchar(c);
	c++;
	}
	_putchar('\n');
	}
