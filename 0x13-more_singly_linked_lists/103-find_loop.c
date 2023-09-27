#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to a header of signly linked list.
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	const listint_t *cur = head, *faster = head;

	if (!head)
		return (NULL);

	while (faster && (faster->next))
	{
		cur = cur->next;
		faster = faster->next->next;
		if (faster == cur)
			return ((void *)cur);
	}
	return (NULL);
}
