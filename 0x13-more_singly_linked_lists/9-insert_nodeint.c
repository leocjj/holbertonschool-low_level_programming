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
			return(head_copy);
		head_copy = head_copy->next;
		counter++;
	}
	return (NULL);
}

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: address of a pointer to a structure of type listint_t
 * @idx: index of the list where the new node should be added. Index starts: 0
 * @n: data for inserted node
 *
 * Return: the address of the new node, or NULL if it failed. If it is not
 * possible to add the new node at index idx, do not add and return NULL.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *head_copy = *head, *temp, *new;

	if (head_copy == NULL)
		return (NULL);

	temp = get_nodeint_at_index2(head_copy, (idx - 1));
	if (temp == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = temp->next;
	temp->next = new;

	return (temp);
}
