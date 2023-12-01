#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to.
 * @key: key can not be an empty string.
 * @value: the value associated with the key. value must be duplicated.
 * value can be an empty string.
 *
 * In case of collision, add the new node at the beginning of the list.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *head = NULL, *tmp = NULL;
	uli index = 0;

	if (!key || !(*(key + 0)))
		return (0);
	if (ht->size == 0)
		return (0);
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key = strdup(key);
	if (!(node->key))
		return (0);
	node->value = strdup(value);
	if (!(node->value))
		return (0);
	node->next = NULL;

	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];
	if (ht->array && head)
	{
		tmp = head;
		while (tmp)
		{
			if (tmp->key && !strcmp(tmp->key, key))
			{
				tmp->value = strdup(value);
				return (1);
			}
			tmp = tmp->next;
		}
		/* the new node inherite the next of the head */
		node->next = head->next;
		head->next = node;
	}
	else
		ht->array[index] = node;
	return (1);
}
