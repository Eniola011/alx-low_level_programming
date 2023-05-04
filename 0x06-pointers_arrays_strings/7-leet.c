#include "main.h"
#include <stdio.h>

/**
 *leet - vowels to num
 *@s: string
 *
 *Return: string
 */
char *leet(char *s)
{
	char alph[] = "aeotlAEOTL";
	char num[] = "4307143071";
	int c = 0;
	int d;

	while (*(s + c) != '\0')
	{
		for (d = 0; d <= 9; d++)
		{
			if (*(s + c) == alph[d])
			{
				*(s + c) = num[d];
			}
		}
		c++;
	}
	return (s);
}
