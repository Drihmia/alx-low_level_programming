#include "search_algos.h"
#include <math.h>
listint_t *node_at_index(listint_t *cu_node, size_t jump);

/**
 * jump_list - a function that searches for a value in a sorted linked
 * list of integers using the Jump search algorithm.
 * @list: is a pointer to the head of the list to search in.
 * @size: is the number of nodes in list.
 * @value: is the value to search for.
 *
 * Notes:
 * - I'll use the square root of the size of the list as the jump step.
 * - I'll use the sqrt() included in <math.h>, with -lm while comiplation.
 * - Every time I compare a value in the list to the value I'm searching,
 * you have to print this value.
 * Return:
 * - It will return a pointer to the first node where value is located.
 * - If value is not present in head or if head is NULL, It'll return NULL.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t jump, i, limit;
	int bounded = 0;
	listint_t *cur = list, *next;
	(void)value;
	if (!list || size == 0)
		return (NULL);
	if (size == 1)
		return (list);

	jump = sqrt(size);

	/*cur = node_at_index(list, 0);*/
	for (i = 0; i < size; i += jump)
	{
		if (i + jump >= size)
			limit = size - 1;
		else
			limit = i + jump;

		printf("hii_-1\n");
		next = node_at_index(cur, jump);
		printf("hii_0 %lu\n", limit);
		if (i)
			printf("Value checked array[%lu] = [%d]\n", cur->index, cur->n);
		printf("hii_1\n");
       /*         if ((value >= cur->n && value < next->n) ||*/
				/*(limit == size - 1 && limit != i + jump))*/
		/*{*/
		/*printf("hii_2\n");*/
			/*bounded = 1;*/
			/*printf("Value checked array[%lu] = [%d]\n", next->index, next->n);*/
			/*printf("Value found between indexes [%lu] and [%lu]\n",*/
					/*i, limit);*/
			/*while (cur != next && cur->index < size)*/
			/*{*/
				/*printf("Value checked array[%lu] = [%d]\n", cur->index, cur->n);*/
				/*if (value == cur->n)*/
					/*return (cur);*/
				/*cur = cur->next;*/
			/*}*/
		/*}*/
		if (bounded)
			break;
		printf("hii_2\n");
		cur = next;
		printf("hii_3\n");
	}
	return (NULL);
}




/**
 * node_at_index - get the node at index
 * @cu_node: the current node given.
 * @jump: the number of nodes to jump to get to the wanted node.
 * Return: the pointer the the wanted node.
 */

listint_t *node_at_index(listint_t *cu_node, size_t jump)
{
	size_t i;
	listint_t *current = cu_node;
	for (i = 0; i < jump && current; i++)
	{
		// printf("the node is %d at %lu\n", current->n, current->index);
		current = current->next;
	}
	return (current);
}
