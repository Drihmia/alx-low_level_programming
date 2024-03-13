#include "search_algos.h"
listint_t *node_at_index(listint_t *cu_node, size_t jump);

/**
 * linear_skip - a function that searches for a value in a sorted skip
 * list of integers.
 * @list: is a pointer to the head of the skip list to search in.
 * @value: is the value to search for.
 *
 * Notes:
 * - A node of the express lane is placed every index which is a multiple of
 * the square root of the size of the list.
 * - Assuming that list will be sorted in ascending order
 * - Every time I compare a value in the list to the value I'm searching,
 * you have to print this value.
 * Return:
 * - It will return a pointer to the first node where value is located.
 * - If value is not present in head or if head is NULL, It'll return NULL.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	int bounded = 0;
	skiplist_t *cur, *next, *tmp;

	if (!list)
		return (NULL);

	for (cur = list; cur->express; cur = cur->express)
	{


		next = cur->express;

		printf("Value checked at index [%lu] = [%d]\n", next->index, next->n);
		if (((value >= cur->n && value <= next->n)))
		{
			bounded = 1;
			printf("Value found between indexes [%lu] and [%lu]\n",
					cur->index, next->index);
			while (cur != next->next || cur)
			{
				printf("Value checked at index [%lu] = [%d]\n", cur->index, cur->n);
				if (value == cur->n)
					return (cur);
				cur = cur->next;
			}
		}
		if (bounded)
			break;
		if (!next->express)
		{
			tmp = next;
			while (tmp->next)
			{
				tmp = tmp->next;
			}
			printf("Value found between indexes [%lu] and [%lu]\n",
					next->index, tmp->index);
			tmp = next;
			printf("Value checked at index [%lu] = [%d]\n", tmp->index, tmp->n);
			while (tmp->next)
			{
				if (value == tmp->n)
				{
					return (tmp);
				}
				printf("Value checked at index [%lu] = [%d]\n",
						tmp->next->index, tmp->next->n);
				tmp = tmp->next;
			}

		}
	}
	return (NULL);
}
