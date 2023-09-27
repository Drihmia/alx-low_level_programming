#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list.
 * @head: pointer to pointer that represente the header for singly linked list.
 * Return: NONE.
 */
void free_listint2(listint_t **head)
{
	listint_t *next, *current;

	if ((head) == NULL || (*head) == NULL)
		return;
	current = *head;
	while (current)
	{
		next = (current)->next;
		free(current);
		current = next;
	}
	(*head) = NULL;
	(head) = NULL;
}
