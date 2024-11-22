#include<stdio.h>

int main()
{
	FILE* fp;
	fp = fopen("writeThisFile.txt", "w");

	if (fp != NULL)
	{
		fputs("Hello world!\n", fp);
		fputs("Why programming is so fun\n", fp);
		fclose(fp);
	}

	return 0;
}