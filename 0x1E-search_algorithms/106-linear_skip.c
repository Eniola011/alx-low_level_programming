#include "search_algos.h"

/**
 * linear_skip - searches for a value in a sorted skip list of integers.
 * @list: points to array list
 * @value: to be searched
 * Return: If value is not present in list or if head is NULL,
 * your function must return NULL
 *
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *m = list;

	if (list == NULL)
	{
		return (NULL);
	}

	while (list->n < value)
	{
		if (!list->express)
			break;
		m = list;
		list = list->express;
		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
	}

	if (list->n >= value)
	{
		printf("Value found between indexes [%lu] and [%lu]\n",
				m->index, list->index);
		list = m;
	}
	else
	{
		for (m = list; m->next; m = m->next)
			;
		printf("Value found between indexes [%lu] and [%lu]\n",
				list->index, m->index);
	}

	while (list)
	{
		printf("Value checked at index [%lu] = [%d]\n", list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}

	return (NULL);
}
