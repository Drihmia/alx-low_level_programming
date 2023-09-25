#include "lists.h"

/**
 * free_listint2 -  frees a listint_t list.
 * @head: pointer to pointer that represente the header for singly linked list.
 * Return: NONE.
 */
void free_listint2(listint_t **head)
{
	listint_t *courant = *head, *next;

	*head = NULL;
	while (courant)
	{
		next = courant->next;
		free(courant);
		courant = next;
	}
	courant = NULL;
	next = NULL;
}
