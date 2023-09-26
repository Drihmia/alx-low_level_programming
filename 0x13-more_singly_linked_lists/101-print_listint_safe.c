#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list (SAFE VERSION).
 * @head: pointer to a header of signly linked list.
 * Return: the number of nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t i = 0;

	while (head)
	{
		printf("%d\n", head->n);
		head = head->next;
		i++;
	}
	return (i);
}
