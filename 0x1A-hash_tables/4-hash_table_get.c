#include "hash_tables.h"
/**
 * hash_table_get - a function that retrieves a value associated with a key.
 * @ht: the hash table you want to look into.
 * @key: the key you are looking for.
 * Return: the value associated with the element, or
 * NULL if key couldn’t be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *head = NULL;
	uli index;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];
	while (head)
	{
		if (head->key && !strcmp(head->key, key))
			return (head->value);
		head = head->next;
	}
	return (NULL);
}
