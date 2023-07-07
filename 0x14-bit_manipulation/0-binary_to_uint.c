#include "main.h"

/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary string
 * Return: unsigned int number.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 0;
	unsigned int number = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[a])
	{
		if (b[a] == '1')
		{
			number = number << 1 | 1;
		}
		else if (b[a] == '0')
		{
			number = number << 1;
		}
		else
		{
			return (0);
		}
		a++;
	}
	return (number);
}
