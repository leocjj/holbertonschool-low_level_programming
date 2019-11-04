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
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: addres of a pointer to a structure of type list_t
 * @str: string to add to node.
 *
 * Return: pointer to structure of typ list_t.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *p, *n;

	if (head == NULL || str == NULL)
		return (NULL);

	/**
	 * creation of the new node.
	 */
	n = malloc(sizeof(list_t));
	if (n == NULL)
		return (NULL);
	(*n).str = strdup(str);
	if ((*n).str == NULL)
	{
		free(n);
		return (NULL);
	}
	(*n).len = slen(str);
	(*n).next = NULL;

	if (*head == NULL)
	{
		*head = n;
		return (n);
	}
	else
	{
		p = *head;
		/**
		 *To search the final node
		 */
		while ((*p).next != NULL)
			p = (*p).next;
	}
	/**
	 * Asigment of the new node to the last one.
	 */
	(*p).next = n;
	return (p);
}
