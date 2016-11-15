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
	int i;
	char *temp;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	temp = name;
	for (i = 0; *temp != '\0'; i++, temp++)
		;
	if (i == 0)
		return (NULL);
	new_dog->name = malloc(sizeof(char) * i);
	if (new_dog->name == NULL)
		return (NULL);
	new_dog->name = name;
	new_dog->age = age;
	temp = owner;
	for (i = 0; *temp != '\0'; i++, temp++)
		;
	if (i == 0)
		return (NULL);
	new_dog->owner = malloc(sizeof(char) * i);
	if (new_dog->owner == NULL)
		return (NULL);
	new_dog->owner = owner;
	return (new_dog);
}
