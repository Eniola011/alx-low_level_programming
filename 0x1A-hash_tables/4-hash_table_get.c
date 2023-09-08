#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: points to the hash table
 * @key: key of the hash table
 * Return: he value associated with the element, or NULL
 * if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int key_idx;
	hash_node_t *tempnode;

	if (ht == NULL)
	{
		return (NULL);
	}

	if (key == NULL || *key == '\0')
	{
		return (NULL);
	}

	key_idx = key_index((unsigned char *)key, ht->size);

	tempnode = ht->array[key_idx];

	while (tempnode != NULL)
	{
		if (strcmp(tempnode->key, key) == 0)
		{
			return (tempnode->value);
		}
		tempnode = tempnode->next;
	}

	return (NULL);
}
