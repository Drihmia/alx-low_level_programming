#include "lists.h"

/**
 * list_len - the number of elements in a linked list_t list.
 * @h: pointer to a struct of type list_t.
 * Return:  the number of elements.
 */
size_t list_len(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}


