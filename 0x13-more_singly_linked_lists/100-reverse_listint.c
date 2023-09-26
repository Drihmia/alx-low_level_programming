#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to pointer to struct-head.
 * Return: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *cur, *nex;

	if (!(*head))
		return (NULL);
	cur = (*head)->next;
	if (!(cur))
		return (NULL);
	nex = cur->next;
	(*head)->next = NULL;

	cur->next = (*head);
	while (nex)
	{
		*head = cur;
		cur = nex;
		nex = cur->next;
		cur->next = (*head);
		if (!nex)
			*head = cur;
	}
	return (*head);
}
