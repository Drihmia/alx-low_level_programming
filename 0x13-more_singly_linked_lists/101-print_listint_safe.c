#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list (SAFE VERSION).
 * @head: pointer to a header of signly linked list.
 * Return: the number of nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	listint_t *cur = (void *)head, *marker = NULL, *nex;

	if (!head)
		exit(98);

	nex = cur->next;
	while (cur)
	{
		if (nex != marker)
		{
		printf("[%p] %d\n", (void *)cur, cur->n);
		i++;
		cur->next = marker;
		cur = nex;
		nex = cur->next;
		}
		else if (nex == marker)
		{
			printf("-> [%p] %d\n", (void *)cur, cur->n);
			break;
		}
	}
	return (i);
}
