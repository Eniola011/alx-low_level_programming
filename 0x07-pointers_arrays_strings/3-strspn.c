#include "main.h"
#include <stdio.h>

/**
 *_strspn - gets the length of
 *a prefix substring.
 *@s: string
 *@accept: accepts bytes
 *Return: return accepted bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, b, length;

	for (a = 0; s[a] != '\0'; a++)
	{
		length = 1;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				length = 0;
				break;
			}
		}
		if (length == 1)
			break;
	}
	return (a);
}
