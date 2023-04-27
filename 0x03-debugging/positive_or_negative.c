#include "main.h"

/**
 *positive_or_negative - prints if integer is positive or negative
 *
 *@i: the integer number
 *
 *Return: should be 0 for this program
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive", i);
	else if (i == 0)
		printf("%d is zero", i);
	else
		printf("%d is negative", i);
	printf("\n");
}
