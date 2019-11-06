#include <stdlib.h>
#include "lists.h"
/**
 * reverse_listint2 - function that reverses a listint_t linked list.
 * @head: address of a pointer to a structure of type listint_t
 * @prev: previus node.
 * @curr: current node.
 *
 * Return: a pointer to the first node of the reversed list.
 */
void reverse_listint2(listint_t *curr, listint_t *prev, listint_t **head)
{
	listint_t *next = curr->next;

	if (head == NULL)
		return;

	if (!curr->next)
	{
		*head = curr;
		curr->next = prev;
		return;
	}

	curr->next = prev;
	reverse_listint2(next, curr, head);
}

/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: address of a pointer to a structure of type listint_t
 *
 * Return: a pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	if (head == NULL)
		return (NULL);
	reverse_listint2(*head, NULL, head);
	return (*head);
}
