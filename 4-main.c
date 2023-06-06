#include <stdio.h>
/**
 *main - storing the address of variable into a pointer
 *
 *Return: should be 0
 */
int main ()
{
	int n; //a variable is initialized//
	int *p; //a pointer variable//

	n = 98;
	p = &n;

	printf("The Address of 'n': %p\n", &n);
	printf("The value of 'p': %p\n", p);

	return (0);
}
