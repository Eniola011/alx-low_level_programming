#include "main.h"
#include <stdio.h>
int primenum(int n, int i);

/**
 *primenum - checks for prime
 *@i: number to iterate
 *@n: integer
 *Return: 1 if prime otherwise 0
 */
int primenum(int n, int i)
{
	if ((n % i) == 0)
	{
		if (n == i)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}

	return (0 + (primenum(n, (i + 1))));
}

/**
 *is_prime_number - checks for prime
 *number
 *@n: integer
 *Return: 1 if number is prime
 *otherwise 0.
 */
int is_prime_number(int n)
{
	if ((n == 0) || (n < 0) || (n == 1))
	{
		return (0);
	}

	return (primenum(n, 2));
}
