#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: pointer of dog_t type
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, len_name = 0, len_owner = 0;
	dog_t *dog_copy;

	while (*(name + len_name) != '\0')
		len_name++;
	while (*(owner + len_owner) != '\0')
		len_owner++;

	dog_copy = malloc(sizeof(dog_t));
	if (dog_copy == NULL)
		return (NULL);

	dog_copy->name = malloc((len_name + 1) * sizeof(char));
	if (dog_copy->name == NULL)
	{
		free(dog_copy);
		return (NULL);
	}
	dog_copy->owner = malloc((len_owner + 1) * sizeof(char));
	if (dog_copy->owner == NULL)
	{
		free(dog_copy->name);
		free(dog_copy);
		return (NULL);
	}

	for (i = 0; i <= len_name; i++)
		*(dog_copy->name + i) = *(name + i);
	for (i = 0; i <= len_owner; i++)
		*(dog_copy->owner + i) = *(owner + i);
	dog_copy->age = age;

	return (dog_copy);
}
