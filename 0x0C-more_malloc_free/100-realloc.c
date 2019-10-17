#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block using malloc and free.
 * @ptr: pointer to the memory previously allocated: malloc(old_size).
 * @old_size: size, in bytes, of the allocated space for ptr.
 * @new_size: is the new size, in bytes of the new memory block.
 *
 * Return: pointer to the allocated memory.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptrNew = NULL, *ptrTemp = NULL;

	unsigned int i = 0, min_size = 0;

	if (new_size == old_size)
		return (ptr);
	else if (new_size >= old_size)
		min_size = old_size;
	else
		min_size = new_size;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		free(ptr);
		ptrNew = malloc(new_size);
		return (ptrNew);
	}

	ptrNew = malloc(new_size);
	if (ptrNew == NULL)
		return (NULL);

	ptrTemp = ptr;
	for (i = 0; i < min_size; i++)
		*(ptrNew + i) = *(ptrTemp + i);

	free(ptr);
	return ((void *)ptrNew);
}
