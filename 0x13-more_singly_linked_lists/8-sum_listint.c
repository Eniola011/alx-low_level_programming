#include "lists.h"

/**
 * sum_listint - a function that returns the
 * sum of all the data (n)
 * a linked list.
 * @head: starting point of linkedlist
 * Return: return sum and 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum_data = 0;

	while (head != NULL)
	{
		sum_data += head->n;
		head = head->next;
	}

	return (sum_data);
}
