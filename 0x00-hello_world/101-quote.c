#include <unistd.h>
/**
 *main - main first entry point.
 *
 *Return: return 0 always (success)
 */
int main(void)
{
	char strn[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, strn, 59);
	return (1);
}
