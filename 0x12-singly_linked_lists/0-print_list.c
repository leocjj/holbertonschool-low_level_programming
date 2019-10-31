#include <stdio.h>
#include "lists.h"

/**
 * print_list - function that prints all the elements of a list_t list.
 * @h: structure of type list_t
 *
 * Return: the number of nodes printed.
 */
size_t print_list(const list_t *h)
{
	int n = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
			printf("[5] %s", h->str);
		h = h->next;
		n++;
	}

	return (0);
}
