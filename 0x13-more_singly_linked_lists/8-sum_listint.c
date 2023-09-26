#include "lists.h"

/**
 * sum_listint - sum of all the data (n) of a listint_t linked list.
 * @head: pointer to a header of signly linked list.
 * Return:  returns the sum of all the data (n),
 * if the list is empty, return 0.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *h = head;

	while (h)
	{
		sum += h->n;
		h = h->next;
	}
	return (sum);
}
