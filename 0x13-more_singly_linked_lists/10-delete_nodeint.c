#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index "index"
 * of a listint_t linked list.
 * @head: pointer to pointer of head of signly linked list.
 * @index: index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *courant, *prev;

	if (!(*head))
		return (-1);
	prev = get_nodeint_at_index(*head, index - 1);
	courant = get_nodeint_at_index(*head, index);
	if (!prev)
	{
		*head = courant->next;
		free(courant);
	}
	else
	{
		prev->next = courant->next;
		free(courant);
	}
	return (1);
}

/**
 * get_nodeint_at_index - nth node of a listint_t linked list.
 * @head: pointer to a header of signly linked list.
 * @index: the index of the node, starting at 0.
 * Return:  returns the nth node, if the node does not exist, return NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *h = head;

	while (h)
	{
		if (index == i)
			return (h);
		h = h->next;
		i++;
	}
	return (NULL);
}
