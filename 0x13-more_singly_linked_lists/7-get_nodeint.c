#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to a structure of type listint_t
 * @index: index of the node, starting at 0
 *
 * Return: the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int counter = 0;
	listint_t *head_copy = head;

	if (head_copy == NULL)
		return (NULL);

	while (counter < index)
	{
		head_copy = head_copy->next;
		counter++;
	}
	return (head_copy);
}
