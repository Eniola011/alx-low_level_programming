#include <stdio.h>
#include <stdlib.h>

/**
 *main - multiplies two numbers
 *@argc: number of arguments
 *@argv: a pointer array of
 *size of arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int mul = 0;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", mul);
	return (0);
}
