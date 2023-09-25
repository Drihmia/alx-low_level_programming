#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to a header of signly linked list.
 * Return: the number of elements.
 */
size_t listint_len(const listint_t *h)
{
	if (!h)
		return (0);
	else
		return (1 + listint_len(h->next));
}
