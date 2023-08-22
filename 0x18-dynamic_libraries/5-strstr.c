#include "main.h"
#include <stdio.h>

/**
 *_strstr - finds the first occurrence of the substring.
 *@haystack: entire string.
 *@needle: substring.
 *Return: pointer to the beginning or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	char *Haystack, *Needle;

	while (*haystack != '\0')
	{
		Haystack = haystack;
		Needle = needle;

		while ((*haystack != '\0') && (*Needle != '\0') && (*haystack == *Needle))
		{
			haystack++;
			Needle++;
		}
		if (!*Needle)
		{
			return (Haystack);
		}
		haystack = Haystack + 1;
	}
	return (0);
}