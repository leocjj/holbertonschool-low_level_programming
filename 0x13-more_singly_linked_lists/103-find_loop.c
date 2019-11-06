#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * find_listint_loop - function that finds the loop in a linked list.
 * @head: pointer to a structure of type listint_t
 *
 * Return: pointer to the node where the loop starts, NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *temp = malloc(sizeof(listint_t));
	while (head != NULL) {
		if (head->next == NULL) 	// This condition is for the case when there is no loop
			return (NULL);
		if (head->next == temp) 	// Check if next is already pointing to temp
			return (head);
		listint_t *nex = head->next; // Store the pointer to the next node in order to get to it in the next step
		head->next = temp; 		// Make next point to temp
		head = nex; 			// Get to the next node in the list
	}
	return (NULL);
}
