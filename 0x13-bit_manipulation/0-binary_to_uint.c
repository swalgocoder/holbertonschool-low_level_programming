#include <stdio.h>
#include "holberton.h"
/**
 * binary_to_uint - binary to unsigned int
 * @b: ptr to char str
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
  unsigned int sum;
  int len,multipl;

  
  if (b == NULL)
	return (0);

	for (len = 0; b[len] != 0; len++);
	len--;

	multipl = 1;
	while (b[len])
	{

		if (b[len] != '0' && b[len] != '1')
		return (0);
		if (b[len] == '1')
		sum += multipl;
		multipl *=2;
		len--;
	}
	return (sum);
}
