#include<stdio.h>

int main()
{
	FILE* fp;
	fp = fopen("execiseFile.txt", "r");
	int lineCount = 1;
	char isEof;

	if (fp != NULL)
	{
		while ((isEof = fgetc(fp)) != EOF)
		{
			if (isEof == '\n')
				lineCount++;
		}
		fclose(fp);
		printf("The line count is %d", lineCount);
	}

	return 0;
}