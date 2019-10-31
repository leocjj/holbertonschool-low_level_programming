#include <stdio.h>
#include <strings.h>
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

	if (str = NULL)
		return (0);
	while (*str != '\0')
		s++;
}

/**
 * add_node - unction that adds a new node at the beginning of a list_t list.
 * @h: structure of type list_t
 *
 * Return: the number of elements.
 */
list_t *add_node(list_t **head, const char *str)
{
	int s = 0;
	list_t *p;

	p = malloc(sizeof(list_t));
	if (p == NULL)
	{
		printf("Error\n");
		return (NULL);
	}

	*(p).str = strdup(str);
	*(p).len = lsen(str);
	*(p).next = *head;
	*head = p;

	free(p->str);
	free(p);
	return (*head);
}
