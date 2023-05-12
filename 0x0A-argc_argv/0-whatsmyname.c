#include <stdio.h>

/**
 *main - print program name
 *@argc: number of arguments
 *@argv: a pointer array of
 *size of arguments
 *Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
