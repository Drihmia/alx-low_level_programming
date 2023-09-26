#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list.
 * @head: pointer to pointer that represente the header for singly linked list.
 * Return: NONE.
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	if ((*head) != NULL)
	{
		while (*head)
		{
			next = (*head)->next;
			free(*head);
			*head = next;
			if ((*head)->next == NULL)
			{
				free(*head);
				break;
			}
		}
		*head = NULL;
	}
}
