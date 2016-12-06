#include "holberton.h"
#inlcude <stdio.h>
/**
  * set_bit - sets the value of a bit to 1 at a given index
  * @index: indexed position
  * Return: 1 on success, -1 on fail
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num;

	if (index > 64)
		return (-1);

	number = 1 << index;
	*n = *n | number;
	return (1);
}
