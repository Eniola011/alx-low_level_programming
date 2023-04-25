#include "main.h"

/**
 *print_alphabet_x10 - prints lower case letters 10 times
 *
 *Return: no value
 */
void print_alphabet_x10(void)
{
	char number, letter;

	for (number = 0; number <= 9; number++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
	}
	_putchar('\n');
}
