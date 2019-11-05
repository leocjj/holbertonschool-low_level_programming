#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index2 - returns the nth node of a listint_t linked list.
 * @head: pointer to a structure of type listint_t
 * @index: index of the node, starting at 0
 *
 * Return: the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index2(listint_t *head, unsigned int index)
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

/**
 * delete_nodeint_at_index - deletes the node at index of listint_t linked list
 * @head: address of a pointer to a structure of type listint_t
 * @indes: is the index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *head_copy = *head, *temp, *todelete;

	if (head_copy == NULL)
		return (-1);

	if (index == 0)
	{
		*head = head_copy->next;
		free(head_copy);
		return (1);
	}

	temp = get_nodeint_at_index2(head_copy, (index - 1));
	if (temp == NULL)
		return (-1);

	todelete = temp->next;
	temp->next = todelete->next;
	free(todelete);

	return (1);
}
