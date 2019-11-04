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
	listint_t *head_copy= *head;
	listint_t *p;

	while (head_copy != NULL)
	{
		p = (*head_copy).next;
		free(head_copy);
		head_copy = p;
	}
	*head = NULL;
}
