#include "main.h"
#include <stdio.h>

/**
 *_pow_recursion - gets the value of x
 *raised to y
 *@x: base integer
 *@y: exponential
 *Return: result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
}
