#include <stdio.h>

/**
 * main - first 98 Fibonacci numbers
 *
 * Return: Always 0.
 */
int main(void)
{
	int i = 0;
	unsigned long int a = 0, b = 1, nxt = 0;

	while (i < 98)
	{
		nxt = a + b;
		a = b;
		b = nxt;
		print("%lu", nxt);

		if (i < 97)
			printf(", ");
		i++;
	}
	putchar('\n');
	return (0);
}
