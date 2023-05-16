#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: char
 *
 * Return: pointer array of char
 */
char *create_array(unsigned int size, char c)
{
	char *chr;
	unsigned int a;

	if (size == 0)
	{
		return (NULL);
	}

	chr = malloc(sizeof(c) * size);

	if (chr == NULL)
	{
		return (NULL);
	}

	for (a = 0; a < size; a++)
	{
		chr[a] = c;
	}

	return (chr);
}
