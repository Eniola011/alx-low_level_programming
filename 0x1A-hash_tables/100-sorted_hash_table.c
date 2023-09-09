#include "hash_tables.h"

/**
 * shash_table_create - creates a hash table
 * @size: size of the array
 * Return: a pointer to the newly created hash table
 * also return NULL if something went wrong.
 *
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	shash_node_t **array;
	unsigned long int idx;

	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
	{
		return (NULL);
	}

	array = malloc(sizeof(shash_node_t *) * size);
	if (array == NULL)
	{
		return (NULL);
	}

	for (idx = 0; idx < size; idx++)
	{
		array[idx] = NULL;
	}

	table->array = array;
	table->size = size;
	table->shead = NULL;
	table->stail = NULL;

	return (table);
}

/**
 * add_shash - a function that adds a new node at the beginning
 * @h: a double pointer head of doublylinked list(beginning point)
 * @key: key of the hash table
 * @value: data that the list should contain
 * Return: head of the hash
 */
shash_node_t *add_shash(shash_node_t **h, const char *key, const char *value)
{
	shash_node_t *newnode;

	newnode = *h;

	while (newnode != NULL)
	{
		if (strcmp(key, newnode->key) == 0)
		{
			free(newnode->value);
			newnode->value = strdup(value);
			return (*h);
		}
		newnode = newnode->next;
	}

	newnode = malloc(sizeof(shash_node_t));

	if (newnode == NULL)
		return (NULL);

	newnode->key = strdup(key);
	newnode->value = strdup(value);
	newnode->next = *h;
	*h = newnode;

	return (*h);
}

/**
 * add_anode - adds a node on the DLL of the shash table
 * @ht: points to hash table
 * @newnode: new node
 * return: nothing
 */
void add_anode(shash_table_t *ht, shash_node_t *newnode)
{
	shash_node_t *tempnode1;
	shash_node_t *tempnode2;
	int output;

	tempnode1 = tempnode2 = ht->shead;

	while (tempnode1 != NULL)
	{
		output = strcmp(newnode->key, tempnode1->key);
		if (output == 0)
		{
			return;
		}
		else if (output < 0)
		{
			newnode->sprev = tempnode1->sprev;

			if (tempnode1->sprev)
				tempnode1->sprev->snext = newnode;
			else
				ht->shead = newnode;

			tempnode1->sprev = newnode;
			newnode->snext = tempnode1;

			return;
		}

		tempnode2 = tempnode1;
		tempnode1 = tempnode1->snext;
	}

	newnode->sprev = tempnode2;
	newnode->snext = NULL;

	if (ht->shead)
		tempnode2->snext = newnode;
	else
		ht->shead = newnode;
	ht->stail = newnode;
}

/**
 * shash_table_set - adds an element to the hash table.
 * @ht: points to the shash table
 * @key: key of the shash table
 * @value: value to store
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *newnode;
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

	newnode = add_shash(&(ht->array[key_idx]), key, value);

	if (newnode == NULL)
		return (0);

	add_anode(ht, newnode);

	return (1);
}

/**
 * shash_table_get - retrieves a value associated with a key.
 * @ht: points to the hash table
 * @key: key of the hash table
 * Return: he value associated with the element, or NULL
 * if key couldn’t be found
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int key_idx;
	shash_node_t *tempnode;

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

/**
 * shash_table_print - prints a hash table.
 * @ht: points to hash table
 * Return: nothing
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tempnode;
	char *delim;

	if (ht == NULL)
	{
		return;
	}

	printf("{");
	delim = "";

	tempnode = ht->shead;

	while (tempnode != NULL)
	{
		printf("%s'%s': '%s'", delim, tempnode->key, tempnode->value);
		delim = ", ";
		tempnode = tempnode->snext;
	}

	printf("}\n");
}

/**
 * shash_table_print_rev - prints a shash table in reverse
 * @ht: points to shash table
 * Return: nothing
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tempnode;
	char *delim;

	if (ht == NULL)
	{
		return;
	}

	printf("{");
	delim = "";

	tempnode = ht->stail;

	while (tempnode != NULL)
	{
		printf("%s'%s': '%s'", delim, tempnode->key, tempnode->value);
		delim = ", ";
		tempnode = tempnode->sprev;
	}

	printf("}\n");
}

/**
 * shash_table_delete - deletes a shash table
 * @ht: points to hash table
 * Return: nothing
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int idx;
	shash_node_t *tempnode1;
	shash_node_t *tempnode2;

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
