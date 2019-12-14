#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of a dlistint_t
 * @head: address of a pointer to a structure of type dlistint_t
 * @n: string to add to node.
 *
 * Return: pointer to structure of type dlistint_t
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *p, *temp;

	p = malloc(sizeof(dlistint_t));
	if (p == NULL)
		return (NULL);

	p->n = n;
	p->next = NULL;

	if (*head == NULL)
	{
		p->prev = NULL;
		*head = p;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;

		temp->next = p;
		p->prev = temp;
	}

	return (p);
}
