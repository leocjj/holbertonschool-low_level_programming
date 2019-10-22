#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - creates a new dog.
 * @d: structure of type dog_t.
 *
 * Return: void.
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
