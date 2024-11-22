#include<stdio.h>

int main()
{
	char myString[10];
	int count = 0;
	FILE* fp;
	fp = fopen("getThisFile.txt", "r");

	if (fp != NULL)
	{
		while (fgets(myString, 10, fp))
			printf("The string #%d read: %s\n", count++, myString);

		fclose(fp);
	}


	return 0;
}