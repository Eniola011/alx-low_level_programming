#include <stdio.h>

/**
 * main - sum of even-valued fibonacci numbers.
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;
	unsigned long int b, c, nxt, sum;

	b = 1;
	c = 2;
	sum = 0;

	for (a = 1; a <= 33; ++a)
	{
		if (b < 4000000 && (b % 2) == 0)
		{
			sum = sum + b;
		}
		nxt = b + c;
		b = c;
		c = nxt;
	}

	printf("%lu\n", sum);

	return (0);
}
