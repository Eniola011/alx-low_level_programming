#include "main.h"

/**
 *print_alphabet - prints alphabets in lower case
 *
 *Return: no value is returned here
 */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
