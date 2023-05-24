#include "function_pointers.h"

/**
 * array_iterator - executes a functio
 * @array: inputted array.
 * @size: of array.
 * @action: function pointer
 * Return: no value
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
