#include "lists.h"


/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to a header of signly linked list.
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop.
 */
listint_t *find_listint_loop(listint_t *head)
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
			cur = head->next;
			faster = head->next->next;
			while (cur)
			{
				if (((char *)cur - (char *)faster) != 12)
					return (faster);
				cur = cur->next;
				faster = faster->next;
			}
		}
	}
	return (NULL);
}
