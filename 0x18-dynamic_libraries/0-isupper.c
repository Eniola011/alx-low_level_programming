#include "main.h"

/**
 *_isupper - checks for uppercase using
 *ASCII decimal code for letters
 *
 *@c: represents the letter
 *Return: returns 1 if it is uppercase
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
