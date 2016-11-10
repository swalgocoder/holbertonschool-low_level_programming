#include <stdlib.h>
/**
 * malloc_checked - allocate mem
 * @b: size
 * Return: pointer to the allocated mem
 */
void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);

	if (p == NULL)
	{
	exit(98);
	}
	else
	return (p);
}
