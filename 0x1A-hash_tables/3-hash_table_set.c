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
	hash_node_t *node = NULL, *head = NULL, *tmp = NULL;
	uli index = 0;

	if (!ht || !ht->array || !key || !(*(key + 0) || !(*(key + 1))))
		return (0);
	if (ht->size == 0)
		return (0);
	node = malloc(sizeof(hash_node_t)), node->next = NULL;
	if (!node)
		return (0);
	node->key = strdup(key);
	if (!(node->key))
	{
		free(node);
		return (0);
	}
	node->value = strdup(value);
	if (!(node->value))
	{
		free(node->key), free(node);
		return (0);
	}
	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];
	if (ht->array && head)
	{
		tmp = head;
		while (tmp)
		{
			if (tmp->key && !strcmp(tmp->key, key))
			{
				free(tmp->value), tmp->value = strdup(value);
				return (1);
			}
			tmp = tmp->next; }
		node->next = head->next, head->next = node;
	}
	else
		ht->array[index] = node;
	return (1);
}
