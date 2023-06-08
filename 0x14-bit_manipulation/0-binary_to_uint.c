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
	unsigned int digit = 0;
	unsigned int num = 0;

	if (!digit)
	{
		return (0);
	}

	while (b[digit])
	{
		if (b[digit] == '0' || b[digit] == '1')
		{
			num <<= 1;
			num += b[digit] - '0';
			digit++;
		}
		else
		{
			return (0);
		}
	}
	
	return (num);
}
