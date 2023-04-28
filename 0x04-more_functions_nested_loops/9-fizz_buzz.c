#include <stdio.h>

/**
 *main - print fizz for each number of 3
 *print buzz for each number of 5
 *number divisible by 3 and 5 will always
 *be divisible by 15
 *
 *Return: no value
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf(" FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", i);
		}
	}
	printf("\n");
	return (0);
}
