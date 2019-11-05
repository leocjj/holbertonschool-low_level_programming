#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - function that free a list of type listint_t.
 * @head: address of a pointer to a structure of type listint_t
 *
 * Return: void.
 */
void free_listint2(listint_t **head)
{
	listint_t *p;

	if (head != NULL)
		return;

	while (*head != NULL)
	{
		p = *head;
		*head = (*head)->next;
		free(p);
	}
	*head = NULL;
}
