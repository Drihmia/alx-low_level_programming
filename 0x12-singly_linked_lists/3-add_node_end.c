#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: double pointer to a struct of type list_t.
 * @str: string of the new node.
 * Return: the address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t  *new = NULL, *tmp = NULL;


	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(str);
	new->next = NULL;


	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
	}
	tmp->next = new;

	return (new);
}
