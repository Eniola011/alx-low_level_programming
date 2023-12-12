#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers
 * using the Linear search algorithm
 * @array: list to search
 * @size: size of array
 * @value: to be search
 * Return: first index where value is located
 * If value is not present in array or if array is NULL,
 * your function must return -1
 *
 */
int linear_search(int *array, size_t size, int value)
{
	int idx;

	if (array == NULL)
	{
		return (-1);
	}

	for (idx = 0; idx < (int)size; idx++)
	{
		printf("Value checked array[%u] = [%d]\n", idx, array[idx]);
		if (value == array[idx])
		{
			return (idx);
		}
	}

	return (-1);
}
