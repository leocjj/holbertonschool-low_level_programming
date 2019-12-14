#include <stdlib.h>
#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t list.
 * @head: pointer to a structure of type dlistint_t
 * @index: index of the node, starting at 0
 *
 * Return: the nth node of a listint_t linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *head_copy = head;

	if (head_copy == NULL)
		return (NULL);

	while (head_copy != NULL)
	{
		if (counter == index)
			return (head_copy);
		head_copy = head_copy->next;
		counter++;
	}
	return (NULL);
}
