#include "holberton.h"
#inlcude <stdio.h>
/**
  * set_bit - sets the value of a bit to 1 at a given index
  * @index: indexed position
  * Return: 1 on success, -1 on fail
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n = (*n) | (1 << index);
	return (1);
}
