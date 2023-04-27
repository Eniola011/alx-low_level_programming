#include "main.h"

/**
 *print_numbers - numbers from 0 to 9
 *using ASCII code
 *
 *Return: no return value
 */
void print_numbers(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
