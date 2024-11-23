#include <stdio.h>

int main()
{
	FILE* fp;
	fp = fopen("number_power.txt", "r");
	int num1, num2;

	if (fp != NULL)
	{
		for (int i = 1; i <= 10; i++)
		{
			fscanf(fp, "%d%d", &num1, &num2);
			printf("%d %d\n", num1, num2);
		}
		fclose(fp);
	}

	return 0;
}