#include "main.h"

/**
 * flip_bits - checks the number of bits you would need to flip
 * to get from one number to another.
 * @n: int
 * @m: int
 * Return: result
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int sumof = 0;
	unsigned long int a;

	a = n ^ m;

	while (a)
	{
		sumof += a & 1;
		a >>= 1;
	}

	return (sumof);
}
