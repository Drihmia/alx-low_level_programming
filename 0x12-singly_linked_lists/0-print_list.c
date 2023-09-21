#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to a struct of type list_t.
 * Return:  the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] ", h->len), printf("%s\n", h->str);
		h = h->next;
		i++;
	}
	return (i);
}


