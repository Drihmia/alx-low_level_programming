#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: pointer to a struct of type list_t.
 * Return: None.
 */
void free_list(list_t *head)
{

	list_t *current = head;
	list_t *next;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
