#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - sum of all the data (n) of a listint_t linked list
 * @head: pointer to a structure of type listint_t
 * @index: index of the node, starting at 0
 *
 * Return: sum of all the data (n) of a listint_t linked list.
 */
int sum_listint(listint_t *head)
{
	int count = 0;
	listint_t *head_copy = head;

	if (head_copy == NULL)
		return (0);

	while (head_copy != NULL)
	{
		count += head_copy->n;
		head_copy = head_copy->next;
	}
	return (count);
}
