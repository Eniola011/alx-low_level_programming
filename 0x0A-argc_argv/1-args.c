#include <stdio.h>

/**
 *main - print program name
 *@argc: number of arguments
 *@argv: a pointer array of
 *size of arguments
 *Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
