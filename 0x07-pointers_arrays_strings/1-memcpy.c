#include "main.h"
#include <stdio.h>

/**
 *_memcpy - copies memory area.
 *@dest: point s to destination
 *@src: memory area
 *@n: byte
 *Return: return dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		*(dest + a) = *(src + a);
	}
	return (dest);
}
