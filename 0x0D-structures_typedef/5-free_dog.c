#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free struc
 * @d: pointer struc
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
