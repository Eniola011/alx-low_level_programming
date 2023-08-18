#include "lists.h"

/**
 * delete_dnodeint_at_index - a function that deletes the node at
 * index of a doubly linked list
 * @head: head of doublylinked list(beginning point)
 * @index:  index of the node, starting from 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int itm = 0;
	dlistint_t *tempnode = NULL;

	if (!head || !(*head))
	{
		return (-1);
	}
	else
	{
		tempnode = *head;
		while (index != itm++ && tempnode)
		{
			tempnode = tempnode->next;
		}
		if (!tempnode)
		{
			return (-1);
		}
		if (tempnode->next)
		{
			tempnode->next->prev = tempnode->prev;
		}
		if (index == 0)
		{
			*head = tempnode->next;
		}
		else
		{
			tempnode->prev->next = tempnode->next;
		}
		free(tempnode);
		return (1);
	}
	return (-1);
}
