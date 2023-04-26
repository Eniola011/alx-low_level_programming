#include <stdio.h>

/**
 * main - 50 fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	long int a, b, c, nxt;

	b = 1;

	c = 2;

	for (a = 1; a <= 50; ++a)
	{
		if (b != 20365011074)
		{
			printf("%ld, ", b);
		} else
		{
			printf("%ld\n", b);
		}
		nxt = b + c;
		b = c;
		c = nxt;
	}

	return (0);
}
