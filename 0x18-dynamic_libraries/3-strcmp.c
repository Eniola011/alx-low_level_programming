#include "main.h"
#include <stdio.h>

/**
 *_strcmp - compare two strings
 *@s1: string 1
 *@s2: string 2
 *
 *Return: 0 if thesame
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, temp = 0;

	while (temp == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		temp = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (temp);
}