#include "main.h"
#include <stdio.h>

/**
 *reverse_array - name implies
 *@a: array
 *@n: num of elements in array
 *
 *Return: no value return
 */
void reverse_array(int *a, int n)
{
	int b, c, d;

	for (b = 0; b < n - 1; b++)
	{
		for (c = b + 1; c > 0; c--)
		{
			d = *(a + c);
			*(a + c) = *(a + (c - 1));
			*(a + (c - 1)) = d;
		}
	}
}
