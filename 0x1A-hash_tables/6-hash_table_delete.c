#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: points to hash table
 * Return: nothing
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *tempnode1;
	hash_node_t *tempnode2;

	if (ht == NULL)
	{
		return;
	}

	for (idx = 0; idx < ht->size; idx++)
	{
		tempnode1 = ht->array[idx];
		while ((tempnode2 = tempnode1) != NULL)
		{
			tempnode1 = tempnode1->next;
			free(tempnode2->key);
			free(tempnode2->value);
			free(tempnode2);
		}
	}

	free(ht->array);
	free(ht);
}
