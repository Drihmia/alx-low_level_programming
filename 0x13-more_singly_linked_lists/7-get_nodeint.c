#include "lists.h"

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

