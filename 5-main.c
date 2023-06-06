#include <stdio.h>

/**
 *main - derefencing pointers
 *
 *Return: should be 0
 */
int main()
{
	int n;
	int *p;

	n = 98;
	p = &n;

	printf("Address of 'n': %p\n", &n);
	printf("Value of 'n': %d\n", n);
	printf("Value of 'p': %p\n", p);

	*p = 402;

	printf("Value of 'n': %d\n", n);
	return (0);
}

