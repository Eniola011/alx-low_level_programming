#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: minimum
 * @max: maximum
 * Return: pointer to the newly created array.
 */
int *array_range(int min, int max)
{
	int *arry;
	int a;

	if (min > max)
		return (NULL);

	arry = malloc(sizeof(*arry) * ((max - min) + 1));

	if (arry == NULL)
		return (NULL);

	for (a = 0; min <= max; a++, min++)
		arry[a] = min;

	return (arry);
}
