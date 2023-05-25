#include "3-calc.h"

/**
 * op_add - adds two integers
 * @a: first integer
 * @b: second integer
 * Return: addition
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - subtracts two integers
 *@a: first int
 *@b: second int
 *Return: subraction
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - multiplies two integers
 *@a: first int
 *@b: second int
 *Return: multiplication
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 *op_div - divides two integers
 *@a: first int
 *@b: second int
 *Return: division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 *op_mod - modulus division of two int
 *@a: first int
 *@b: second int
 *Return: remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
