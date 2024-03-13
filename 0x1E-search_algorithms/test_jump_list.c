#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"
listint_t *create_list(int *array, size_t size);
void print_list(const listint_t *list);
void free_list(listint_t *list);
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

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
	listint_t *list, *current;
	int array[] = {
		0, 1, 2, 3, 4, 7, 12, 15, 18, 19, 23, 53, 61, 62, 76, 99
	};
	size_t size = sizeof(array) / sizeof(array[0]);

	list = create_list(array, size);
	print_list(list);
	current = list;
	while (current)
	{
		printf("index[%lu] = %d\n", current->index, current->n);
		current = node_at_index(current, 2);
	}
	free_list(list);
	return (EXIT_SUCCESS);
}
