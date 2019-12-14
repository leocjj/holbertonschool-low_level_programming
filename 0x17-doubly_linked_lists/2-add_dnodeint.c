#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * slen - function that returns the length of a string.
 * @str: string to be length
 *
 * Return: length of the string.
 */
int slen(const char *str)
{
	int s = 0;

	if (str == NULL)
		return (0);
	while (*(str + s) != '\0')
		s++;
	return (s);
}

/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t.
 * @head: addres of a pointer to a structure of type dlistint_t
 * @str: string to add to node.
 *
 * Return: pointer to structure of type dlistint_t.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *p;

	if (head == NULL)
		return (NULL);

	p = malloc(sizeof(dlistint_t));
	if (p == NULL)
		return (NULL);

	p->n = n;
	p->prev = NULL;
	p->next = *head;
	*head = p;

	return (p);
}
