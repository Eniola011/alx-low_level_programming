#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted
 * array of integers using the Interpolation search algorithm
 * @array: list to search
 * @size: size of array
 * @value: to be search
 * Return: If value is not present in array or
 * if array is NULL, your function must return -1
 *
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;
	size_t pos = 0;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	while (1)
	{
		pos = low + (((double)(high - low) /
				(array[high] - array[low])) * (value - array[low]));
		if (pos >= size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			return (-1);
		}

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);

		else if (array[pos] > value)
			high = pos - 1;

		else if (array[pos] < value)
			low = pos + 1;
	}

	return (-1);
}
