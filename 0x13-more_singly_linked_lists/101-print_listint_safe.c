#include "lists.h"

/**
 * countNodes - count of nodes present in loop.
 * @h: structure of type listint_t
 *
 * Return: count of nodes present in loop.
 */
int countNodes(struct Node *n)
{
   int res = 1;
   struct Node *temp = n;
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
size_t countNodesinLoop(struct Node *list)
{
    struct Node  *slow_p = list, *fast_p = list;

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
	size_t cont = 0, nodesInLoop = 0;

	if (head == NULL)
		exit(98);

	nodesInLoop = countNodesinLoop(head);

	if (nodesInLoop == 0)
	{
		while (head != NULL)
		{
			printf("%d\n", head->n);
			hea = head->next;
			cont++;
		}
		return (cont);
	}


}
