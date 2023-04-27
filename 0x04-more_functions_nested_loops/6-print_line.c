#include "main.h"

/**
 *print_line - prints straight lines
 *
 *@n: number of times the line
 *is printed
 *
 *Return: no value
 *
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		_putchar(95);
	}
	_putchar('\n');
}
