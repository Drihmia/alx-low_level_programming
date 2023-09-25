#include "lists.h"

/**
 * free_listint -  frees a listint_t list.
 * @head: pointer that represente the header for singly linked list.
 * Return: NONE.
 */
void free_listint(listint_t *head)
{
	listint_t *courant = head, *next;

	while (courant)
	{
		next = courant->next;
		free(courant);
		courant = next;
	}
}
