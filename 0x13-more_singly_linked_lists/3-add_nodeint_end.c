#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: pointer to pointer of head of signly linked list.
 * @n: value to add as data to each node.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	if (!(*head))
	{
		listint_t *new = malloc(sizeof(listint_t));

		if (!(new))
			return (NULL);
		new->n = n;
		new->next = NULL;
		*head = new;
		return (*head);
	}

	return (add_nodeint_end(&(*head)->next, n));
}
