#include "lists.h"

/**
 * add_node - a function that adds a new node
 * at the beginning
 * @head: beginning of a linked list
 * @str: value to store in node,
 * str needs to be duplicated.
 * Return: the address of the new element,
 * or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	size_t i;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->str = strdup(str);

	for (i = 0; str[i]; i++)
		;

	newnode->len = i;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
