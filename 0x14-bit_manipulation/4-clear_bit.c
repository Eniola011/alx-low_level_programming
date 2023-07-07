#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: int
 * @index: index
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a = 1;

	if (index > 32)
	{
		return (-1);
	}

	a = a << index;
	a = ~a;

	*n = *n & a;

	return (1);
}
