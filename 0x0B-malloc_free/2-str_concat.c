#include "main.h"
#include <stdlib.h>

/**
 *str_concat -  concatenate two strings
 *@s1: string one
 *@s2: other string
 *
 * Return: pointer string
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int a = 0, b = 0, n1 = 0, n2 = 0;

	while (s1 && s1[n1])
	{
		n1++;
	}
	while (s2 && s2[n2])
	{
		n2++;
	}
	ptr = malloc(sizeof(char) * (n1 + n2 + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	a = 0;
	b = 0;

	if (s1)
	{
		while (a < n1)
		{
			ptr[a] = s1[a];
			a++;
		}
	}
	if (s2)
	{
		while (a < (n1 + n2))
		{
			ptr[a] = s2[b];
			a++;
			b++;
		}
	}
	ptr[a] = '\0';
	return (ptr);
}
