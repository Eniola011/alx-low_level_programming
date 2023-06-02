#include "lists.h"

/**
 * add_node_end - a function that adds a new
 * node at the end of linked list
 * @head: starting point in linked list
 * @str: value to store in node,
 * str needs to be duplicated
 * Return: address of new element
 * or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *tmp;
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
	newnode->next = NULL;
	tmp = *head;

	if (tmp == NULL)
	{
		*head = newnode;
	}
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = newnode;
	}

	return (*head);
}
