#include "main.h"

/**
 *puts2 - prints every other character of a string,
 *
 *@str: input string.
 *
 *Return: no value
 */
void puts2(char *str)
{
	int num = 0;

	while (num >= 0)
	{
		if (str[num] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (num % 2 == 0)
			_putchar(str[num]);
		num++;
	}
}
