#include "main.h"
#include <stdlib.h>

/**
 *_strdup -  returns a pointer to a
 *newly allocated space in memory
 * @str: string 
 *
 * Return: pointer array of char
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int i, n;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	
	ptr = (char *)malloc(sizeof(char) * (i + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (n = 0; n <= i; n++)
	{
		ptr[n] = str[n];
	}
	return (ptr);
}
