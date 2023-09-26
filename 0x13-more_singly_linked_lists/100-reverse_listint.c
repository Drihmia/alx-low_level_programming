#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to pointer to struct-head.
 * Return: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *cur, *nex;

	cur = (*head)->next;
	nex = cur->next;
	(*head)->next = NULL;

	while (nex)
	{
		cur->next = (*head);
		*head = cur;
		cur = nex;
		nex = cur->next;
	}
	return (cur);
}
