#include "lists.h"

/**
 * listint_len - returns elements in linked list
 * @h: starting point of a linked list
 * Return: elements in list
 */
size_t listint_len(const listint_t *h)
{
	size_t newnode = 0;

	if (h == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		newnode++;
		h = h->next;
	}

	return (newnode);
}
