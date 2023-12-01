#include "hash_tables.h"
/**
 * hash_table_print - a function that prints a hash table.
 * @ht: the hash table you want to look into.
 * You should print the key/value in the order that they
 * appear in the array of hash table (Order: array, list).
 * If ht is NULL, don’t print anything
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *head = NULL;
	uli i;
	int flag = 0;

	if (!ht)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];

		while (head)
		{
			if (flag)
				printf(", ");
			printf("'%s': '%s'", head->key, head->value);
			if (head->key)
			{
				flag = 1;
			}
			head = head->next;
		}
	}
	printf("}\n");
}
