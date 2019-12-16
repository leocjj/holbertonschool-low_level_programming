#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

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
 * insert_dnodeint_at_index - function that adds a new node at the end of a dlistint_t
 * @h: address of a pointer to a structure of type dlistint_t
 * @idx: index to add the node.
 * @n: data value for the node.
 *
 * Return: pointer to structure of type dlistint_t
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *node_new = NULL, *node_idx = NULL;
	unsigned int list_len = dlist_len(*h);

	if ((h == NULL) || (*h == NULL && idx > 0))
		return (NULL);

	if (idx > list_len)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (idx	== list_len)
		return (add_dnodeint_end(h, n));

	node_new = malloc(sizeof(dlistint_t));
	if (node_new == NULL)
		return (NULL);
	node_new->n = n;

	node_idx = get_dnodeint_at_index(*h, idx);

	node_idx->prev->next = node_new;
	node_new->next = node_idx;
	node_new->prev = node_idx->prev;
	node_idx->prev = node_new;

	return (node_new);
}
