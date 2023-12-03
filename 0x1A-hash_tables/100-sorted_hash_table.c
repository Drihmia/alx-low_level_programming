#include "hash_tables.h"
void red(void);
/**
 * shash_table_create - a function that creates a hash table.
 * @size: the size of the array
 *
 * Return: a pointer to the newly created hash table,
 * If something went wrong, your function should return NULL
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *h_table = NULL;
	uli i;

	h_table = malloc(sizeof(shash_table_t));
	if (!h_table)
		return (NULL);
	h_table->size = size;
	h_table->array = malloc(sizeof(char *) * h_table->size);
	h_table->shead = NULL;
	h_table->stail = NULL;
	if (!(h_table->array))
		return (NULL);
	for (i = 0; i < h_table->size; i++)
	{
		h_table->array[i] = NULL;
	}

	return (h_table);
}
/**
 * create_node - create new node or bucket.
 * @node: address of the new node to create.
 * @key: key can not be an empty string.
 * @value: the value associated with the key. value must be duplicated.
 * value can be an empty string.
 * Return: 1 if it succeeded, 0 otherwise.
 */
int create_node(shash_node_t **node, const char *key, const char *value)
{
	*node = malloc(sizeof(shash_node_t));
	if (!*node)
		return (0);
	(*node)->key = strdup(key), (*node)->next = NULL;
	if (!((*node)->key))
	{
		free((*node));
		return (0);
	}
	(*node)->value = strdup(value), (*node)->snext = NULL, (*node)->sprev = NULL;
	if (!((*node)->value))
	{
		free((*node)->key), free(*node);
		return (0);
	}
	return (1);
}

/**
 * shash_table_set - a function that adds an element to the hash table.
 * @ht: the hash table you want to add or update the key/value to.
 * @key: key can not be an empty string.
 * @value: the value associated with the key. value must be duplicated.
 * value can be an empty string.
 *
 * In case of collision, add the new node at the beginning of the list.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *node = NULL, *tmp = NULL, *shd = NULL;
	uli index = 0;

	if (!ht || !ht->array || !key || !(*(key + 0)))
		return (0);
	if (ht->size == 0)
		return (0);
	if (!create_node(&node, key, value))
		return (0);
	/* Sorted doubly linked list */
	if (!ht->shead)
	{
		ht->shead = node;
		ht->stail = node;
	}
	else
	{
		shd = ht->shead;
		while (shd->snext && strcmp(key, shd->key) > 0)
		{
			shd = shd->snext;
		}
		if (!shd->sprev)
		{
			if (strcmp(key, shd->key) < 0)
			{
				shd->sprev = node;
				node->snext = shd;
				ht->shead = node;
			}
			else if (strcmp(key, shd->key) == 0)
			{
				free(shd->value);
				shd->value = strdup(value);
			}
			else
			{
				shd->snext = node;
				node->sprev = shd;
				ht->stail = node;
			}

		}
		else if (!shd->snext)
		{
			if (strcmp(key, shd->key) < 0)
			{
				node->sprev = shd->sprev;
				shd->sprev->snext = node;
				node->snext = shd;
				shd->sprev = node;
			}
			else if (strcmp(key, shd->key) == 0)
			{
				free(shd->value);
				shd->value = strdup(value);
			}
			else
			{
				shd->snext = node;
				node->sprev = shd;
				ht->stail = node;
			}
		}
		else
		{
			if (strcmp(key, shd->key) < 0)
			{
				node->sprev = shd->sprev;
				shd->sprev->snext = node;
				node->snext = shd;
				shd->sprev = node;
			}
			else if (strcmp(key, shd->key) == 0)
			{
				free(shd->value);
				shd->value = strdup(value);
			}
		}
	}
	/* Singly linked list */
	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];
	if (ht->array && tmp)
	{
		while (tmp)
		{
			if (tmp->key && !strcmp(tmp->key, key))
			{
				free(tmp->value), tmp->value = node->value;
				free(node->key), free(node);
				return (1);
			}
			tmp = tmp->next; }
		/* where i should add a new node of DLL, if the DLL exist*/
		node->next = ht->array[index], ht->array[index] = node;
	}
	else
		ht->array[index] = node;
	return (1);
}

/**
 * shash_table_get - a function that retrieves a value associated with a key.
 * @ht: the hash table you want to look into.
 * @key: the key you are looking for.
 * Return: the value associated with the element, or
 * NULL if key couldn’t be found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *head = NULL;
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
/**
 * shash_table_print - a function that prints a hash table.
 * @ht: the hash table you want to look into.
 * You should print the key/value in the order that they
 * appear in the array of hash table (Order: array, list).
 * If ht is NULL, don’t print anything
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *shd = NULL;
	int sflag = 0;

	if (!ht || !ht->array)
		return;
	printf("{");
	shd = ht->shead;
	while (shd)
	{
		if (shd->key)
		{
			if (sflag)
				printf(", ");
			printf("'%s': '%s'", shd->key, shd->value);
			sflag = 1;
		}
		shd = shd->snext;
	}
	printf("}\n");

}

/**
 * shash_table_print_rev - a function that prints a hash table.
 * @ht: the hash table you want to look into.
 * You should print the key/value in the order that they
 * appear in the array of hash table (Order: array, list).
 * If ht is NULL, don’t print anything
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *stl = NULL;
	int sflag = 0;

	if (!ht || !ht->array)
		return;
	stl = ht->stail;
	printf("{");
	while (stl)
	{
		if (stl->key)
		{
			if (sflag)
				printf(", ");
			printf("'%s': '%s'", stl->key, stl->value);
			sflag = 1;
		}
		stl = stl->sprev;
	}
	printf("}\n");

}

/**
 * shash_table_delete - a function that deletes a hash table.
 * @ht: the hash table
 * Return: None
 */
void shash_table_delete(shash_table_t *ht)
{
	uli i;
	shash_node_t *head = NULL, *tmp = NULL;

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
