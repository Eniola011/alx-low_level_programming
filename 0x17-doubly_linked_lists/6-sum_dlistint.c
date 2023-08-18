#include "lists.h"

/**
 * sum_dlistint - a function that returns the sum of all the data
 * (n) of a doubly linked list
 * @head: head of doublylinked list(beginning point)
 * Return: the sum of all the data (n) of the list and return 0
 * if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *currentnode = head;
	int sum_oflist = 0;

	if (currentnode == NULL)
	{
		return (0);
	}

	while (currentnode != NULL)
	{
		sum_oflist += currentnode->n;
		currentnode = currentnode->next;
	}

	return (sum_oflist);
}
