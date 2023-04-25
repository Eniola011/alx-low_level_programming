#include "main.h"

/**
 *_islower - checks through the input for lowercase alpahbets
 *
 *@c: the alphabet
 *Return: 1 is return if 'c' is lowercase then 0 otherwise.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
