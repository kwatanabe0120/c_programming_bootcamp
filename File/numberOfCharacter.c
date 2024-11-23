#include <stdio.h>

int main()
{
	FILE* fp;
	fp = fopen("execiseFile.txt", "r");
	int count = 0;
	char test;

	if (fp != NULL)
	{
		while ((test = fgetc(fp)) != EOF)
		{
			count++;
		}

		// while (!feof(fp))
		// {
		// 	count++;
		// }
		// fclose(fp);
		printf("The num count is %d", count);
	}
	return 0;
}