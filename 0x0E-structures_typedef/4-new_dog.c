#include "dog.h"
#include <stdio.h>

/**
 * new_dog - creates a new dog.
 * @name: name of the dog
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: pointer of dog_t type
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t dog;

	if (name != NULL && owner != NULL)
	{
		dog->name = name;
		dog->age = age;
		dog->owner = owner;
	}
	else
		return NULL;
}
