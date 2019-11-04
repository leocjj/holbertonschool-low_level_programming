#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - function adds a new node at the beginning of a listint_t list.
 * @head: addres of a pointer to a structure of type list_t
 * @n: integer to add to node.
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;

	if (head == NULL)
		return (NULL);

	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);

	(*p).n = n;
	(*p).next = *head;
	*head = p;

	return (p);
}
