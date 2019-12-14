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
	unsigned long int n = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
