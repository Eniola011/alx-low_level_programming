#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node
 * @head: starting point of linkedlist
 * @index: index of node starting at 0
 * Return: return NULL if node doesnt exist
 * otherwise return nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int nth;

	for (nth = 0; (nth < index) && (head != NULL); nth++)
	{
		head = head->next;
	}

	return (head);
}
