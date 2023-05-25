#include "variadic_functions.h"

/**
 * print_strings - prints strings,
 * followed by a new line.
 * @separator: is the string to be
 * printed between the strings
 * @n: is the number of strings
 * passed to the function
 * Return: no value.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int a;
	char *strng;

	va_start(valist, n);

	for (a = 0; a < n; a++)
	{
		strng = va_arg(valist, char *);

		if (strng)
		{
			printf("%s", strng);
		}
		else
		{
			printf("(nil)");
		}

		if (a < n - 1)
		{
			if (separator)
			{
				printf("%s", separator);
			}

		}
	}

	printf("\n");
	va_end(valist);
}
