#include "main.h"

/**
 *swap_int - swap two integers
 *@a: integer 1
 *@b: integer 2
 *
 *Return: no return
 */
void swap_int(int *a, int *b)/*a=98,b=42*/
{
	*a = *a + *b;/*a=140(98+42)*/
	*b = *a - *b;/*b=98(140-42)*/
	*a = *a - *b;/*a=42(140-98)*/
}
