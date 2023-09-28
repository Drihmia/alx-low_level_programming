#include "lists.h"
listint_t *node_loop(listint_t *h);
int there_loop(listint_t *head);



/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to a header of signly linked list.
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *red;

	if (!head || !(head->next))
		return (NULL);
	if (there_loop(head))
	{
		red = node_loop(head);
		return (red);

	}
	return (NULL);
}
/**
 * there_loop - check if there is a loop.
 * @head: pointer node.
 * Return: 1 i found, 0 if not.
 */
int there_loop(listint_t *head)
{
	listint_t *cur, *faster;

	if (!head)
		return (0);
	cur = head;
	faster = head;
	while (cur && faster && (faster->next))
	{
		cur = cur->next;
		faster = faster->next->next;
		if (faster == cur)
			return (1);
	}
	return (0);
}


/**
 * node_loop - check is the node entred is node loop.
 * @h: pointer node.
 * Return: 1 i found, 0 if not.
 */
listint_t *node_loop(listint_t *h)
{
	listint_t *start, *cur;

	if (!h)
		return (NULL);
	start = h->next;
	cur = (h)->next->next;

	while (start)
	{
		if ((((char *)(start) - (char *)(cur)) != 16))
		{
			return (cur);
		}
		start = (start)->next;
		cur = cur->next;
	}
	return (NULL);
}

