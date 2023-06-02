#include "lists.h"
/**
 * print_list - outputs all the elements
 * of a list.
 * @h: pointer of singly linked lists.
 * Return: number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t data;

	data = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("%d, %s\n", 0, "(nil)");
		}
		else
		{
			printf("%d, %s\n", h->len, h->str);
		}
		h = h->next;
		data++;
	}

	return (data);
}
