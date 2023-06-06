#include <stdio.h>

/**
 *main - derefencing pointers,
 *example with int and char types
 *
 *Return: should be 0
 */
int main()
{
	int n;
	int *p;
	char c;
	char *pp;

	n = 98;
	p = &n;
	c = 'Y';
	pp = &c;

	printf("Address of 'n': %p\n", &n);
	printf("Value of 'n': %d\n", n);
	printf("Value of 'p': %p\n", p);
	printf("Address of 'c': %p\n", &c);
	printf("Value of 'c': %d(%c)\n", c, c);
	printf("Address of '*pp': %d(%c)\n", *pp, *pp);

	*p = 1102;
	*pp = 'E';

	printf("Value of 'n': %d\n", n);
	printf("Value of 'c': %d(%c)\n", c, c);

	return (0);
}
