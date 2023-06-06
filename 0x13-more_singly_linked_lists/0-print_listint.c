#include "lists.h"

/**
 * print_listint - outputs elements of linked list.
 * @h: starting point of linkedlist.
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t newnode = 0;

	if (h == NULL)
	{
		return (newnode);
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		newnode++;
	}

	return (newnode);
}
