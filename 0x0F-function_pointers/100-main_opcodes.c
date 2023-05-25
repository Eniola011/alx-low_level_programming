#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints opcodes to main
 * @argc: arg count
 * @argv: arg vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *op_code = (char *) main;
	int i, n_byte;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n_byte = atoi(argv[1]);

	if (n_byte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < n_byte; i++)
	{
		printf("%02x", op_code[i] & 0xFF);
		if (i != n_byte - 1)
			printf(" ");
	}

	printf("\n");
	return (0);
}
