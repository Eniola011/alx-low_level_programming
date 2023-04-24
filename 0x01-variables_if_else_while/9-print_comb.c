#include <stdio.h>
/**
 *main - first entry point
 *
 *Return: should be 0 in this program
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		if (i == 9)
			putchar(i + '0');
		else
			putchar(i + '0');
			putchar(',');
			putchar(' ');
	}
	return (0);
}
