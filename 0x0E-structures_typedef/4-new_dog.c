#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

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
	int i = 0, len_name = 0, len_owner = 0;
	char *name_copy, *owner_copy;
	dog_t *dog_copy;

	while (*(name + len_name) != '\0')
		len_name++;
	while (*(owner + len_owner) != '\0')
		len_owner++;

	dog_copy = malloc(sizeof(dog_t));
	name_copy = malloc(len_name * sizeof(char));
	owner_copy = malloc(len_owner * sizeof(char));
	if (dog_copy == NULL || name_copy == NULL || owner_copy == NULL)
		return (NULL);

	for (i = 0; i < len_name; i++)
		*(name_copy + i) = *(name + i);
	for (i = 0; i < len_owner; i++)
		*(owner_copy + i) = *(owner + i);
	(*dog_copy).name  = name_copy;
	(*dog_copy).age = age;
	(*dog_copy).owner  = owner_copy;
	return (dog_copy);
}
