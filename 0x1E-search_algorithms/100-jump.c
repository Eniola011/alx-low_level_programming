#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted
 * array of integers using the Jump search algorithm
 * @array: list to search
 * @size: size of array
 * @value: to be search
 * Return: If value is not present in array or
 * if array is NULL, your function must return -1
 *
 */
int jump_search(int *array, size_t size, int value)
{
	size_t idx = 0, sqr = sqrt(size);

	if (array == NULL)
	{
		return (-1);
	}

	while (idx < size && array[idx] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
		idx += sqr;
	}

	sqr = idx - sqr;
	printf("Value found between indexes [%lu] and [%lu]\n", sqr, idx);

	if (idx >= size)
	{
		idx = size - 1;
	}

	while (sqr <= idx)
	{
		printf("Value checked array[%lu] = [%d]\n", sqr, array[sqr]);
		if (array[sqr] == value)
		{
			return (sqr);
		}
		sqr++;
	}
	return (-1);
}
