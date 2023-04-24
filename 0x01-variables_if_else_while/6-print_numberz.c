#include <stdio.h>
/**
 *main - first entry point
 *
 *Return: should be 0 in this program
 */
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	putchar('\n');
	return (0);
}
