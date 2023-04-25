#include "main.h"

/**
 *_islower - checks through the input for lowercase alpahbets
 *
 * int c - the alphabet
 *Return: 1 is return if 'c' is lowercase then returns 0 if 'c' isn't lowercase.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
