#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t.
 * @head: address of a pointer to a structure of type dlistint_t
 * @n: integer to add to node.
 *
 * Return: pointer to structure of type dlistint_t.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *p;

	if (head == NULL)
	{
		p = malloc(sizeof(dlistint_t));
		if (p == NULL)
			return (NULL);

		p->n = n;
		p->prev = NULL;
		p->next = NULL;
		*head = p;
	}
	else
	{
		p = malloc(sizeof(dlistint_t));
		if (p == NULL)
			return (NULL);

		p->n = n;
		p->prev = NULL;
		p->next = *head;
		p->next->prev = p;
		*head = p;
	}

	return (p);
}
