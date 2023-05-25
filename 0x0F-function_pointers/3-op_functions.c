#include "3-calc.h"

/**
 * op_add - adds two integers
 * op_sub - ubtractstwo integers
 * op_mul - multiplies two integers
 * op_div - divides two integers
 * op_mod - modulos division of two int
 * @a: first integer
 * @b: second integer
 *
 * Return: the results from add,sub,
 *mul,div and mod
 */
int op_add(int a, int b)
{
	return (a + b);
}

/* subtraction */
int op_sub(int a, int b)
{
	return (a - b);
}
/* multiplication */
int op_mul(int a, int b)
{
	return (a * b);
}
/* division */
int op_div(int a, int b)
{
	return (a / b);
}
/* remainder */
int op_mod(int a, int b)
{
	return (a % b);
}
