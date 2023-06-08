#include "main.h"

/**
 * binary_to_uint - a function that converts a binary
 * number to an unsigned int.
 * @b: is pointing to a string of 0 and 1 chars
 * Return: the converted number, or
 * return 0 if there is one or more chars in the string
 * b that is not 0 or 1, b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int digit; /* converted number */
	int i; /* length of char */
	int _base2;/* raise to power two */

	if (!b)
	{
		return (0);
	}

	digit = 0;

	for (i = 0; b[i] != '\0'; i++)
		;

	for (i--, _base2 = 1; i >= 0; i--, _base2 *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		if (b[i] & 1)
		{
			digit += _base2;
		}
	}

	return (digit);
}
