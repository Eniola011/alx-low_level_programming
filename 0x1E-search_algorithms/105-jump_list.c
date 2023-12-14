#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list of integers
 * using the Jump search algorithm.
 * @list: points to array list
 * @size: size of array
 * @value: to be searched
 * Return: If value is not present in head or if head is NULL,
 * your function must return NULL
 *
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t idx, a, b;
	listint_t *prev;

	if (list == NULL || size == 0)
		return (NULL);

	b = (size_t)sqrt((double)size);
	idx = 0;
	a = 0;

	do {
		prev = list;
		a++;
		idx = a * b;

		while ((list->next) && (list->index < idx))
			list = list->next;

		if ((list->next == NULL) && (idx != list->index))
			idx = list->index;

		printf("Value checked at index [%d] = [%d]\n", (int)idx, list->n);
	} while ((idx < size) && (list->next) && (list->n < value));

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)prev->index, (int)list->index);

	for (; prev && prev->index <= list->index; prev = prev->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)prev->index, prev->n);
		if (prev->n == value)
			return (prev);
	}

	return (NULL);
}
