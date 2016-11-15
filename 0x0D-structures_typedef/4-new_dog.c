#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create a new dog!!
 * @name: name of the new dog
 * @age: age of the new dog
 * @owner: lucky owner of new dog
 * Return: the dog_t struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;
	int i;
	char *temp;

	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);
	temp = name;
	for (i = 0; *temp != '\0'; i++, temp++)
		;
	if (i == 0)
		return (NULL);
	doggo->name = malloc(sizeof(char) * i);
	if (doggo->name == NULL)
		return (NULL);
	doggo->name = name;
	doggo->age = age;
	temp = owner;
	for (i = 0; *temp != '\0'; i++, temp++)
		;
	if (i == 0)
		return (NULL);
	doggo->owner = malloc(sizeof(char) * i);
	if (doggo->owner == NULL)
		return (NULL);
	doggo->owner = owner;
	return (doggo);
}
