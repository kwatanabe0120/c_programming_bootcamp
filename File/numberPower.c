#include <stdio.h>

int main()
{
	FILE* fp;
	fp = fopen("number_power.txt", "w");

	if (fp != NULL)
	{
		for(int i = 1; i <= 10; i++)
		{
			fprintf(fp, "%d %d\n",i, i*i);
		}
		fclose(fp);
	}
	return 0;
}