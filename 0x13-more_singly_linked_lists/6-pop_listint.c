#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: address of a pointer to a structure of type listint_t
 *
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int result = 0;
	listint_t *head_copy = *head;

	if (head_copy == NULL)
		return (0);

	result = head_copy->n;
	*head = head_copy->next;
	free(head_copy);
	head_copy = NULL;
	return (result);
}
