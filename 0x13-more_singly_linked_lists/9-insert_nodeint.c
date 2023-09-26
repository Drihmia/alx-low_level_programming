#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position..
 * @head: pointer to pointer of head of signly linked list.
 * @n: value to add as data to each node.
 * @idx: index of the list where the new node should be added.It starts at 0.
 * if it is not possible to add the new node at index idx,
 * do not add the new node and return NULL.
 *
 * Return: the address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *courant, *hold, *new, *prev;
	size_t last_idx;

	last_idx = listint_len(*head) - 1;
	if (idx > (unsigned int)last_idx + 1)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{
		hold = add_nodeint(&(*head), n);
		return (hold);
	}
	else if (idx == (unsigned int)last_idx)
	{
		hold = add_nodeint_end(&(*head), n);
		return (hold);
	}
	else if (idx == (unsigned int)last_idx + 1)
	{
		courant = get_nodeint_at_index(*head, idx - 1);
		courant->next = new;
		return (new);
	}
	else
	{
		/* if courant is null*/
		courant = get_nodeint_at_index(*head, idx);
		/*mean the function get,didn't find that node-not possible to add*/
		if (!courant)
			return (NULL);
		new->next = courant;
		prev = get_nodeint_at_index(*head, idx - 1);
		prev->next = new;
		return (new);
	}
}

/**
 * get_nodeint_at_index - nth node of a listint_t linked list.
 * @head: pointer to a header of signly linked list.
 * @index: the index of the node, starting at 0.
 * Return:  returns the nth node, if the node does not exist, return NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *h = head;

	while (h)
	{
		if (index == i)
			return (h);
		h = h->next;
		i++;
	}
	return (NULL);
}
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to pointer -head.
 * @n: the value that will be insered to the now node as data.
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}

/**
 * listint_len - returns the number of elements in a linked listint_t list.
 * @h: pointer to a header of signly linked list.
 * Return: the number of elements.
 */
size_t listint_len(const listint_t *h)
{
	if (!h)
		return (0);
	else
		return (1 + listint_len(h->next));
}
