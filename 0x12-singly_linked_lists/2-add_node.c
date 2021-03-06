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
 * add_node - unction that adds a new node at the beginning of a list_t list.
 * @head: addres of a pointer to a structure of type list_t
 * @str: string to add to node.
 *
 * Return: pointer to structure of typ list_t.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *p;

	if (head == NULL || str == NULL)
		return (NULL);

	p = malloc(sizeof(list_t));
	if (p == NULL)
		return (NULL);

	(*p).str = strdup(str);
	if ((*p).str == NULL)
	{
		free(p);
		return (NULL);
	}
	(*p).len = slen(str);
	(*p).next = *head;
	*head = p;

	return (p);
}
