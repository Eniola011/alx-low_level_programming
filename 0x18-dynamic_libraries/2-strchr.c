#include "main.h"
#include <stdio.h>

/**
 *_strchr - locates a character in a string
 *@s: string.
 *@c: character.
 *
 *Return: return 0 or s
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++);
	return ('\0');
}