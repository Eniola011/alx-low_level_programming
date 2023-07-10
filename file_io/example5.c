#include <stdio.h>

int main()
{
	FILE *fptr;

	fptr = fopen("new.txt", "w");

	fputs("C language is hard\n", fptr);
	fputs("File I/O topic.", fptr);

	fclose(fptr);
	return (0);
}
