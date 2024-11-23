#include <stdio.h>

int main()
{
	FILE* fp;
	char fileName[100];
	char target;
	char test;
	int count = 0;
	
	printf("Please enter target file: ");
	scanf("%s", fileName);
	printf("Please enter target character: ");
	scanf(" %c", &target);

	fp = fopen(fileName, "r");

	if (fp != NULL)
	{
		while( (test = fgetc(fp))!= EOF)
		{
			if (test == target)
				count++;
		}

		fclose(fp);
		printf("The count '%c' in File of '%s': %d\n", target, fileName, count);
	}
	else
		printf("Error ocurred when opening the file\n");
		
	return 0;
}