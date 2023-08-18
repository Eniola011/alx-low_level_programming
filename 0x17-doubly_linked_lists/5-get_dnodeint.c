#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth node of
 * a doubly linked list
 * @head: head of doublylinked list(beginning point)
 * @index:  index of the node, starting from 0
 * Return: NULL if the node does not exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *currentnode = head;
	unsigned int length = 0;

	while (currentnode != NULL)
	{
		if (length == index)
		{
			return (currentnode);
		}
		currentnode = currentnode->next;
		length++;
	}

	return (NULL);
}
