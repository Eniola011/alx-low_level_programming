#include <stdio.h>

int main()
{
	FILE *fptr;

	fptr = fopen("0-main.txt", "r");

	char content[1000]; 

	if (fptr != NULL)
	{
		while(fgets(content, 1000, fptr))
		{
			printf("%s", content);
		}
	}
	else
	{
		printf("File opened unsuccessfully.");
	}

	printf("\n");
	fclose(fptr);
	return (0);
}
