#include <stdlib.h>
#include "lists.h"
/**
 * free_list - function that free a list of type list_t.
 * @head: addres of a pointer to a structure of type list_t
 *
 * Return: void.
 */
void free_list(list_t *head)
{
	list_t *p;

	while (head != NULL)
	{
		p = (*head).next;
		if ((*head).str != NULL)
			free((*head).str);
		free(head);
		head = p;
	}
}
