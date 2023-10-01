#include "lists.h"
listint_t *_find_listint_loop(listint_t *head);

/**
 * free_listint_safe -  frees a listint_t list.
 * @h: pointer to pointer that represente the her for singly linked list.
 * Return: the size of the list that was free’d.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *marker;
	size_t i = 0;
	int a = 0, b = 0;

	if (!(h) || !*h)
		return (0);
	marker = _find_listint_loop((void *)(*h));
	if (marker != NULL)
		a = 1;

	while (*h)
	{
		if (a == 1 && (*h)->next == marker)
			b++;
		next = (*h)->next;
		free(*h);
		*h = next;
		i++;

		if (b == 2)
			break;
	}
	(*h) = NULL;
	return (i);
}
