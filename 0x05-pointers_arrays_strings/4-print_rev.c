#include "main.h"

/**
 *print_rev - prints a string in reverse
 *with a new line.
 *@s: input string.
 *
 *Return: no return.
 */
void print_rev(char *s)
{
	int num = 0;

	while (num >= 0)
	{
		if (s[num] == '\0')
		{
			break;
		}
		num++;
	}
	for (num--; num >= 0; num--)
	{
		_putchar(s[num]);
	}
	_putchar('\n');
}
