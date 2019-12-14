#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - function that prints all the elements of a dlistint_t
 * @h: structure of type dlistint_t
 *
 * Return: the number of nodes printed.
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t n;

	for (n = 0; h != NULL; n++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (n);
}
