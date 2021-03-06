#include <stdio.h>
#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: structure of type listint_t
 *
 * Return: the number of nodes printed.
 */
size_t print_listint(const listint_t *h)
{
	size_t cont = 0;

	if (h == NULL)
		return (cont);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		cont++;
	}
	return (cont);
}
