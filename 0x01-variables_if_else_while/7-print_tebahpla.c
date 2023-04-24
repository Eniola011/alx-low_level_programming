#include <stdio.h>
/**
 *main - first entry point
 *
 *Return: should be 0 in this program
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}
