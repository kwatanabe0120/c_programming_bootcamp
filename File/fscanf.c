#include<stdio.h>

int main()
{
	FILE* fp;
	int num;

	fp = fopen("getThisFile.txt", "r");

	if (fp != NULL)
	{
		fscanf(fp, "%d", &num);
		// printf("The num: %d", num);
		fprintf(stdout, "%d", num);
		fclose(fp);
	}
	return 0;
}