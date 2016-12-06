#include "holberton.h"
/**
  * set_bit - sets the value of a bit to 1 at a given index
  * @index: index position
  * @void: describe argument
  * Return: 0 on success
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bit2add;

	bit2add |= 1 << index;;
	if (index > 63)
	return (-1);
	*n = (*n | bit2add);
	return (1);
}
