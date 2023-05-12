#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - adds two positive
 *numbers
 *@argc: number of arguments
 *@argv: a pointer array of
 *size of arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int a, b;
	int sum = 0;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (!isdigit(argv[a][b]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[a]);
	}
	printf("%d\n", sum);
	return (0);
}
