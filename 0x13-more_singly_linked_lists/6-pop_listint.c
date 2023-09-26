#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list.
 * @head: pointer to pointer to struct - head of signly linked list.
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *h;
	int m;

	if (!(*head))
		return (0);
	h = (*head);
	m = (*head)->n;
	*head = (h)->next;
	(h)->next = NULL;
	free(h);
	return (m);
}
