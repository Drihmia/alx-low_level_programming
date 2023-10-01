#include "lists.h"

/**
 * free_listint_safe -  frees a listint_t list.
 * @h: pointer to pointer that represente the her for singly linked list.
 * Return: the size of the list that was free’d.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *next;
	size_t i = 0;

	if (!(h) || !*h)
		return (0);
	while (*h)
	{
		next = (*h)->next;
		free(*h);
		*h = next;
		i++;
	}
	(*h) = NULL;
	return (i);
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
