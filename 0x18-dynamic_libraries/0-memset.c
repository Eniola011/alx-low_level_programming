#include "main.h"
#include <stdio.h>

/**
 *_memset - set memory to with a
 *constant byte
 *@s: memory point
 *@b: constant byte
 *@n: byte
 *Return: return memory point
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		*(s + a) = b;
	}
	return (s);
}