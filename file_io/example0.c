#include <stdio.h>

int main()
{
	FILE *fptr;

	fptr = fopen("0-main.txt", "r");

	if (fptr != NULL)
	{
		printf("File opened successfully.");
	}
	else
	{
		printf("File opened unsuccessfully.");
	}

	printf("\n");

	return (0);
}
