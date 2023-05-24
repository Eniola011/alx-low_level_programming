#include "function_pointers.h"
#include <stdio.h>

/**
 *print_name - prints a name
 *@name: name of user
 *@f: function pointer
 *Return: no value
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
