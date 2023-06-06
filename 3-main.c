#include <stdio.h>

/**
 *main - checks address of variable p
 *&p: address of p
 *%p: placeholder for pointers
 *Return: should be 0
 */
int main()
{
	int *p;

	printf("Address of variable 'p': %p\n", &p);

	return (0);
}
