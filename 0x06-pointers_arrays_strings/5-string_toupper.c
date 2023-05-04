#include "main.h"
#include <stdio.h>

/**
 *string_toupper - change to lowercase
 *of a string
 *@s: string
 *Return: string
 *
 */
char *string_toupper(char *s)
{
	int l = 0;

	while (*(s + l) != '\0')
	{
		if ((*(s + l) >= 97) && (*(s + l) <= 122))
		{
			*(s + l) = *(s + l) - 32;
		}
		l++;
	}

	return (s);
}
