#include <stdlib.h>
#include "lists.h"
/**
 * sum_dlistint - sum of all the data (n) of a dlistint_t linked list
 * @head: pointer to a structure of type dlistint_t
  *
 * Return: returns the sum of all the data (n) of a dlistint_t linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *head_copy = head;

	while (head_copy != NULL)
	{
		sum += head_copy->n;
		head_copy = head_copy->next;
	}
	return (sum);
}
