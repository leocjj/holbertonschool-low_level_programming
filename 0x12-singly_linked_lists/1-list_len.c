#include <stdio.h>
#include "lists.h"

/**
 * list_len - function returns the number of elements in a linked list_t list.
 * @h: structure of type list_t
 *
 * Return: the number of elements.
 */
size_t list_len(const list_t *h)
{
	int n = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		n++;
		h = h->next;
	}
	return (n);
}
