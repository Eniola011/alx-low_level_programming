#include "main.h"
#include <stdio.h>


/**
 * _atoi - converts a string to an integer.
 * @s: input string.
 * Return: integer.
 */
int _atoi(char *s)
{
	unsigned int counter = 0, size = 0, at_oi = 0, num = 1, b = 1, m;

	while (*(s + counter) != '\0')
	{
		if (size > 0 && (*(s + counter) < '0' || *(s + counter) > '9'))
		{
			break;
		}
		else if (*(s + counter) == '-')
		{
			num *= -1;
		}
		else if ((*(s + counter) >= '0') && (*(s + counter) <= '9'))
		{
			if (size > 0)
				b *= 10;
			size++;
		}
		counter++;
	}

	for (m = counter - size; m < counter; m++)
	{
		at_oi = at_oi + ((*(s + m) - 48) * b);
		b /= 10;
	}
	return (at_oi * num);
}