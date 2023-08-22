#include "main.h"

/**
 *_puts - prints a string with a new line.
 *@str: input string.
 *
 *Return: no return.
 */
void _puts(char *s)
{
	int num = 0;

	while (num >= 0)
	{
		if (s[num] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(s[num]);
		num++;
	}
}
