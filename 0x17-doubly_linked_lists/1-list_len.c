#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - function returns the number of elements in linked dlistint_t
 * @h: structure of type dlistint_t
 *
 * Return: the number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n;

	for(n = 0; h != NULL; n++)
		h = h->next;

	return (n);
}
