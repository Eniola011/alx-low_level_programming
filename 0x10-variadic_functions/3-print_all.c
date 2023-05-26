#include "variadic_functions.h"

/**
 * print_all - a function that prints anything.
 * @format:  is a list of types of arguments
 * passed to the function.
 * Return: no value.
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int a = 0, b, i = 0;
	char *strng;
	const char f_arg[] = "cifs";

	va_start(valist, format);
	while (format && format[a])
	{
		b = 0;
		while (f_arg[b])
		{
			if (format[a] == f_arg[b] && i)
			{
				printf(", ");
				break;
			} b++;
		}
		switch (format[a])
		{
		case 'c':
			printf("%c", va_arg(valist, int)), i = 1;
			break;
		case 'i':
			printf("%d", va_arg(valist, int)), i = 1;
			break;
		case 'f':
			printf("%f", va_arg(valist, double)), i = 1;
			break;
		case 's':
			strng = va_arg(valist, char *), i = 1;
			if (!strng)
			{
				printf("(nil)");
				break;
			}
			printf("%s", strng);
			break;
		} a++;
	}
	printf("\n"), va_end(valist);
}
