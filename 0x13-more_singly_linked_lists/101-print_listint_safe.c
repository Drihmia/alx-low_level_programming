#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list (SAFE VERSION).
 * @head: pointer to a header of signly linked list.
 * Return: the number of nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;
	const listint_t *cur = head, *faster = head;

	if (!head)
		exit(98);

	while (faster && (faster->next))
	{
		printf("[%p] %d\n", (void *)cur, cur->n);
		cur = cur->next;
		faster = faster->next->next;
		if (faster == cur)
			exit(98);
	}
	i++;
	while (cur)
	{
		printf("[%p] %d\n", (void *)cur, cur->n);
		cur = cur->next;
		i++;
	}
	return (i);
}
