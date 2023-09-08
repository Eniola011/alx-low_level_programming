#include "hash_tables.h"

/**
 * add_nodehash - a function that adds a new node at the beginning
 * @head: a double pointer head of doublylinked list(beginning point)
 * @key: key of the hash table
 * @value: data that the list should contain
 * Return: head of the hash
 */
hash_node_t *add_nodehash(hash_node_t **head, const char *key, const char *value)
{
	hash_node_t *newnode;

	newnode = *head;

	while (newnode != NULL)
	{
		if (strcmp(key, newnode->key) == 0)
		{
			free(newnode->value);
			newnode->value = strdup(value);
			return (*head);
		}
		newnode = newnode->next;
	}

	newnode = malloc(sizeof(hash_node_t));

	if (newnode == NULL)
		return (NULL);

	newnode->key = strdup(key);
	newnode->value = strdup(value);
	newnode->next = *head;
	*head = newnode;

	return (*head);
}

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: points to the hash table
 * @key: key of the hash table
 * @value: value to store
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int key_idx;

	if (ht == NULL)
	{
		return (0);
	}

	if (key == NULL || *key == '\0')
	{
		return (0);
	}

	key_idx = key_index((unsigned char *)key, ht->size);

	if (add_nodehash(&(ht->array[key_idx]), key, value) == NULL)
	{
		return (0);
	}

	return (1);
}
