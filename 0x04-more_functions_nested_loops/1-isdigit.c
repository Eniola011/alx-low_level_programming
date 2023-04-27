#include "main.h"

/**
 *_isdigit - checks for number from
 *0 and 9 using
 *ASCII decimal code for letters
 *
 *@c: represents the digit
 *Return: returns 1 if it is a digit
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
