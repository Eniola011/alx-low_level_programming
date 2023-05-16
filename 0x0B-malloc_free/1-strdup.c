#include "main.h"
#include <stdlib.h>

/**
 *_strdup -  returns a pointer to a
 *newly allocated space in memory
 *@str: string
 *
 * Return: pointer array of char
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int i, n;

	i = 0;
	n = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[n])
	{
		n++;
	}
	ptr = (char *)malloc(sizeof(char) * (n + 1));

	if (ptr == NULL)
	{
		return (NULL);
	}

	while ((ptr[i] = str[i]) != '\0')
	{
		i++;
	}
	return (ptr);
}
