#include "main.h"
#include <stdio.h>
int sqrtt(int n, int root);

/**
 *sqrtt - finds the square root of
 *natural numbers
 *@n: number from 1
 *@root: squareroot of n
 *Return: return -1 if number
 *isnt natural
 */
int sqrtt(int n, int root)
{
	if (n * n == root)
	{
		return (n);
	}
	else if (n == root)
	{
		return (-1);
	}
	return (1 * sqrtt(n + 1, root));
}

/**
 *_sqrt_recursion - returns the natural
 *square root of a number
 *@n: number
 *
 *Return: squareroot
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrtt(1, n));
}
