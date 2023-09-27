#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list.
 * @head: pointer to pointer that represente the header for singly linked list.
 * Return: NONE.
 */
void free_listint2(listint_t **head)
{
	listint_t *next, *current = *head;

	if (!(*head) || !head)
		return;
	while (current)
	{
		next = (current)->next;
		free(current);
		current = next;
	}
	(*head) = NULL;
}
