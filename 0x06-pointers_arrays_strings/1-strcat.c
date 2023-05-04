#include "main.h"
#include <stdio.h>

/**
 *_strncat - combines two strings
 *@dest: pointer destination
 *@src: pointer source
 *@n: number of bytes
 *Return: destination
 */
char *_strncat(char *dest, char *src, int n)
{
int dest_count, i;
for (dest_count = 0; dest[dest_count] != '\0'; dest_count++)
;

for (i = 0; (i < n) && (src[i] != '\0'); i++)
	dest[dest_count + i] = src[i];
dest[dest_count + i] = '\0';

return (dest);
}
