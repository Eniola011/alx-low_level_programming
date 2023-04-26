#include <stdio.h>

/**
 * main - sum of all multiples of 3 or 5
 * below 1024
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int sum_3, sum_5, sum;
	int i;

	sum_3 = 0;
	sum_5 = 0;
	sum = 0;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
		{
			sum_3 = sum_3 + i;
		} else if ((i % 5) == 0)
		{
			sum_5 = sum_5 + i;
		}
	}
	sum = sum_3 + sum_5;
	printf("%lu\n", sum);
	return (0);
}
