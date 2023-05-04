#include "main.h"
#include <stdio.h>

/**
 *cap_string - capitalize words in string
 *@s: string
 *
 *Return: capitalized string
 *
 */
char *cap_string(char *s)
{
	int a, b;
	int alph[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	a = 0;
	while (*(s + a) != '\0')
	{
		if ((*(s + a) >= 'a') && (*(s + a) <= 'z'))
		{
			if (a == 0)
			{
				*(s + a) = *(s + a) - 32;
			}
			else
			{
				for (b = 0; b <= 12; b++)
				{
					if (alph[b] == *(s + a - 1))
					{
						*(s + a) = *(s + a) - 32;
					}
				}
			}
		}
	a++;
	}
	return (s);
}
