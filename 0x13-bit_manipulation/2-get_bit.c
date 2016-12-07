#include "holberton.h"
/**
 * get_bit - bit value of a bit at a given index
 * @n: int
 * @index: indexed position
 * Return: bit value of the bit at index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index > sizeof(unsigned long int) * 8 - 1)
		return (-1);

	mask = 1;

	mask = mask << index;

	(n & mask) ? return (1) : return (0)
}
