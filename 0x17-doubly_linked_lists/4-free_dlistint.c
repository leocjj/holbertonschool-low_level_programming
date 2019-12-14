#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - function that free a list of type dlistint_t
 * @head: address of a pointer to a structure of type dlistint_t
 *
 * Return: void.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
