#include "main.h"

/**
* clear_bit - sets the value of a bit at a given index
* @n: int
* @index: is the index, starting from 0 of the bit you want to set
* Return: 1 if it worked, or -1 if an error occurred
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int b;

	if (index > 63)
	{
		return (-1);
	}

	b = 1 << index;

	if (*n & b)
	{
		*n ^= b;
	}

	return (1);
}
