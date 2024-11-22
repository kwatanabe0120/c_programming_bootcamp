#include <stdio.h>

int main()
{
	FILE* fp;
	fp = fopen("fputc.txt", "w");

	if (fp != NULL)
	{
		printf("Opened file succesfully\n");
		fputc('T', fp);
		fputc('E', fp);
		fputc('S', fp);
		fputc('T', fp);
		fputc('A', fp);
		fclose(fp);

	}
	else
	{
		printf("Opeing file failed");
	}

	return 0;
}