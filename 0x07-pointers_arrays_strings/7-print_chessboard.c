#include "main.h"
#include <stdio.h>

/**
 *print_chessboard - prints the chessboard
 *@a: input pointer.
 *Return: no return.
 */
void print_chessboard(char (*a)[8])
{
	int cb, b = 0;

	for (cb = 0; cb < 64; cb++)
	{
		if ((cb % 8 == 0) && (cb != 0))
		{
			b = cb;
			_putchar('\n');
		}
		_putchar(a[cb / 8][cb - b]);
	}
	_putchar('\n');
}

