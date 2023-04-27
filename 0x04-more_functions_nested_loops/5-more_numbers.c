#include "main.h"

/**
 *more_numbers - number range 10
 *
 *a: how many times it will loop
 *b: numbers to be printed
 *
 *Return: no value
 */
void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 15; b++)
		{
			if (b >= 10)
			{
				_putchar((b / 10) + 48);
			}
			_putchar((b % 10) + 48);
		}
		_putchar('\n');
	}
}
