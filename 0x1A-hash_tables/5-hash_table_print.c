#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table.
 * @ht: points to hash table
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx;
	hash_node_t *tempnode;
	char *delim;

	if (ht == NULL)
	{
		return;
	}

	printf("{");
	delim = "";

	for (idx = 0; idx < ht->size; idx++)
	{
		tempnode = ht->array[idx];
		while (tempnode != NULL)
		{
			printf("%s'%s': '%s'", delim, tempnode->key, tempnode->value);
			delim = ", ";
			tempnode = tempnode->next;
		}
	}
	printf("}\n");
}
