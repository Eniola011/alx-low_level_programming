#include <stdio.h>

/**
 *main - prints arguments passed
 *@argc: number of arguments
 *@argv: a pointer array of
 *size of arguments
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}
	return (0);
}
