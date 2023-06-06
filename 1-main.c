#include <stdio.h>

/**
 *main - checks address of a variable
 *@'%p': placeholder for pointers
 *@'&c': address of variable c
 *@ '&n': address of variable n
 */
int main()
{
	char c;
	int n;

	printf("Address of variable 'c': %p\n", &c);
	printf("Address of variable 'n': %p\n", &n);

	return (0);
}
