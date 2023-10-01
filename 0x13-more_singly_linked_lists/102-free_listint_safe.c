#include "lists.h"

/**
 * free_listint_safe -  frees a listint_t list.
 * @h: pointer to pointer that represente the her for singly linked list.
 * Return: the size of the list that was free’d.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *next;
	size_t i = 0;

	if (!(h) || !*h)
		return (0);
	while (*h)
	{
		next = (*h)->next;
		free(*h);
		*h = next;
		i++;
	}
	(*h) = NULL;
	return (i);
}
