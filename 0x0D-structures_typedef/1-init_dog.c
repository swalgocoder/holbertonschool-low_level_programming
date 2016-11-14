#include "dog.h"
#include <stdlib.h>
/**
* init_dog - initialize struct dog
* @d: pointer to struct dog
* @name: pointer,  name of dog
* @age: age of dog
* @owner: pointer, owner of dog
* Return: void
**/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
