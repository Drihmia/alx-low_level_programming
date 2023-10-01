#include "lists.h"
int there_loop(listint_t *head);
listint_t *_find_listint_loop(listint_t *head);

/**
 * print_listint_safe - prints a listint_t linked list (SAFE VERSION).
 * @head: pointer to a header of signly linked list.
 * Return: the number of nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0, b = 0, a = 0;
	listint_t *cur = (void *)head, *marker = NULL;

	if (!head)
		return (0);

	if (there_loop((listint_t *)head))
	{
		marker = _find_listint_loop((void *)head);
		a = 1;
	}
	while (cur)
	{
		if (cur == marker && a == 1)
			b++;
		if (b == 1 || b == 0)
		{
			printf("[%p] %d\n", (void *)cur, cur->n), i++;
			cur = cur->next;
		}
		else if (b == 2)
		{
			printf("-> [%p] %d\n", (void *)cur, cur->n);
			break;
		}
	}
	return (i);
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
 * _find_listint_loop - finds the loop in a linked list.
 * @head: pointer to a header of signly linked list.
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop.
 */
listint_t *_find_listint_loop(listint_t *head)
{
	listint_t *cur, *faster;

	if (!head)
		return (NULL);

	cur = head;
	faster = head;
	while (cur && faster && (faster->next))
	{
		cur = cur->next;
		faster = faster->next->next;
		if (faster == cur)
		{
			cur = head;
			while (cur != faster)
			{
				cur = cur->next;
				faster = faster->next;
			}
			return (cur);
		}
	}
	return (NULL);
}
