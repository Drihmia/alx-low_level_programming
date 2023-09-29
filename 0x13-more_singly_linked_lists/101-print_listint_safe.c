#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list (SAFE VERSION).
 * @head: pointer to a header of signly linked list.
 * Return: the number of nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0, b = 0;
	listint_t *cur = (void *)head, *marker = NULL, *nex;

	if (!head)
		exit(98);

	marker = find_listint_loop((void *)head);
	nex = cur->next;
	while (cur->next)
	{
		if (cur->next == marker)
			b++;
		if (b == 1 || b == 0)
		{
			printf("[%p] %d\n", (void *)cur, cur->n);
			i++;
			cur = nex;
			nex = cur->next;

		}
		else
		{
			printf("-> [%p] %d\n", (void *)cur, cur->n);
			i++;
			break;
		}
	}
	return (i);
}
