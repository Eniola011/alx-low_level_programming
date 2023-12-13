#include "search_algos.h"

/**
 * recursivebinary -  searches for a value in a sorted array of integers.
 * @array: list to search
 * @size: size of array
 * @value: to be searched
 * Return: If value is not present in array or if array is NULL,
 * your function must return -1
 *
 */
int recursivebinary(int *array, size_t size, int value)
{
	size_t idx, half = size / 2;

	if (array == NULL || size == 0)
	{
		return (-1);
	}

	printf("Searching in array");

	for (idx = 0; idx < size; idx++)
	{
		printf("%s %d", (idx == 0) ? ":" : ",", array[idx]);
	}
	printf("\n");

	if (half && size % 2 == 0)
	{
		half--;
	}

	if (value == array[half])
	{
		if (half > 0)
		{
			return (recursivebinary(array, half + 1, value));
		}
		return ((int)half);
	}

	if (value < array[half])
	{
		return (recursivebinary(array, half + 1, value));
	}
	half++;

	return (recursivebinary(array + half, size - half, value) + half);
}

/**
 * advanced_binary - searches for a value in a sorted array of integers.
 * @array: list to search
 * @size: size of array
 * @value: to be searched
 * Return: If value is not present in array or if array is NULL,
 * your function must return -1
 *
 */
int advanced_binary(int *array, size_t size, int value)
{
	int idx;

	idx = recursivebinary(array, size, value);

	if (idx >= 0 && array[idx] != value)
	{
		return (-1);
	}

	return (idx);
}
