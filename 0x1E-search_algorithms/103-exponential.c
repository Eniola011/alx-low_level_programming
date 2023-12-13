#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted
 * array of integers using the Binary search algorithm
 * @array: list to search
 * @size: size of array
 * @value: to be search
 * Return: If value is not present in array or
 * if array is NULL, your function must return -1
 *
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, middle, idx;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	while (low <= high)
	{
		middle = (low + high) / 2;
		printf("Searching in array:");
		for (idx = low; idx <= high; idx++)
		{
			if (idx < high)
			{
				printf(" %d,", array[idx]);
			}
			else
			{
				printf(" %d\n", array[idx]);
			}
		}
		if (array[middle] == value)
			return (middle);
		else if (array[middle] > value)
			high = middle - 1;
		else
			low = middle + 1;
	}
	return (-1);
}

/**
 * exponential_search - searches for a value in a sorted array
 * of integers using the Exponential search algorithm
 * @array: list to search
 * @size: size of array
 * @value: to be searched
 * Return: If value is not present in array or if array is NULL,
 * your function must return -1
 *
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t idx = 1, new_size = 0;
	int result;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	while (idx < size && array[idx] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", idx, array[idx]);
		idx <<= 1;
	}

	if (idx >= size)
	{
		new_size = size;
	}
	else
	{
		new_size = idx + 1;
	}

	new_size -= idx >> 1;
	idx >>= 1;
	printf("Value found between indexes [%lu] and [%lu]\n",
			idx, idx << 1 >= size ? size - 1 : idx << 1);
	result = binary_search(array + idx, new_size, value);
	return (result == -1 ? result : result + (int)idx);
}
