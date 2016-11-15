#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - pointer to new dog
 * @name: pointer
 * @age: age, float
 * @owner: pinter owner
 * Return: pointer the dog_t struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int count;
	char *swap;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	swap = name;
	count = 0;
	while (*swap)
	{
	count++, swap++;
	}
	if (count == 0)
		return (NULL);
	new_dog->name = malloc(sizeof(char) * count);
	if (new_dog->name == NULL)
		return (NULL);
	new_dog->name = name;
	new_dog->age = age;
	swap = owner;
	count = 0;
	while (*swap)
	{
	count++, swap++;
	}
	if (count == 0)
		return (NULL);
	new_dog->owner = malloc(sizeof(char) * count);
	if (new_dog->owner == NULL)
		return (NULL);
	new_dog->owner = owner;
	return (new_dog);
}
