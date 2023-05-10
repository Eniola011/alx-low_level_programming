#include "main.h"
#include <stdio.h>

/**
 *_print_rev_recursion - prints
 *string in reverse
 *@s: string
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
	}
	else
	{
		_print_rev_recursion(++s);
		_putchar(*s);
	}
}
