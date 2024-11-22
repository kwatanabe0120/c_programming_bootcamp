#include <stdio.h>


int main()
{
	FILE* fp;

	fp = fopen("fprint.text", "w");

	if (fp != NULL)
	{
		fprintf(fp, "test test test");
		fclose(fp);
	}
	else
		printf("got null\n");

	return 0;
}