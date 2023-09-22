#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: pointer to a struct of type list_t.
 * Return: None.
 */
void free_list(list_t *head)
{

	while (head != NULL)
	{
		head = head->next;
		free(head->str);
		free(head);
	}
	return;
}
