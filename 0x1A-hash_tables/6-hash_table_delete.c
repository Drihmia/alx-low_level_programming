#include "hash_tables.h"
/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: the hash table
 * Return: None
 */
void hash_table_delete(hash_table_t *ht)
{
	uli i;
	hash_node_t *head = NULL, *tmp = NULL;

	if (!ht || !ht->array)
		return;
	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];
		tmp = head;
		while (tmp)
		{
			head = tmp->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
			tmp = head;
		}
	}
	free(ht->array);
	free(ht);
}
