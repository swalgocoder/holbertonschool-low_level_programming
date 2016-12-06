#include "holberton.h"

/**
 * clear_bit - set the value of a bit to 0 at a given index
 * @n: ptr to an int
 * @index: indexed position
 * Return: 1 if success, -1 if errors
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n = (*n) & (~(1 << index));
	return (1);

}
