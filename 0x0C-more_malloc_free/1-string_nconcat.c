#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - concatenate twostrings
 *@s1: first string
 *@s2: second string
 *@n: unsigned int
 *Return: If the function fails, it should return NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int a, b, c;

	if (s1 == NULL)
		a = 0;
	else
		for (a = 0; s1[a]; a++)
		;
	if (s2 == NULL)
		b = 0;
	else
		for (b = 0; s2[b]; b++)
		;
	if (b > n)
		b = n;
	ptr = malloc(sizeof(char) * (a + b + 1));
	if (ptr == NULL)
		return (NULL);
	for (c = 0; c < a; c++)
		ptr[c] = s1[c];
	for (c = 0; c < b; c++)
		ptr[c + a] = s2[c];
	ptr[a + b] = '\0';
	return (ptr);
}
