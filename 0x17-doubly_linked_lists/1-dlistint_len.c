#include "lists.h"

/**
 * dlistint_len - a function that returns the number of elements
 * in a doubly linked list
 * @h: head of doublylinked list(beginning point)
 * Return: the length of nodes in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++; /*while head isn't null, increase the length */
		h = h->next;
	}
	return (len); /* return the total length of nodes */
}
