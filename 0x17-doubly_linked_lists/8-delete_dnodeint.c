#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_the_end - delete the last element in dlistint_t
 * @head: structure of type dlistint_t
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_the_end(dlistint_t **node)
{
	node->prev->next = NULL;
	free(*node);
	node = NULL;
	return (1);
}

/**
 * delete_dnodeint_at_beginning - delete the first element in dlistint_t
 * @head: structure of type dlistint_t
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_beginning(dlistint_t **head)
{
	dlistint_t *temp = NULL;

	if (*head->next == NULL)
	{
		free(*head);
		*head = NULL;
		return (1);
	}
	else
	{
		temp = *head->next;
		free(*head);
		*head = temp;
		*head->prev = NULL;
		return (1);
	}
	return (-1);
}

/**
 * dlist_len - function returns the number of elements in linked dlistint_t
 * @h: structure of type dlistint_t
 *
 * Return: the number of elements.
 */
unsigned int dlist_len(const dlistint_t *h)
{
	unsigned int n;

	for (n = 0; h != NULL; n++)
		h = h->next;
	return (n);
}

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t list.
 * @head: pointer to a structure of type dlistint_t
 * @index: index of the node, starting at 0
 *
 * Return: the nth node of a dlistint_t linked list.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	dlistint_t *head_copy = head;

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
 * delete_dnodeint_at_index - delete a node of a dlistint_t
 * @head: address of a pointer to a structure of type dlistint_t
 * @index: index to add the node.
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = NULL;
	unsigned int list_len = dlist_len(*h);

	if ((h == NULL) || (*h == NULL)
		return (-1);

	if (index >= list_len)
		return (-1);

	if (index == 0)
		return (delete_dnodeint_at_beginning(head));

	node_index = get_dnodeint_at_index(*h, index);

	if (index == list_len - 1)
		return (delete_dnodeint_at_the_end(node_index));

	node_index->next->prev = node_index->prev;
	node_index->prev->next = node_index->next;

	free(node_index)
	node_index = NULL;

	return (1);
}
