#include "main.h"

/**
 * flip_bits - outputs the number of bits you would need to flip
 * to get from one number to another.
 * @n: int 1
 * @m: int 2
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int _nbits;

	for (_nbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
		{
			_nbits++;
		}
	}

	return (_nbits);
}
