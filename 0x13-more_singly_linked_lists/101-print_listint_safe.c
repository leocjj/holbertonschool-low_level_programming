#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * find_listint_loop2 - function that finds the loop in a linked list.
 * @head: pointer to a structure of type listint_t
 *
 * Return: pointer to the node where the loop starts, NULL if there is no loop
 */
listint_t *find_listint_loop2(listint_t *head)
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

/**
 * countNodes - count of nodes present in loop.
 * @h: structure of type listint_t
 *
 * Return: count of nodes present in loop.
 */
int countNodes(listint_t *n)
{
   int res = 1;
   listint_t *temp = n;
   while (temp->next != n)
   {
      res++;
      temp = temp->next;
   }
   return res;
}
/**
 * countNodesinLoop - detects and counts loop nodes in the list.
 * @h: structure of type listint_t
 *
 * Return: the number of nodes in loop, 0 if no loop.
 */
size_t countNodesinLoop(listint_t *list)
{
    listint_t *slow_p = list, *fast_p = list;

    while (slow_p && fast_p && fast_p->next)
    {
        slow_p = slow_p->next;
        fast_p  = fast_p->next->next;

        /* If slow_p and fast_p meet at some point then there is a loop */
        if (slow_p == fast_p)
            return countNodes(slow_p);
    }
	return 0;
}

/**
 * print_listint_safe - prints a listint_t linked list with a loop.
 * @head: structure of type listint_t
 *
 * Return: the number of nodes printed.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t cont = 0, nodesInLoop = 0, i = 0;
	listint_t *loop_start, *temp = head;

	if (head == NULL)
		exit(98);

	nodesInLoop = countNodesinLoop(temp);
	loop_start = find_listint_loop2(temp);

	if (nodesInLoop == 0)
	{
		while (temp != NULL)
		{
			printf("[%p] %d\n", (void *)temp, temp->n);
			temp = temp->next;
			cont++;
		}
		return (cont);
	}
	else
	{
		while (temp != loop_start)
		{
			printf("[%p] %d\n", (void *)temp, temp->n);
			temp = temp->next;
			cont++;
		}
		while (i < nodesInLoop)
		{
			printf("[%p] %d\n", (void *)temp, temp->n);
			temp = temp->next;
			cont++;
			i++;
		}
	}
	return (cont);
}
