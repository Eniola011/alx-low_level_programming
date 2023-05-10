#include "main.h"
#include <stdio.h>

/**
 *factorial - gets factorial
 *of a number
 *@n: integer
 *Return: return 1 if less than
 *1
 */
int factorial(int n)
{
	if (n <= 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
