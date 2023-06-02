#include "lists.h"

/**
 * list_len - a function that returns
 * the num of elements in a linked list.
 * @h: pointer of singly linked list
 * Return: num of elements in a linked list.
 */

size_t list_len(const list_t *h)
{
	size_t data;

	data = 0;
	while (h != NULL)
	{
		h = h->next;
		data++;
	}
	return (data);
}
