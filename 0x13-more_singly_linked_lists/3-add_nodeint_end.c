#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: address of a pointer to a structure of type listint_t
 * @n: integer to add to node.
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p, *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	(*new).n = n;
	(*new).next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	p = *head;
	while ((*p).next != NULL)
		p = (*p).next;

	(*p).next = new;
	return (new);
}
