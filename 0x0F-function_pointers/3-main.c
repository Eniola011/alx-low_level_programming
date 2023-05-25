#include "3-calc.h"

/**
 * main - checks code
 * @argc: arg count.
 * @argv: arg vector.
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b;
	int (*res)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}

	res = get_op_func(argv[2]);

	if (res == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", res(a, b));
	return (0);
}
