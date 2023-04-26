#include "main.h"

/**
 * jack_bauer - Prints every minute of day
 *
 * starting from 0:00 to 23:59.
 */
void jack_bauer(void)
{
	int day;
	int minut;

	day = 0;

	while (day < 24)
	{
		minut = 0;

		while (minut < 60)
		{
			_putchar((day / 10) + '0');
			_putchar((day % 10) + '0');
			_putchar(':');
			_putchar((minut / 10) + '0');
			_putchar((minut % 10) + '0');
			_putchar('\n');
			minut++;
		}
		day++;
	}
}
