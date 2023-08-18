#include "lists.h"
/**
 * insert_dnodeint_at_index - a function that inserts a new node at a position.
 * @h: a double pointer head of doublylinked list(beginning point)
 * @idx: index of the list where the new node should be added.
 * @n: data that the list should contain
 * Return:  the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tempnode = *h, *newnode;
	unsigned int itm; /* every node on the list */

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
	newnode->n = n, newnode->prev = NULL, newnode->next = NULL;
	if (idx == 0)
	{
		newnode->next = *h;
		if (*h)
		{
			(*h)->prev = newnode;
		}
		*h = newnode;
		return (newnode);
	}
	for (itm = 0; itm < idx - 1; itm++)
	{
		if (tempnode == NULL)
		{
			free(newnode);
			return (NULL);
		}
		tempnode = tempnode->next;
	}
	if (tempnode == NULL)
	{
		free(newnode);
		return (NULL);
	}
	newnode->prev = tempnode, newnode->next = tempnode->next;
	if (tempnode->next)
	{
		tempnode->next->prev = newnode;
	}
	tempnode->next = newnode;
	return (newnode);
}
