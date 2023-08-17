#include "lists.h"

/**
 * print_dlistint - a function that prints elements
 * of a doubly linked list
 * @h: head of doublylinked list(beginning point)
 * Return: the number of nodes in list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;
	const dlistint_t *currentnode = h;

	while (currentnode != NULL)
	{
		printf("%d\n", currentnode->n);
		currentnode = currentnode->next;
		nodes++;
	}
	return (nodes);
}
